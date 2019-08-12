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
InterfaceParams::InterfaceParams()
{
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

    serial_port.initialize_defaults();

    //Serial_Port serial_port(params_.uart_name, params_.serial_baud);

    cout << "opening serial port" << endl;

    // open serial port
    serial_port.start();

    cout << "interfaces initilized" << endl;
}

/*
    Runner for the c2 thread
    contains the c2 loop
 */
void Interfaces::run(){
    cout << "interface loop start" << endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        cout << "interface loop working" << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        
    }
    cout << "interface loop stopped" << endl;
}
