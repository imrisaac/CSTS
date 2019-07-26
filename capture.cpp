//
//  capture.cpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "capture.hpp"


using namespace std;
/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void Capture::initilize(){
    
    cout << "Initilizing capture " << endl;
    
#if MAC
    
    // Just use the webcam
    if ( !cap.open(0) ){
        cout << "mac capture failed to initilize" << endl;
    }
    cout << "mac capture intilized" << endl;
    
#elif JETSON
  
    // open gstreamer pipeline
    if ( !cap.open(getCameraPipeline(DevKitTx2, 1920, 1080, 30), cv::CAP_GSTREAMER) ){
        
        cout << "gstreamer capture failed to initilized" << endl;
    }
    
    cout << "gstreamer capture initilized" << endl;
    
#else
    
// need to auto detect system type and throw compiler error here
    
#endif
    
}

/**
    Runner for the capture thread
    contains the capture loop that
 
 */
void Capture::run(){
    
    cout << "capture start" << endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        pthread_mutex_lock(&capture_mutex);
        
        cap >> newFrame;
        
        pthread_mutex_unlock(&capture_mutex);
        
        if (newFrame.empty())
        {
            cout << "End of the video file!" << endl;
            break;
        }
        
    }
    
    cout << "capture loop stopped" << std::endl;
    
}

/**
    gstCameraPipeline
    returns gstreamer pipeline string
 */
std::string Capture::getCameraPipeline(CamIndex camera, int width, int height, int fps){
    
    string pipeline;
    
    ostringstream _width;
    ostringstream _height;
    ostringstream _fps;
    
    _width << width;
    _height << height;
    _fps << fps;
    
    switch(camera){
        case DevKitTx1:
            pipeline = "nvcamerasrc ! video/x-raw(memory:NVMM), width=(int)" + _width.str() + ", height=(int)" +
                        _height.str() + ", format=(string)I420, framerate=(fraction)" + _fps.str() +
                        "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
            break;
        
        case DevKitTx2:
        case DevKitNano:
            pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(width) + ", height=(int)" +
                        std::to_string(height) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(fps) +
                        "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
            break;
            
        case AR1820:
            break;
            
        case Boson:
            break;
            
        default:
            
            // default to the tx2 dev kit pipeline
            pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(width) + ", height=(int)" +
                        std::to_string(height) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(fps) +
                        "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
            break;

    }
    
    return pipeline;
}



