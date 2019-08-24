//
//  system.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "system.hpp"


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
    
    return;

}

void System::run(){

    while( false == stopRequested() ){
        
        readTxBitrate(0);
        
        // 1hz loop rate
        usleep(1000 * 1000);

    }
    
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

    cout << "setting max video interface clock" << endl;
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

    cout << "setting max isp clock" << endl;
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

/*
    because of course this is here
 */
bool System::helloWorld(){

    if(!cmdProcessorAvailable){
        //return false;
    }

    int exit_code = system("echo hello world");

    cout << "exit core " << exit_code << endl;

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
    
}
    
