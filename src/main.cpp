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
    sigaction (SIGTSTP, &action, NULL);
    sigaction (SIGTERM, &action, NULL);
    sigaction (SIGKILL, &action, NULL);
}

// TODO: do not return use a pointer
cv::Mat GetSquareImage(const cv::Mat &img, int target_width = 640)
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
#endif

    Interfaces interfaces;
    Capture capture;
    Capture capture2;
    PatternGenerator patternGenerator;
    SceneTrack sceneTrack;
    Stabilizer stabilizer;
    Writer writer;
    
    capture.initilize(AR1820);
    capture2.initilize(Boson);
    patternGenerator.initilize();

    usleep(100000);
   // interfaces.initilize(argc, argv);

    writer.init(capture.getLatestFrameColor());
    
    // interfaces thread
    std::thread interfacesThread([&](){
       // interfaces.run();
    });

    // capture thread
    std::thread captureThread([&](){
        capture.run();
    });
    
    // capture2 thread
    std::thread capture2Thread([&](){
        capture2.run();
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

    long frameCounter = 0;

    std::time_t timeBegin = std::time(0);
    int tick = 0;

    cv::Mat dualCanvas;

    cv::Mat left;
    cv::Mat right;

    int stream_width = writer.getStreamWidth();
    int stream_height = writer.getStreamHeight();

    dualCanvas.create(cv::Size(stream_width, stream_height), CV_8UC3);

    while ( true ) {

        frameCounter++;

        std::time_t timeNow = std::time(0) - timeBegin;
        clock_t stop = clock();

        if (timeNow - tick >= 1)
        {
            tick++;
            cout << "Frames per second: " << frameCounter << endl;
            frameCounter = 0;
            cout << dualCanvas.cols << dualCanvas.rows << endl;
        }

        left = capture2.getLatestFrameColor();
        right = capture.getLatestFrameColor();
        

        // convert images to correct aspect ratio
        if (left.data != NULL){
            left = GetSquareImage(left, stream_width / 2);
        }

        if(right.data != NULL){
            right = GetSquareImage(right, stream_width / 2);
        }

        //image_temp1.copyTo(result(Rect(0, 0, image.cols, image.rows / 2)));
       // image_temp2.copyTo(result(Rect(0, image.rows/2, image.cols, image.rows/2));

        
       // right.copyTo(dualCanvas( cv::Rect((stream_width / 2), 0, stream_width, stream_height)) );

        if (left.data != NULL && right.data != NULL){
			
           hconcat(left, right, dualCanvas);
           
			writer.write(dualCanvas);
           


#ifdef HAVE_DISPLAY

            imshow("Vision Core", dualCanvas);
            const int key = cv::waitKey(1) & 0xff;

            if (key == 27 /*Esc*/){
                break;
            }
#endif

        }else{
			//cout << "no image data" << endl;
		}

		// stop this thread from running away
		//usleep(30000);

        if (s_interrupted) {
            std::cout << "interrupt received, killing…" << std::endl;
            break;
        }

    }

    std::cout << "requesting thread stop" << std::endl;
    
    // Request threads to stop
    sceneTrack.stop();
    stabilizer.stop();
    capture.stop();
    capture2.stop();
    interfaces.stop();
    writer.stop();
    
    // exit object tracking thread
    // exit scene tracking thread
    // exit stabilization thread
    // exit c2 thread
    // exit capture thread
    // exit main
    
    // Waiting for thread to join, sync threads for exit
    // if a thread fails to stop we will get stuck waiting for that particular thread to join
    captureThread.join();
    capture2Thread.join();
    sceneTrackThread.join();
    interfacesThread.join();
    stabilizerThread.join();
    
    // we close the writer last so we can use it for remote debug output as long as possible
    writerThread.join();
    
    std::cout << "threads joined, ready to exit" << std::endl;
    std::cout << "exiting main" << std::endl;
    return 0;
}
