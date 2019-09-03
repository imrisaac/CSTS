//
//  system.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//

#ifndef system_hpp
#define system_hpp

// std libs
#include <iostream>  
#include <string>
#include <fstream>      // basic file operations
#include <sstream>      // weird string conversion thing
#include <stdlib.h>     // for atof

// TODO: do not need all of these
#include <cstddef>
#include <sys/ioctl.h>
#include <cstdlib>
#include <cstdio>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>

#include <linux/i2c-dev.h>  // for I2C comm
#include <linux/i2c.h>

// in repo
#include "thread.hpp"

#define EO_SERDES_BUS "/dev/i2c-2"
#define IR_SERDES_BUS "/dev/i2c-2"

#define EO_SERDES_ADDR 0x30
#define IR_SERDES_ADDR 0x2c

struct SystemParams{

    SystemParams();
};

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
    
    int getAR1820Temp(){return instantAR1820Temp;};

private:

    SystemParams params_;

    string exec(const char *cmd);

    int readTxBitrate(int interface);
    
    bool maxVIClock(bool state);

    bool maxISPClock(bool state);
    
    bool EOSerdesInit();
    
    bool IRSerdesInit();
    
    void readThermalZones();
    
    void readAR1820Temp();

    bool cmdProcessorAvailable;
    
    int instantTXRate;
    
    int thermal_zone_avg;
    
    int instantAR1820Temp;
    

};


#endif /* system_hpp */
