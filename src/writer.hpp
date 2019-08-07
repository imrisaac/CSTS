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
#include <vector>
#include <queue>

#include "thread.hpp"

using namespace std;

enum Sinker
{
    gstMacUDP,
    gstJetsonUDP,
    file0,
    file1,
};

// Stabilizer params are common for all builds
struct WriterParams
{
    string encoder;      // raw encoder string passed directly to gstreamer pipeline, omxh264enc, omxh265enc
    int udp_bitrate;     // bitrate for the UDP h.264, h.265 stream gstreamer pipeline
    string udp_ip;
    string udp_port; 
    int udp_width;
    int udp_height;
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
    
    void write(cv::Mat new_frame);
    
    void fileWrite();
    
    void overlayTelemetry();

private:

    bool openSink(Sinker sink, cv::Mat start_frame);

    cv::VideoWriter udpWriter;

    cv::VideoWriter fileWriter;

    WriterParams params_;

    std::queue<cv::Mat> frames;
};

#endif /* writer_hpp */
