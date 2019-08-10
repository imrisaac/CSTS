//
//  capture2.cpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "capture2.hpp"

// default parameters
Capture2Params::Capture2Params()
{
    camIndex = Boson;
    wbAlgo = Disabled;
    captureWidth = 640;
    captureHeight = 512;
    captureFPS = 60;
    blenderEnable = false;  
    blenderAlpha = 0.5;
    blenderBeta = 0.5;
    gstFlip = 0;
}

/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void Capture2::initilize()
{

    cout << "Initilizing capture " << endl;

#ifdef JETSON
    // open gstreamer pipeline
    if (!cap.open(getCameraPipeline(params_.camIndex, 0, 0, 0), cv::CAP_GSTREAMER))
    {

        cout << "gstreamer capture failed to initilized" << endl;
    }

    cout << "gstreamer capture initilized" << endl;
#endif

#if MAC

    // No gstreamer pipelines are working for MAC right now
    if (!cap.open(0))
    {
        cout << "capture failed to initilize" << endl;
    }

    cout << "capture initilized" << endl;

#endif

    switch (params_.wbAlgo)
    {
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
void Capture2::run()
{

    cout << "capture start" << endl;

    // Check if thread is requested to stop ?
    while (false == stopRequested())
    {

        //pthread_mutex_lock(&capture_mutex);

        // will block until new frame is available
        cap >> newFrame;

        if ( true == params_.blenderEnable ){
            previousFrame = newFrame.clone();
        }

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
            if (params_.wbAlgo != Disabled){
                wb->balanceWhite(preProcessedFrame, preProcessedFrame);
            }
        }
        else if (newFrame.empty()){

            cout << "Frame capture error" << endl;
            break;

        }else{

            cout << "Frame capture error" << endl;
        }
    }

    cout << "releasing capture pipeline" << std::endl;

    cap.release();

    cout << "capture pipeline released" << std::endl;


#if not MAC
    // osx does this for us 
    // this is the only writer, destroy mutex
    pthread_mutex_destroy(&capture_mutex);
#endif 

    cout << "capture mutex destroyed, capture exiting" << std::endl;
}

/**
    gstCameraPipeline
    returns gstreamer pipeline string
 */
std::string Capture2::getCameraPipeline(CamIndex camera, int width, int height, int fps)
{

    string pipeline;

    ostringstream _width;
    ostringstream _height;
    ostringstream _fps;

    _width << width;
    _height << height;
    _fps << fps;

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
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case AR1820:
        pipeline = "nvarguscamerasrc exposurecompensation=0 wbmode=0 maxperf=true ee-mode=1 eestrength=-1 sensor-id=0 ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=" + std::to_string(params_.gstFlip) + " ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case Boson:
        pipeline = "v4l2src device =/dev/video0 ! 'video/x-raw, format=(string)UYVY, width=(int)" + std::to_string(params_.captureWidth) + ", height=" +
                   std::to_string(params_.captureHeight) + ", framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1' ! nvvidconv flip - method = 4 ! ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    default:

        // TODO: default to a test pattern
        // default to the tx2 dev kit pipeline
        pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;
    }

    return pipeline;
}
