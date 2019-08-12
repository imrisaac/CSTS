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
    pattern0Dir = "test_pattern.jpg";
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
        // more to come
            
        // without a capture there is now blocking element to throttle
        usleep(30000);
            
    }

    cout << "releasing capture pipeline" << std::endl;

    cap.release();

    cout << "capture pipeline released" << std::endl;


#if not MAC
    // osx does this for us 
    // this is the only writer, destroy mutex
    pthread_mutex_destroy(&capture_mutex);
#endif 

    cout << "pattern mutex destroyed, capture exiting" << std::endl;
}
