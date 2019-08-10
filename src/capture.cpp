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

// default parameters
CaptureParams::CaptureParams()
{
    wbAlgo = Simple;
    gstFlip = 0;
}
/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void Capture::initilize(){
    
    cout << "Initilizing capture " << endl;

#ifdef JETSON
    // open gstreamer pipeline
    if ( !cap.open(getCameraPipeline(AR1820, 1280, 720, 30), cv::CAP_GSTREAMER) ){
        
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
