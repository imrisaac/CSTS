//
//  main.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//
#include "main.hpp"

using namespace cv;

static int s_interrupted = 0;

static void s_signal_handler (int signal_value){
    s_interrupted = 1;
}

static void s_catch_signals (void){
    struct sigaction action;
    action.sa_handler = s_signal_handler;
    action.sa_flags = 0;
    sigemptyset (&action.sa_mask);
    sigaction (SIGINT, &action, NULL);
    sigaction (SIGTERM, &action, NULL);
}

double mticks(){

    typedef std::chrono::high_resolution_clock clock;
    typedef std::chrono::duration<float, std::milli> duration;

    static clock::time_point start = clock::now();
    duration elapsed = clock::now() - start;
    return elapsed.count();
}

// TODO: do not return use a pointer
cv::Mat GetSquareImage(const cv::Mat &img, int target_width)
{
    int width = img.cols,
        height = img.rows;

    cv::Mat square = cv::Mat::zeros(target_width, target_width, img.type());

    int max_dim = (width >= height) ? width : height;
    float scale = ((float)target_width) / max_dim;
    cv::Rect roi;
    if (width >= height)
    {
        roi.width = target_width;
        roi.x = 0;
        roi.height = height * scale;
        roi.y = (target_width - roi.height) / 2;
    }
    else
    {
        roi.y = 0;
        roi.height = target_width;
        roi.width = width * scale;
        roi.x = (target_width - roi.width) / 2;
    }

    cv::resize(img, square(roi), roi.size());

    return square;
}


