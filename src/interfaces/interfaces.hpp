//
//  interfaces.hpp
//  thread_safe
//
//  contains command and control interfaces
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef interfaces_hpp
#define interfaces_hpp

// std libs
#include <stdio.h>
#include <stdio.h>

// in repo
#include "serial_port.h"
#include "../thread.hpp"        //ugg really need to setup cmake properly
#include "mavlinkInterface.hpp"

#ifdef WITH_ROS
// ros
#include "ros/ros.h"
#endif

using namespace std;

struct InterfaceParams
{
    int serial_baud;
    char *uart_name ;
    InterfaceParams();
};

/*
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class Interfaces: public Threader
{
public:

    void initilize();

    void run();

private:

    Serial_Port serial_port;
    
    InterfaceParams params_;

};


#endif /* interfaces_hpp */
