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
    SceneTrack sceneTrack;
    Stabilizer stabilizer;
    Writer writer;
    
    capture.initilize();
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

    while ( true ) {

        Mat image = capture.getLatestFrameColor();

        //writer.write(image);

        if (image.data != NULL){
            imshow("Vision Core", image);

            const int key = cv::waitKey(5) & 0xff;

            if (key == 27 /*Esc*/){
                break;
            }
        }else{
			cout << "no image data" << endl;
		}

        // waitkey for 33ms resulting approximatly 30fps display, TODO: paramaterize all fps related values
        waitKey(33);

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
    sceneTrackThread.join();
    interfacesThread.join();
    stabilizerThread.join();
    
    // we close the writer last so we can use it for remote debug output as long as possible
    writerThread.join();
    
    std::cout << "threads joined, ready to exit" << std::endl;
    std::cout << "exiting main" << std::endl;
    return 0;
}
