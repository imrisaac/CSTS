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

enum CamIndex {
        DevKitTx2   = 0,
        DevKitTx1   = 1,
        DevKitNano  = 2,
        AR1820      = 3,
        Boson       = 4,
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
    void initilize();
    
    /// Runner containing the capture loop that runs in the capture thread
    void run();
    
    /// Returns latest available frame straight out of camera no preprocessing
    cv::Mat getLatestFrameColor(){return newFrame;};
    
    /// Returns the latest available frame that has been converted to grayscale
    cv::Mat getLatestFrameGray(){return newFrameGray;};
   
    
private:
    
    std::string getCameraPipeline(CamIndex index, int width, int height, int fps);
    
    cv::VideoCapture cap;
    
    cv::Mat newFrame;
    
    cv::Mat newFrameGray;
    
};


#endif /* capture_hpp */
