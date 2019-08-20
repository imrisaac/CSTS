//
//  system.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef system_hpp
#define system_hpp

// std libs
#include <iostream>  
#include <string>

#ifdef JETSON
#include <linux/i2c-dev.h>
#endif

using namespace std;

class System {

public:

    void init();

    bool restartNVArgus();

    bool stopNVArgus();
    
    bool helloWorld();

    bool insertKernelModule();

    bool removeKernelModule();

private:

    string exec(const char *cmd);

    int getTxBitrate(int interface);

    bool cmdProcessorAvailable;

};


#endif /* system_hpp */
