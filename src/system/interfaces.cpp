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

























