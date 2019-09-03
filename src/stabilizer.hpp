//
//  stabilizer.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//

#ifndef stabilizer_hpp
#define stabilizer_hpp

#include <stdio.h>
#include "thread.hpp"
#include "common.h"

using namespace std;
using namespace cv;

// Stabilizer params are common for all builds
struct StabilizerParams
{
    int smoothing_window_size; //if N is a number of frames in the queue, then smoothing_window_size is equal to N-1
    float fast_threshold;
    int num_pyramid_levels;
    int opt_flow_win_size;
    float opt_flow_epsilon;
    int opt_flow_num_iterations;
    int opt_flow_use_initial_estimate;
    float homography_ransac_threshold;
    int homography_method;
    float search_box_scale_factor; // what size to make the search box, 0.95 = 95% the size of input frame
    StabilizerParams();
};

#ifdef MAC
/**
    Stabilizer thread
    inherits from Threader class
 */
class Stabilizer: public Threader
{
public:
    
    /// Initilize the stabilizer algo with necessary startup frames and parameters
    void init(const cv::Mat &start_frame);

    /// runner contaning the capture loop
    void run();

private:

    void drawArrows(Mat& frame, const vector<Point2f>& prevPts, const vector<Point2f>& nextPts, const vector<uchar>& status, cv::Scalar line_color);

    cv::Mat applyPerspectiveTransformation(cv::Matx33f transformation);

    cv::Matx33f findHomogrpahyMatrix(const cv::Mat &current_frame);

    StabilizerParams params_;

    cv::Rect search_box;
};
#endif // mac

#ifdef JETSON
/**
    Stabilizer thread
    inherits from Threader class
 */
class Stabilizer: public Threader
{
public:
    
    /// Initilize the stabilizer algo with necessary startup frames and parameters
    void init(const cv::Mat &start_frame);

    /// runner contaning the capture loop
    void run();

private:

    void drawArrows(Mat& frame, const vector<Point2f>& prevPts, const vector<Point2f>& nextPts, const vector<uchar>& status, cv::Scalar line_color);

    cv::Mat applyPerspectiveTransformation(cv::Matx33f transformation);

    cv::Matx33f findHomogrpahyMatrix(const cv::Mat &current_frame);

    StabilizerParams params_;

    cv::Rect search_box;
};

#endif

#endif /* stabilizer_hpp */
