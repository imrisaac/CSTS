//
//  capture.hpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef capture_hpp
#define capture_hpp

#include <stdio.h>
#include "thread.hpp"

// opencv
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/tracking.hpp"
#include "opencv2/xphoto.hpp"               // for white balance

// special sauce
#include "common.h"
#include "captureCommon.hpp"

using namespace std;
using namespace cv;

struct CaptureParams
{
    WbAlgo wbAlgo;
    CamIndex camIndex;
    int captureWidth;
    int captureHeight;
    int captureFPS;
    bool blenderEnable;
    double blenderAlpha;
    double blenderBeta;
    int gstFlip;
    string pattern0Dir;
    CaptureParams();
};

/**
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class Capture: public Threader
{
public:
    
    /// Initilizes the frame source and populates initial Mats
    void initilize(CamIndex index);

    void initiliize(CamIndex index, std::queue<cv::Mat> capture)

        /// Runner containing the capture loop that runs in the capture thread
        void run();

    /// Returns latest available frame straight out of camera no preprocessing
    cv::Mat getLatestFrameColor(){return newFrame;};
    
    /// Returns the latest available frame that has been converted to grayscale
    cv::Mat getLatestFrameGray(){return newFrameGray;};

    cv::Mat getLatestFramePreProcessed(){return preProcessedFrame;};

    long getFrameCount(){return frameCount;};

private:
    
    std::string getCameraPipeline(CamIndex index);

    cv::VideoCapture cap;
    
    // newest color frame 
    cv::Mat newFrame;
    
    // newest color frame converted to
    cv::Mat newFrameGray;

    // frame on which corrections are made in parallel
    cv::Mat preProcessedFrame;

    cv::Ptr<cv::xphoto::WhiteBalancer> wb;

    CaptureParams params_;

    pthread_mutex_t capture_mutex;

    //  this will limit runtime to...8.54e13 hours need to check that math
    long frameCount;

};


#endif /* capture_hpp */