int main(int argc, char **argv){
    int c;
    int digit_optind = 0;

    // Register exit handler
    s_catch_signals();
    
    // super simple serial number file reading
    std::ifstream serialNumFile;
    std::string serialNum = "000000";

    serialNumFile.open("/home/nvidia/serialnum");
    
    serialNumFile >> serialNum;
    
    serialNumFile.close();
    
    cout << "Booting on " << serialNum << endl;

    // TODO: put this crap in a dumb helper
    while (1) {

        int this_option_optind = optind ? optind : 1;
        int option_index = 0;
        
        static struct option long_options[] = {
            {"ip",     required_argument,       0,  0 },
            {"port",   required_argument,       0,  0 },
            {"bitrate",  required_argument,     0,  0 },
            {"help",         no_argument,       0,  0 },
            {"test",         required_argument, 0, 'c'},
            {"pattern",            no_argument, 0,  0 },
            {0,         0,                 0,  0 }
        };
        
        // valid cmd line options
        c = getopt_long(argc, argv, "i:p:b:",
                        long_options, &option_index);
        if (c == -1)
            break;
        
        switch (c) {
            case 0:
                if ( option_index == 0 && optarg != NULL){
                    printf("ip: %s\n", optarg);
                }
                else if( option_index == 1 && optarg != NULL){
                    printf("port: %s\n", optarg);
                }
                else if ( option_index == 2 && optarg != NULL){
                    printf("bitrate: %s\n", optarg);
                }
                break;
                
            case '0':
            case '1':
            case '2':
                if (digit_optind != 0 && digit_optind != this_option_optind)
                    printf("digits occur in two different argv-elements.\n");
                digit_optind = this_option_optind;
                printf("option %c\n", c);
                break;
                
            case 'i':
                printf("option a\n");
                break;
                
            case 'p':
                printf("option b\n");
                break;
                
            case 'c':
                printf("option c with value '%s'\n", optarg);
                break;
                
            case 'd':
                printf("option d with value '%s'\n", optarg);
                break;
                
            case '?':
                break;
                
            default:
                printf("?? getopt returned character code 0%o ??\n", c);
        }
    }
    
    if (optind < argc) {
        printf("non-option ARGV-elements: ");
        while (optind < argc)
            printf("%s ", argv[optind++]);
        printf("\n");
    }
    
#ifdef WITH_ROS
    // Initilize ros
    ros::init(argc, argv, "Vision_Core");
#endif

#ifdef HAVE_DISPLAY
    namedWindow("Vision Core", WINDOW_AUTOSIZE);
    int key;
#endif

    Interfaces interfaces;
    Capture captureEO;
    Capture captureIR;
    PatternGenerator patternGenerator;
    SceneTrack sceneTrack;
    Stabilizer stabilizer;
    Writer writer;
    System system;
    
    system.helloWorld();

    exit(0);
    
    cv::Mat cropped;
    cropped.create(cv::Size(960, 720), CV_8UC3);
    
    Zoom zoom;
    Boson640_90_crop boson640_90_crop;
    
    Boson640_90 boson640_90;

    // TODO: move this
    // Default to EO camera

    interfaces.initilize();
    usleep(100000);
    
    cv::VideoCapture capEO;
    cv::VideoCapture capIR;
    
    cv::VideoWriter udpWriter;
    
    cv::Mat frameEO;
    cv::Mat frameIR;
    
    capEO = *captureEO.initilize(AR1820);
    capIR = *captureIR.initilize(Boson);
    //patternGenerator.initilize();

    // stabilizer.initilize();
    // sceneTrack.initilize();

    usleep(100000);
    
    // read first EO frame and report its size
    capEO.read(frameEO);
    cout << "EO size: " << frameEO.cols << "x" << frameEO.rows << endl;

    // read first IR frame and report its size
    capIR.read(frameIR);
    cout << "IR size: " << frameIR.cols << "x" << frameIR.rows << endl;

    udpWriter = *writer.init(cropped);
    
    // interfaces thread
    std::thread interfacesThread([&](){
        interfaces.run();
    });

    // capture thread
    std::thread captureEOThread([&](){
       // captureEO.run();
    });
    
    // capture2 thread
    std::thread captureIRThread([&](){
        //captureIR.run();
    });

    // sceneTrack thread
    std::thread sceneTrackThread([&](){
       // sceneTrack.run();
    });
    
    // stabilizer thread
    std::thread stabilizerThread([&](){
       // stabilizer.run();
    });
    
    // writer thread
    std::thread writerThread([&](){
		writer.run();
    });

    cout << "starting main loop" << endl;

    // TODO: i have two things called frame count fix this
    long frameCounter = 0;

    long captureFrameCounter = 0;

    int freetime = 0;

    std::time_t timeBegin = std::time(0);
    int tick = 0;

    cv::Mat dualCanvas;
    cv::Mat fourThreeCanvas;

    int output_width = writer.getStreamWidth();
    int output_height = writer.getStreamHeight();

    dualCanvas.create(cv::Size(output_width, output_height), CV_8UC3);
    
    fourThreeCanvas.create(cv::Size(output_width, output_height), CV_8UC3);

    double start, notStart;
    
    OutputMode outputMode = simpleEO;
    
    clock_t t1;
    
    cv::cuda::GpuMat gpuMat;
    
    // TODO: refactor this zoom shit to actual focal lengths i mean FUUUUCK
    int focalLength = 44;
    double cropFactor = zoom.scaleFactor810;
    
    double cropFactorBoson = boson640_90.scaleFactor720;

    while (true)
    {
    
        // get out desired output mode
        interfaces.getDesiredOutputMode(&outputMode);
        
        switch(outputMode){
            case simpleEO:
            
                capEO.read(frameEO);
                
                if (frameEO.data != NULL){
                    

 /*                  
                    // gpu crop and scale
                    gpuMat.upload(frameEO);
                    
                    gpuMat(zoom.wide0).copyTo(gpuMat);
                    
                    cv::cuda::resize(gpuMat, gpuMat, cv::Size(0, 0), zoom.scaleFactor810, zoom.scaleFactor810);
                    
                    gpuMat.download(frameEO);
                    t1 = clock() - t1;
                    std::cout << (((float)t1)/CLOCKS_PER_SEC)*1000 << std::endl;
*/
                    
                    interfaces.getZoom(&focalLength);
                    
                    // Apply crop
                    switch(focalLength){
                        case 44:
                            frameEO(zoom.wide44).copyTo(frameEO);
                            cropFactor = zoom.scaleFactor810;
                            break;
                            
                        case 55:
                            frameEO(zoom.wide55).copyTo(frameEO);
                            cropFactor = zoom.scaleFactor720;
                            break;
                            
                        case 66:
                            frameEO(zoom.wide66).copyTo(frameEO);
                            cropFactor = zoom.scaleFactor480;
                            break;
                            
                        case 77:
                            frameEO(zoom.tele77).copyTo(frameEO);
                            cropFactor = zoom.scaleFactor240;
                            break;
                            
                        default:
                        
                            // default to minimum required crop
                            frameEO(zoom.wide44).copyTo(frameEO);
                            cropFactor = zoom.scaleFactor810;
                            break;
                    }
                    
                    cv::resize(frameEO, frameEO, cv::Size(0, 0), cropFactor, cropFactor);
                    putText(frameEO, (serialNum + " v0.1.0.0"), cvPoint(25, 25), FONT_HERSHEY_COMPLEX_SMALL, 0.8, cvScalar(255, 255, 255), 1, cv::LineTypes::LINE_AA);
                    writer.write(frameEO); 
                    
               //     t1 = clock();               
                   // udpWriter << frameEO;
                 //   t1 = clock() - t1;
                 //   std::cout << (((float)t1)/CLOCKS_PER_SEC)*1000 << std::endl;
                    
                    
#ifdef DEBUG
                    putText(result, "8006", cvPoint(30, 30),
                            FONT_HERSHEY_COMPLEX_SMALL, 0.8, cvScalar(255, 255, 255), 1, cv::LineTypes::LINE_AA);
#endif

#ifdef HAVE_DISPLAY
 
                    // draw our purposed crop
                    rectangle(frameEO, zoom.wide44, Scalar(255, 0, 0), 1, 8, 0);

                    imshow("Vision Core", cropped);

                    key = cv::waitKey(1) & 0xff;

                    if (key == 27 /*Esc*/){
                        break;
                    }
#endif
                    captureFrameCounter = captureEO.getFrameCount();

                }else{
                    // TODO: streame error screen instead
                    cout << "no image data" << endl;
                }

                break;

            case simpleIR:

                capIR.read(frameIR);
                
                interfaces.getZoom(&focalLength);
                
                // Apply crop
                switch(focalLength){
                    case 44:
                        frameIR.copyTo(frameIR);
                        cropFactorBoson = boson640_90.scaleFactor720;

                        break;
                        
                    case 55:
                        frameIR(boson640_90_crop.wide44).copyTo(frameIR);
                        cropFactorBoson = boson640_90_crop.scaleFactor384;
                        break;
                        
                    case 66:
                        frameIR(boson640_90_crop.wide55).copyTo(frameIR);
                        cropFactorBoson = boson640_90_crop.scaleFactor300;
                        break;
                        
                    default:
                    
                        // default to minimum required crop
                        cropFactor = boson640_90.scaleFactor720;
                        focalLength = 44;
                        break;
                }
            
                cv::resize(frameIR, frameIR, cv::Size(0, 0), cropFactorBoson , cropFactorBoson);
                
                if(44 == focalLength){
                    cv::copyMakeBorder(frameIR, frameIR, 0, 0, 192, 192, BORDER_CONSTANT);
                }

                putText(frameIR, (serialNum + " v0.1.0.0"), cvPoint(25, 25), FONT_HERSHEY_COMPLEX_SMALL, 0.8, cvScalar(255, 255, 255), 1, cv::LineTypes::LINE_AA);

                if (NULL != frameIR.data){

                    //writer.write(frameIR);
                    udpWriter << frameIR;

#ifdef HAVE_DISPLAY
                    imshow("Vision Core", frameIR);
                    
                    key = cv::waitKey(1) & 0xff;

                    if (key == 27 /*Esc*/){
                        break;
                    }
#endif

                }else{
                    // TODO: streamer error screen instead
                    cout << "no image data" << endl;
                }

                break;

            case Dual:

                if (frameEO.data != NULL && frameIR.data != NULL){

                  // hconcat(left, right, dualCanvas);

                   rectangle(dualCanvas, Rect(0, 0, dualCanvas.cols / 2, dualCanvas.rows), Scalar(255, 0, 0), 1, 8, 0);
                   rectangle(dualCanvas, Rect(dualCanvas.cols / 2, 0, dualCanvas.cols / 2, dualCanvas.rows), Scalar(255, 0, 0), 1, 8, 0);
                   //writer.write(dualCanvas);

#ifdef HAVE_DISPLAY
                    imshow("Vision Core", dualCanvas);
                    key = cv::waitKey(1) & 0xff; 

                    if (key == 27 /*Esc*/){
                        break;
                    }
#endif

                }else{
                    //cout << "no image data" << endl;
                }

                break;
        }

        if (s_interrupted) {
            std::cout << "killing main" << std::endl;
            break;
        }
    }

    std::cout << "requesting thread stop" << std::endl;
    
    // Request threads to stop
    sceneTrack.stop();
    stabilizer.stop();
    captureEO.stop();
    captureIR.stop();
    interfaces.stop();
    writer.stop();

    usleep(300000);

    // Waiting for thread to join, sync threads for exit
    // if a thread fails to stop we will get stuck waiting for that particular thread to join
    captureEOThread.join();
    captureIRThread.join();
    sceneTrackThread.join();
    interfacesThread.join();
    stabilizerThread.join();
    
    // we close the writer last so we can use it for remote debug output as long as possible
    writerThread.join();
    
    std::cout << "threads joined, ready to exit" << std::endl;
    std::cout << "exiting main" << std::endl;
    return 0;
}
