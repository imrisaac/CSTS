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
    captureWidth = 960;
    captureHeight = 720;
    captureFPS = 30;
    blenderEnable = false;  
    blenderAlpha = 0.5;
    blenderBeta = 0.5;
    gstFlip = 0;
    pattern0Dir = "test_pattern.jpg";
}

/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void Capture::initilize(CamIndex index){
    
    cout << "Initilizing capture " << endl;

    params_.camIndex = index;

    cout << "frame count reset" << endl;

    cout << "max frames " << LONG_MAX << endl;

    frameCount = 0;

#ifdef JETSON

    if( Pattern != index){
        // open gstreamer pipeline
        if ( !cap.open(getCameraPipeline(index), cv::CAP_GSTREAMER) ){

            // TODO: retry then fall back to error screen generator
            cout << "gstreamer capture failed to initilized" << endl;

        }
        
        cout << "gstreamer capture initilized" << endl;
    }else{

        newFrame = imread(params_.pattern0Dir, IMREAD_COLOR);


        cout << "test pattern initilized" << endl;
    }
    
#endif
    
#if MAC

    if (Pattern != index ){
        // No gstreamer pipelines are working for MAC right now
        if ( !cap.open(0) ){
            cout << "capture failed to initilize" << endl;
        }
        cap >> newFrame;

        if (NULL != newFrame.data){
            cout << "first frame capture complete" << endl;
            frameCount++;
        }

        cout << "standard capture initilized" << endl;

    }else{

        newFrame = imread(params_.pattern0Dir, IMREAD_COLOR);
        frameCount++;

        cout << "test pattern initilized" << endl;
    }

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

    if(Pattern == params_.camIndex ){
        // pattern generator does not need the runner, exit immediatly
        return;
    }
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){

        //pthread_mutex_lock(&capture_mutex);
        
        // will block until new frame is available
        cap >> newFrame;
        frameCount++;

        
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
    
    cout << "releasing capture" << std::endl;

    cap.release();

    cout << "capture released" << std::endl;

    // this is the only writer, destroy mutex

#if not MAC
    // OSX will do this for us, and gets angry if we do it ourselves
    pthread_mutex_destroy(&capture_mutex);
#endif

    cout << "capture mutex destroyed, capture exiting" << std::endl;

}

/**
    getCameraPipeline
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

    case Pattern:
        pipeline = "";
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
