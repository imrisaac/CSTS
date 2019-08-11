//
//  capture2.cpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "patternGenerator.hpp"

// default parameters
PatternGeneratorParams::PatternGeneratorParams()
{
    camIndex = Pattern;
    wbAlgo = Disabled;
    captureWidth = 640;
    captureHeight = 512;
    captureFPS = 60;
    blenderEnable = false;  
    blenderAlpha = 0.5;
    blenderBeta = 0.5;
    pattern0Dir = "../images/test_pattern.jpg";
}

/**
    Initilizer for the capture loop
    created capture object and tries to grab a frame from it
 */
void PatternGenerator::initilize()
{

    newFrame = imread( params_.pattern0Dir, IMREAD_COLOR );

    cout << "test pattern initilized" << endl;

    cout << "capture initilized" << endl;

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
void PatternGenerator::run()
{

    cout << "capture start" << endl;
    

    // Check if thread is requested to stop ?
    while (false == stopRequested())
    {

        //pthread_mutex_lock(&capture_mutex);
        
        if (Pattern != params_.camIndex){
            
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
                
            }else if (newFrame.empty()){

                cout << "Frame capture error" << endl;
                break;

            }else{

                cout << "Frame capture error" << endl;
            }
            
        }else{
            
            // without a capture there is now blocking element to throttle
            usleep(30000);
            
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
