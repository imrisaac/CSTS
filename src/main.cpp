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

    // TODO: move this
    // Default to EO camera
    OutputMode outputMode = simpleIR;

    interfaces.initilize();
    usleep(100000);
    
    cv::VideoCapture capEO;
    cv::VideoCapture capIR;
    
    capEO = *captureEO.initilize(AR1820);
    capIR = *captureIR.initilize(Boson);
    //patternGenerator.initilize();

    // stabilizer.initilize();
    // sceneTrack.initilize();

    usleep(100000);

    writer.init(captureEO.getLatestFrameColor());
    
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

    cv::Mat frameEO;
    cv::Mat frameIR;
    
    cv::Mat cropped;
    
    Zoom zoom;

    int stream_width = writer.getStreamWidth();
    int stream_height = writer.getStreamHeight();

    dualCanvas.create(cv::Size(stream_width, stream_height), CV_8UC3);

    double start, notStart;
    
    clock_t t1;

    while (true)
    {

        frameCounter++;

        std::time_t timeNow = std::time(0) - timeBegin;
        clock_t stop = clock();

        if (timeNow - tick >= 1){
            tick++;
            cout << "Frames per second: " << frameCounter << endl;
            cout << "main freetime: " << freetime << "us " << mticks() << endl;
            frameCounter = 0;
            freetime = 0;
        }
        
        // // convert images to correct aspect ratio
        // if (left.data != NULL && right.data != NULL ){
        //     left = GetSquareImage(left, stream_width / 2);
        //     cout << "left: " << left.cols << " " << left.rows << endl;
        //     cout << "left: 0 0 " << dualCanvas.cols/2 << " " << dualCanvas.rows << endl;
        //     left.copyTo(dualCanvas(Rect(0, 0, dualCanvas.cols/2, dualCanvas.rows)));

        //     right = GetSquareImage(right, stream_width / 2);
        //    // cout << "right " << right.cols << " " << right.rows << endl;
        //    // cout << 0 << " " << dualCanvas.cols/2 << " " << dualCanvas.cols / 2 << " " << dualCanvas.rows *2 << endl;
        //     right.copyTo(dualCanvas(Rect(dualCanvas.cols / 2, 0, dualCanvas.cols / 2, dualCanvas.rows)));
        // }       
        

        //image_temp1.copyTo(result(Rect(0, 0, image.cols, image.rows / 2)));
       // image_temp2.copyTo(result(Rect(0, image.rows/2, image.cols, image.rows/2));

        
       // right.copyTo(dualCanvas( cv::Rect((stream_width / 2), 0, stream_width, stream_height)) );

        switch(outputMode){
            case simpleEO:
            
                t1 = clock();
                capEO.read(frameEO);
                t1 = clock() - t1;
                
               // std::cout << "it takes " << (((float)t1)/CLOCKS_PER_SEC)*1000 << " ms to capture a frame. The capture rate can reach " << 1/(((float)t1)/CLOCKS_PER_SEC) << " FPS" << std::endl;

                if (frameEO.data != NULL){
                    
                    cropped = frameEO(zoom.wide);

                    writer.write(cropped);
                    
#ifdef DEBUG
                    putText(result, "D", cvPoint(30,30), 
                                                    FONT_HERSHEY_COMPLEX_SMALL, 0.8, cvScalar(200,200,250), 1, CV_AA);
#endif

 #ifdef HAVE_DISPLAY
 
                    // draw our purposed crop
                    rectangle(frameEO, zoom.wide, Scalar(255, 0, 0), 1, 8, 0);

                    imshow("Vision Core", frameEO);

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

                t1 = clock();
                capIR.read(frameIR);
                t1 = clock() - t1;

               // cv::resize(frameIR, frameIR, cv::Size(0, 0), (1080/640), (810/512));

                if (NULL != frameIR.data){

                    writer.write(frameIR);

#ifdef HAVE_DISPLAY
                    imshow("Vision Core", frameIR);
#endif
                    captureFrameCounter = captureIR.getFrameCount();

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

/*
        // Interrupt catcher and throtteling
        while (captureFrameCounter == captureEO.getFrameCount()){

            if (s_interrupted) {
                std::cout << "interrupt received" << std::endl;
                break;
            }

            freetime += 1;
            usleep(1);
        }
        * */

        if (s_interrupted) {
            std::cout << "killing from main" << std::endl;
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
