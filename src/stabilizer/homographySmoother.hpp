//  homographySmoother.hpp
//
//  Created by Isaac Reed on 5/8/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef homography_smoother_h
#define homography_smoother_h

#include <vector>
#include "opencv2/core/core.hpp"

class HomographySmoother
{
public:
    HomographySmoother(int smoothing_window_size);
    void push(const cv::Matx33f &transform);
    bool getSmoothedHomography(cv::Matx33f &transform);

private:
    int smoothing_window_size_;
    std::vector<cv::Matx33f> homography_matrices_;
    std::vector<float> gaussWeights_;
    cv::Matx33f getTransformation(int from, int to);
};

#endif /* homographySmoother_h */