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
#include "thread.hpp"

// ros
#include "ros/ros.h"

using namespace std;

/*
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class Interfaces: public Threader
{
public:

    void initilize(int &argc, char **argv);

    void run();

    ros::NodeHandle node;

};


#endif /* interfaces_hpp */
