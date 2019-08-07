//
//  writer.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "writer.hpp"

// default parameters
WriterParams::WriterParams()
{
    encoder = "omxh264enc";
    udp_bitrate = 8;
}

/**
    initilize the writer 
 */
void Writer::init(const cv::Mat &start_frame)
{

    cout << "initilizing udp writer" << endl;

    string sink = "appsrc ! videoconvert ! omxh264enc control-rate=2 bitrate=" + to_string(4000000) + 
                      " ! mpegtsmux ! udpsink host=255.255.255.255 port=7660";
    
    cout << "Writer sink: " + sink + "\n";

    // TODO: initilize writer resolution using start_frame size
    udpWriter.open(sink, 0, (double)30, cv::Size(1280,720), true);
    
}

/**
    Runner for the writer thread
    contains the writer loop
    writes frames to an output stream
    the output stream may be gstreamer, video file, or both.

 */
void Writer::run(){
    std::cout << "writer start" << std::endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        udpWriter << 
        
    }
    std::cout << "writer loop stopped" << std::endl;
}

/**
    Write frames to the gstreamer pipeline
 */
void Writer::gstreamerWrite(){
    
}

/**
    Write frames to video file
 */
void Writer::fileWrite(){
    
}

/**
    Overlay telemetry onto frame
 */
void Writer::overlayTelemetry(){
    
}
