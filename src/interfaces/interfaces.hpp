//
//  interfaces.hpp
//  thread_safe
//
//  contains command and control interfaces
//
//  Created by Isaac Reed on 7/23/19.
//

#ifndef interfaces_hpp
#define interfaces_hpp

// std libs
#include <stdio.h>
#include <stdio.h>

// in repo
#include "serial_port.h"
#include "../thread.hpp"        // ugg really need to setup cmake properly
#include "mavlinkInterface.hpp"
#include "../common.h"          // ugg

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

    // Default constructor
    void Interfaces();

    // Deprecated
    void initilize();

    void run();

    void getDesiredOutputMode(enum OutputMode *outputMode);

    void getZoom(int *focalLength);

private:

    Serial_Port serial_port;

    MavlinkInterface mavlinkInterface;
    
    InterfaceParams params_;

};


#endif /* interfaces_hpp */
