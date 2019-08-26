//
//  c2.cpp
//  thread_safe
//
//  contains command and control interfaces
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "interfaces.hpp"

// default parameters
InterfaceParams::InterfaceParams(){
    
    serial_baud = 115200;

#ifdef MAC
    uart_name = (char *)"/dev/tty.usbmodem01";
#else
    uart_name = (char *)"/dev/ttyTHS1";
#endif

}

void Interfaces::initilize(){

    cout << "initilizing interfaces" << endl;
    
    int result;

    cout << "init serial port defaults" << endl;
    serial_port.initialize_defaults();

    // open serial port
    cout << "opening serial port" << endl;
    serial_port.start();

    cout << "interfaces initilized" << endl;
}

/*
    Runner for the c2 thread
    contains the c2 loop
 */
void Interfaces::run(){
    cout << "interface loop start" << endl;

    bool success = false;

    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){

        // read message
        mavlink_message_t message;
        success = serial_port.read_message(message);

        if (success){
            mavlinkInterface.processMessage(message);
        }

        // give time to write to port
        usleep(100);
        
    }

    cout << "stopping serial port" << endl;
    
    serial_port.stop();

    cout << "interface loop stopped" << endl;

}

void Interfaces::getDesiredOutputMode(enum OutputMode *outputMode){

    if (EO_COLOR_CAMERA == mavlinkInterface.current_messages.payload_control.control_type && CONNECTED == (mavlinkInterface.current_messages.payload_control.control_flags & CONNECTED))
    {

        *outputMode = simpleEO;
    }
    else if (IR_CAMERA == mavlinkInterface.current_messages.payload_control.control_type && CONNECTED == (mavlinkInterface.current_messages.payload_control.control_flags & CONNECTED))
    {

        *outputMode = simpleIR;
    }
    
    // 
    return;
}


void Interfaces::getZoom(int *focalLength){
    
    if ( 0 == mavlinkInterface.current_messages.payload_control.zoom_index ){
        
        // this is a focal length in mm, arbitrary for now but will be real i the future
        *focalLength = 44;
        
    }else if ( 1 == mavlinkInterface.current_messages.payload_control.zoom_index ){
        
        *focalLength = 55;
        
    }else if ( 2 == mavlinkInterface.current_messages.payload_control.zoom_index ){
        
        *focalLength = 66;
        
    }else if ( 3 == mavlinkInterface.current_messages.payload_control.zoom_index ){
        
        *focalLength = 77;
        
    }else{
        // do nothing 
    }
    
    return;
    
}
























