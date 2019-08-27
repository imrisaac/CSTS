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
#include <fstream>      // basic file operations
#include <sstream>      // weird string conversion thing
#include <stdlib.h>     // for atof

// in repo
#include "thread.hpp"
#include "serial_port.h"
#include "mavlinkInterface.hpp"
#include "../common.h" // ugg

#ifdef JETSON
#include <linux/i2c-dev.h>
#endif

enum KernelModules{
    AR1820HS,
    FLIR640,
};

using namespace std;

class System: public Threader {

public:

    void init();

    void run();

    bool restartNVArgus();

    bool stopNVArgus();
    
    bool helloWorld();

    bool insertKernelModule(enum KernelModules module);

    bool removeKernelModule();
    
    int getInstantTXRate(){return instantTXRate;};
    
    int getThermalZoneAvg(){return thermal_zone_avg;};

    MavlinkInterface mavlinkInterface;

private:

    string exec(const char *cmd);

    int readTxBitrate(int interface);
    
    bool maxVIClock(bool state);

    bool maxISPClock(bool state);
    
    void readThermalZones();

    bool cmdProcessorAvailable;
    
    int instantTXRate;
    
    int thermal_zone_avg;

    Serial_Port serial_port;

};


#endif /* system_hpp */