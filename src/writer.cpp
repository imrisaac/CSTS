//
//  writer.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "writer.hpp"

/**
    initilize the writer 
 */
void Writer::initilize(){

    cout << "initilizing udp writer" << endl;

    string sink = "appsrc ! videoconvert ! omxh264enc control-rate=2 bitrate=" + to_string(4000000) + 
                      " ! mpegtsmux ! udpsink host=255.255.255.255 port=7660";
    
    cout << "Writer sink: " + sink + "\n";

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
        
        std::cout << "writer working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
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
