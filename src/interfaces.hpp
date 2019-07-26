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

#include <stdio.h>
#include <stdio.h>
#include "thread.hpp"


/*
 Capture thread
 inherits from Threader class
 
 responsible for captureing new frames from vide feed and doing minimal pre-preocessing
 */
class Interfaces: public Threader
{
public:
    // Function to be executed by thread function
    void run();
};


#endif /* interfaces_hpp */
