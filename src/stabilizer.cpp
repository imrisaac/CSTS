//
//  stabilizer.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "stabilizer.hpp"

StabilizerParams::StabilizerParams()
{
    smoothing_window_size = 8;
    fast_threshold = 30.f;
    num_pyramid_levels = 3;
    opt_flow_win_size = 10;
    opt_flow_epsilon = 0.01f;
    opt_flow_num_iterations = 15;
    opt_flow_use_initial_estimate = 0;
    homography_ransac_threshold = 3.f;
    //homography_method = cv::FM_RANSAC;
    homography_method = 0;
}

/**
    Runner for the stabilizer thread
    contains the stabilizer loop that grabs new frames, process them and makes them available for writing/streaming
 */
void Stabilizer::run(){
    std::cout << "stabilizer start" << std::endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        std::cout << "stabilizer working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
    }
    
    std::cout << "stabilizer loop stopped" << std::endl;
}

/*
    Draw arrow on the frame for visualizing optical flow

 */
void Stabilizer::drawArrows(Mat &frame, const vector<Point2f> &prevPts, const vector<Point2f> &nextPts, const vector<uchar> &status, cv::Scalar line_color)
{
    for (size_t i = 0; i < prevPts.size(); ++i)
    {
        if (status[i])
        {
            int line_thickness = 1;

            cv::Point p = prevPts[i];
            cv::Point q = nextPts[i];

            double angle = atan2((double)p.y - q.y, (double)p.x - q.x);

            double hypotenuse = sqrt((double)(p.y - q.y) * (p.y - q.y) + (double)(p.x - q.x) * (p.x - q.x));

            if (hypotenuse < 1.0)
                continue;

            // Here we lengthen the arrow by a factor of three.
            q.x = (int)(p.x - 3 * hypotenuse * cos(angle));
            q.y = (int)(p.y - 3 * hypotenuse * sin(angle));

            // Now we draw the main line of the arrow.
            line(frame(searchBox), p, q, line_color, line_thickness);

            // Now draw the tips of the arrow. I do some scaling so that the
            // tips look proportional to the main line of the arrow.

            p.x = (int)(q.x + 9 * cos(angle + CV_PI / 4));
            p.y = (int)(q.y + 9 * sin(angle + CV_PI / 4));
            line(frame(searchBox), p, q, line_color, line_thickness);

            p.x = (int)(q.x + 9 * cos(angle - CV_PI / 4));
            p.y = (int)(q.y + 9 * sin(angle - CV_PI / 4));
            line(frame(searchBox), p, q, line_color, line_thickness);
        }
    }
}
