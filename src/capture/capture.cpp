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

// evil macro for printing variable name
#define getName(var)  #var 

// default parameters
CaptureParams::CaptureParams()
{
    camIndex = DevKitTx2;
    wbAlgo = Disabled;
    captureWidth = 1280;
    captureHeight = 720;
    captureFPS = 30;
    blenderEnable = false;  
    blenderAlpha = 0.5;
    blenderBeta = 0.5;
    gstFlip = 0;
}
/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void Capture::initilize(CamIndex index){
    
    cout << "Initilizing capture " << endl;

#ifdef JETSON

    // open gstreamer pipeline
    if ( !cap.open(getCameraPipeline(index), cv::CAP_GSTREAMER) ){

        cout << "gstreamer capture failed to initilized" << endl;

    }
    
    cout << "gstreamer capture initilized" << endl;
    
#endif
    
#if MAC

    // No gstreamer pipelines are working for MAC right now
    if ( !cap.open(0) ){
        cout << "capture failed to initilize" << endl;
    }

    cout << "capture initilized" << endl;

#endif

    switch( params_.wbAlgo){
        case Disabled:
            break;

        case Simple:

            wb = xphoto::createSimpleWB();
            break;

        case GrayWorld:

            wb = xphoto::createGrayworldWB();
            break;

        case Learning:

            //TODO: add dataset for deep learning white balance, this is insane deep learnign white balance wtf
            //wb = xphoto::createLearningBasedWB(modelFilename);
            break;

        default:

            wb = xphoto::createSimpleWB();
            break;
    }

}

/**
    Runner for the capture thread
    contains the capture loop that ingests frames from the camera pipeline
    the capture object will block allowing correct timing with framerate
 */
void Capture::run(){
    
    cout << "capture start" << endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        //pthread_mutex_lock(&capture_mutex);
        
        // will block until new frame is available
        cap >> newFrame;
        
       // pthread_mutex_unlock(&capture_mutex);

        /* 
            here we will do as much free image processing as possible, this must
            be done faster than the stabilization. 
            Final warp is applied to the preProcessedFrame
        */
        if (newFrame.data != NULL){

            // this is expensive to do
            preProcessedFrame = newFrame.clone();

            // white balance
            if ( params_.wbAlgo != Disabled ){
                wb->balanceWhite(preProcessedFrame, preProcessedFrame);
            }

        }else if (newFrame.empty()){

            cout << "End of video file" << endl;
            break;

        }else{

            cout << "Frame capture error" << endl;    

        }
        
    }
    
    cout << "releasing capture pipeline" << std::endl;

    cap.release();

    cout << "capture pipeline released" << std::endl;

    // this is the only writer, destroy mutex

#if not MAC
    // OSX will do this for us, and gets angry if we do it ourselves
    pthread_mutex_destroy(&capture_mutex);
#endif

    cout << "capture mutex destroyed, capture exiting" << std::endl;

}

/**
    gstCameraPipeline
    returns gstreamer pipeline string
 */
std::string Capture::getCameraPipeline(CamIndex camera)
{

    string pipeline;

    //TODO: handle calling two of the same pipelines
    switch (camera)
    {
    case DevKitTx1:
        pipeline = "nvcamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)I420, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case DevKitTx2:
    case DevKitNano:
        pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, width=(int)" + std::to_string(params_.captureWidth) + 
                   ", height=(int)" + std::to_string(params_.captureHeight) + ",  format=(string)BGR ! appsink";
        break;

    case AR1820:
        pipeline = "nvarguscamerasrc exposurecompensation=0 wbmode=0 maxperf=true ee-mode=1 eestrength=-1 sensor-id=0 ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=" + std::to_string(params_.gstFlip) + " ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case Boson:
        pipeline = "v4l2src device=/dev/video0 ! 'video/x-raw, format=(string)UYVY, width=(int)" + std::to_string(640) + ", height=(int)" +
                   std::to_string(512) + ", framerate=(fraction)" + std::to_string(60) +
                   "/1' ! nvvidconv flip-method=4 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    default:

        // TODO: default to a test pattern
        // default to the tx2 dev kit pipeline
        pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;
    }
    cout << "pipeline selected: " << pipeline << endl;

    return pipeline;
}
