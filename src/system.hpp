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
#include <cstdio>       // for executing system cmds
#include <iostream>     // .
#include <memory>
#include <stdexcept>
#include <string>
#include <array>        // ^
#ifdef JETSON
#include <linux/i2c-dev.h>
#endif

using namespace std;

class System {

public:

    bool restartNVArgus();

    bool stopNVArgus();

private:

    string exec(const char *cmd);

};


#endif /* system_hpp */
