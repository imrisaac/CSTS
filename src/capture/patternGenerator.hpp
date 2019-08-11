//
//  capture2.hpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef patternGenerator_hpp
#define patternGenerator_hpp

#include <iostream>
#include <cmath>
#include <fstream>
#include <time.h>
#include <pthread.h>
#include <thread>         // std::thread
#include <mutex>          // std::mutex
#include <chrono>         // thread sleep

#include <string>         // input arg parsing
#include <vector>
#include <algorithm>
#include <numeric>
#include <unistd.h>
#include <getopt.h>

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
#include "thread.hpp"

using namespace std;
using namespace cv;

struct PatternGeneratorParams
{
    WbAlgo wbAlgo;
    CamIndex camIndex;
    int captureWidth;
    int captureHeight;
    int captureFPS;
    bool blenderEnable;
    double blenderAlpha;
    double blenderBeta;
    string pattern0Dir;
    PatternGeneratorParams();
};

/**
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class PatternGenerator : public Threader
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

    void blender(cv::Mat src1, cv::Mat src2, cv::Mat dst);

    cv::VideoCapture cap;

    // newest color frame
    cv::Mat newFrame;

    cv::Mat previousFrame;

    // newest color frame converted to
    cv::Mat newFrameGray;

    // frame on which corrections are made in parallel
    cv::Mat preProcessedFrame;

    cv::Ptr<cv::xphoto::WhiteBalancer> wb;

    // parameters for reading only, for now
    PatternGeneratorParams params_;

    pthread_mutex_t capture_mutex;
};

#endif // patterhGenerator
