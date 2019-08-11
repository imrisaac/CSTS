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
    udp_bitrate = 4096;
    udp_ip = "192.168.0.255";
    udp_port = "49410";
    stream_width = 1280;
    stream_height = 720;
    streamType = EO;

}

// telemetry data initilizers
Telemetry::Telemetry()
{
    int currentFps = 0;
}

/**
    initilize the writer 
 */
void Writer::init(const cv::Mat &start_frame)
{

    cout << "initilizing writer" << endl;    
    
    openSink(gstJetsonUDP, start_frame);

    // create a canvas to add IR and EO images side by side, boson is 640 x 512, EO is temporarily 720 x 1280 
    dualCanvas.create(cv::Size(params_.stream_width, params_.stream_height), CV_8UC3);


}

/**
    Runner for the writer thread
    contains the writer loop
    writes frames to an output stream
    the output stream may be gstreamer, video file, or both.

 */
void Writer::run(){
    std::cout << "writer start" << std::endl;
	
	// you cannot call imshow from another thread?
    //cv::namedWindow("Writer", cv::WINDOW_AUTOSIZE);

    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        if(false == frames.empty()){

            // cv::putText(outFrame, std::to_string(telemetry_.currentFps), fpsTextOrigin, cv::FONT_HERSHEY_SIMPLEX, 2, cv::Scalar::all(255), 3, 8);

            // switch case for deciding
            switch(params_.streamType){
				
                case EO:
                
					outFrame = frames.front();

					if (outFrame.data != NULL){
               
					   udpWriter << outFrame;

					}else{
						cout << "no image data" << endl;
					}
					
					// done with this frame for good
					frames.pop();
					
                    break;

                case IR:
                    break;

                case DUAL:
                				
					// 1280 x 720 = 640 x 720 | 640 x 720
					frames.front().copyTo(dualCanvas(cv::Rect( 0, 0, (params_.stream_width / 2), params_.stream_height/2)) );
					frames.pop();
					frames.front().copyTo(dualCanvas(cv::Rect( (params_.stream_width / 2), 0, params_.stream_width, params_.stream_height)) );
					frames.pop();
					
                    break;

                default:
                    break;
                    
            } 


        }

        // dont go crazy TODO: something other than this
        usleep(10000);
        
    }

    std::cout << "releasing udp writer" << std::endl;
    udpWriter.release();
    std::cout << "writer loop stopped" << std::endl;
}

/**
    Write frames to the gstreamer pipeline
 */
void Writer::write(cv::Mat new_frame){
	
   // pthread_mutex_lock(&inject_mutex);
	frames.push(new_frame);
   // pthread_mutex_unlock(&inject_mutex);
    
}

/**
    Write frames to video file
 */
void Writer::fileWrite(){
    
}

/**
    Overlay telemetry onto frame
 */
void Writer::updateTelemetry(int fps){
    
}

/**
    writer
    returns writer pipeline
 */
bool Writer::openSink(Sinker sink, cv::Mat start_frame)
{
    string gstSink;

    // ostringstream _width;
    // ostringstream _height;
    // ostringstream _fps;

    // _width << width;
    // _height << height;
    // _fps << fps;

    switch (sink){
    case gstMacUDP:

        // assemble gstreamer pipeline
        gstSink = "appsrc ! videoconvert ! omxh264enc bitrate=" + to_string(params_.udp_bitrate * 1024) + " iframeinterval=8 ! mpegtsmux alignment=7 ! udpsink host=255.255.255.255 port=7660";

        cout << "GST writer sink: " + gstSink + "\n";

        // TODO: initilize writer resolution using start_frame size
        udpWriter.open(gstSink, 0, (double)30, cv::Size(1280, 720), true);

        break;
    
    case gstJetsonUDP:

        // assemble gstreamer pipeline
        gstSink = "appsrc ! videoconvert ! " + params_.encoder + " bitrate=" + to_string(params_.udp_bitrate * 1024) + " iframeinterval=8 EnableStingentBitrate=true profile=8 ! mpegtsmux alignment=7 ! udpsink host=255.255.255.255 port=49410";

        cout << "GST writer sink: " + gstSink + "\n";

        // TODO: initilize writer resolution using start_frame size
        udpWriter.open(gstSink, 0, (double)30, cv::Size(1280, 720), true);

        break;

    case file0:
        break;

    case file1:
        break;

    default:

        break;
    }

    return true;
}
