//
//  writer.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef writer_hpp
#define writer_hpp

#include <stdio.h>

#include "thread.hpp"

using namespace std;

// Stabilizer params are common for all builds
struct WriterParams
{
    string encoder;      // raw encoder string passed directly to gstreamer pipeline, omxh264enc, omxh265enc
    int udp_bitrate;     // bitrate for the UDP h.264, h.265 stream gstreamer pipeline
    WriterParams();
};

/*
    Writer class
    inherits from Threader class
 */
class Writer: public Threader
{
public:
    void init(const cv::Mat &start_frame);

    void run();
    
    void gstreamerWrite();
    
    void fileWrite();
    
    void overlayTelemetry();

private:

    cv::VideoWriter udpWriter;

    WriterParams params_;
    
};

#endif /* writer_hpp */
