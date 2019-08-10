//
//  writer.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef writer_hpp
#define writer_hpp

// std
#include <stdio.h>
#include <vector>
#include <queue>

// opencv
#include "opencv2/xphoto.hpp" // for white balance

// in repo
#include "thread.hpp"

using namespace std;

enum Sinker
{
    gstMacUDP,
    gstJetsonUDP,
    file0,
    file1,
};

enum StreamType
{
    EO,
    IR,
    DUAL,

};

// Stabilizer params are common for all builds
struct WriterParams
{
    string encoder;      // raw encoder string passed directly to gstreamer pipeline, omxh264enc, omxh265enc
    int udp_bitrate;     // bitrate for the UDP h.264, h.265 stream gstreamer pipeline
    string udp_ip;
    string udp_port; 
    int stream_width;
    int stream_height;
    WriterParams();   
};

struct Telemetry
{
    int currentFps;
    Telemetry();
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

    void writeDual(cv::Mat left, cv::Mat right);
    
    void fileWrite();
    
    void updateTelemetry(int fps);

private:

    bool openSink(Sinker sink, cv::Mat start_frame);

    cv::VideoWriter udpWriter;

    cv::VideoWriter fileWriter;

    WriterParams params_;

    Telemetry telemetry_;

    cv::Mat outFrame;

    std::queue<cv::Mat> frames;

    cv::Point fpsTextOrigin;

    cv::Point upTimeTextOrigin;

    pthread_mutex_t inject_mutex;

    // Create blank Altavian Blue image
    cv::Mat dual;

    StreamType streamType;
};

#endif /* writer_hpp */
