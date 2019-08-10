//
//  capture2.hpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef capture2_hpp
#define capture2_hpp

#include <stdio.h>
#include "thread.hpp"

// opencv
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"  
#include "opencv2/highgui/highgui.hpp"  // not needed here
#include "opencv2/tracking.hpp"         // for tracking, not needed here
#include "opencv2/xphoto.hpp"           // for white balance

// in repo
#include "common.h"
#include "captureCommon.hpp"

using namespace std;
using namespace cv;

struct Capture2Params
{
    WbAlgo wbAlgo;
    CamIndex camIndex;
    int gstFlip;
    Capture2Params();
};

/**
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class Capture2 : public Threader
{
public:
    /// Initilizes the frame source and populates initial Mats
    void initilize();

    /// Runner containing the capture loop that runs in the capture thread
    void run();

    /// Returns latest available frame straight out of camera no preprocessing
    cv::Mat getLatestFrameColor() { return newFrame; };

    /// Returns the latest available frame that has been converted to grayscale
    cv::Mat getLatestFrameGray() { return newFrameGray; };

    cv::Mat getLatestFramePreProcessed() { return preProcessedFrame; };

private:
    std::string getCameraPipeline(CamIndex index, int width, int height, int fps);

    cv::VideoCapture cap;

    // newest color frame
    cv::Mat newFrame;

    // newest color frame converted to
    cv::Mat newFrameGray;

    // frame on which corrections are made in parallel
    cv::Mat preProcessedFrame;

    cv::Ptr<cv::xphoto::WhiteBalancer> wb;

    // parameters for reading only, for now
    Capture2Params params_;

    pthread_mutex_t capture_mutex;
};

#endif /* capture2_hpp */
