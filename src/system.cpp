//
//  system.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//

#include "system.hpp"

// default parameters
SystemParams::SystemParams(){
    

}

void System::init(){

    cmdProcessorAvailable = false;

    if (system(NULL)){
        cout << "Command processor available on system";
        cmdProcessorAvailable = true;
    }else{
        cout << "Command processor not available on this system";
        cmdProcessorAvailable = false;
    }
    
    maxVIClock(true);
    maxISPClock(true);
    
    readThermalZones();
    
    return;

}

void System::run(){

    while( false == stopRequested() ){
        
        readTxBitrate(0);
        readThermalZones();
        readAR1820Temp();
        
        // 1hz loop rate
        usleep(1000 * 1000);

    }
    
    std::cout << "restoring VI and ISP clocks" << endl;
    maxVIClock(false);
    maxISPClock(false);
    
    std::cout << "system loop stopped" << endl;

 
}

/**
    restartNVArgus

    sedts shell cmd to restart nvargus daemon
 */
bool System::restartNVArgus(){

    if(!cmdProcessorAvailable){
        return false;
    }

    system("sudo systemclt restart nvargus-daemon");

    // TODO: check response
    return true;
}

bool System::insertKernelModule(enum KernelModules module)
{

    if(!cmdProcessorAvailable){
        return false;
    }

    //nobody returns -2 right?
    int exit_code = -2;

    switch( module ){
        
        case AR1820HS:
            exit_code = system("sudo insmod /home/nvidia/camera_drivers/ar1820hs.ko");
            break;

        case FLIR640:   
            exit_code = system("sudo insmod /home/nvidia/camera_drivers/flir641.ko");
            break;

        default:
            cout << "kernel module insertion requested but no module specified" << endl;
    }

    if( 0 == exit_code ){
        cout << "kernel module insertion sucess, this sounds dirty" << endl;
        return true;
    }else{
        cout << "kernel module insertion failed, this sounds dirty" << endl;
        return false;
    }

    return false; 
}

bool System::removeKernelModule(){

    if(!cmdProcessorAvailable){
        return false;
    }

}

bool System::maxVIClock(bool state){

    cout << "setting video interface clock" << endl;
    ofstream viClock;
    viClock.open("/sys/kernel/debug/bpmp/debug/clk/vi/mrq_rate_locked");
    
    // set max(1) or Auto(0) video interface clock
    if ( true == state ){
        viClock << "1";
    }else if (false == state ){
        viClock << "0";
    }else{
        viClock << "0";
    }
    
    viClock.close();

    return true;
}

bool System::maxISPClock(bool state){

    cout << "setting isp clock" << endl;
    ofstream ispClock;
    ispClock.open("/sys/kernel/debug/bpmp/debug/clk/isp/mrq_rate_locked");
    
    // set max(1) or Auto(0) isp clock
    if ( true == state ){
        ispClock << "1";
    }else if (false == state ){
        ispClock << "0";
    }else{
        ispClock << "0";
    }
    ispClock.close();

    return true;
}

int System::readTxBitrate(int interface){
    
    ifstream eth0tx;
    
    static long previousTxBytes = 0;
    static long nowTxBytes = 0;
    
    std::stringstream instantTXRateStream;
    
    eth0tx.open("/sys/class/net/eth0/statistics/tx_bytes");
    eth0tx >> nowTxBytes;
    eth0tx.close();
    
    instantTXRate = (nowTxBytes - previousTxBytes)/10000;
        
    previousTxBytes = nowTxBytes;
    
}

/**
    Read temperature sensors onboard the tegra module
*/
void System::readThermalZones(){
    
    ifstream thermalZone;
    
    int tempSum = 0;
    
    char readBuf[16];
    
    // BCPU Quad Cortex A57 2.0GHz
    thermalZone.open("/sys/devices/virtual/thermal/thermal_zone0/temp");
    thermalZone >> readBuf;
    thermalZone.close();
    
    tempSum += atof(readBuf);
    
    // MCPU Dual Denver 2 2.0GHz
    thermalZone.open("/sys/devices/virtual/thermal/thermal_zone1/temp");
    thermalZone >> readBuf;
    thermalZone.close();
    
    tempSum += atof(readBuf);
    
    // GPU
    thermalZone.open("/sys/devices/virtual/thermal/thermal_zone2/temp");
    thermalZone >> readBuf;
    thermalZone.close();
    
    tempSum += atof(readBuf);
    
    //cout << tempSum/3 << endl;
    
    thermal_zone_avg = tempSum/3000;
    
}

/**
    Read AR1820HS sensor temperature
 */
void System::readAR1820Temp(){
    
    ifstream camTemp;
    
    int temperature = 0;
    
    camTemp.open("/proc/ar1820hs/2-0037/tempsens");
    camTemp >> temperature;
    camTemp.close();
    
    instantAR1820Temp = ( temperature -331.92 ) / 1.2261;
    

}

/**
    Serializer initilize 
*/
bool System::EOSerdesInit(){
    
    int fd = open(EO_SERDES_BUS, O_RDWR);
    
    if ( fd < 0 ){
        cout << "i2c file open fail, try running as sudo" << endl;
        cout << errno << endl;
        return false;
    }
    
    if (ioctl(fd, I2C_RDWR, EO_SERDES_ADDR) < 0){
        cout << "could not open device: " << EO_SERDES_ADDR << " on bus: " << EO_SERDES_BUS << endl;
        cout << errno << endl;
        return false;
    }
    
    //i2c_smbus_write_byte(fd, 0x20);
    
    //close(EO_SERDES_BUS); 
}

/**
    Deserializer initilize 
*/    
bool System::IRSerdesInit(){
}
