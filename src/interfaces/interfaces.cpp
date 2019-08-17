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

        //cout << "interface loop working" << endl;
        this_thread::sleep_for(chrono::milliseconds(1));
        
    }

    cout << "stopping serial port" << endl;
    
    serial_port.stop();

    cout << "interface loop stopped" << endl;

}

enum OutputMode Interfaces::getDesiredOutputMode(){

    if (EO_COLOR_CAMERA == mavlinkInterface.current_messages.payload_control.control_type && CONNECTED == (mavlinkInterface.current_messages.payload_control.control_flags & CONNECTED))
    {

        return simpleEO;
    }
    else if (IR_CAMERA == mavlinkInterface.current_messages.payload_control.control_type && CONNECTED == (mavlinkInterface.current_messages.payload_control.control_flags & CONNECTED))
    {

        return simpleIR;
    }
}
