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
    return;

}

void System::run(){

    ifstream eth0tx;
    

    long previousTxBytes = 0;
    long nowTxBytes = 0;
    
    std::stringstream instantTXRateStream;

    while( false == stopRequested() ){
        
        eth0tx.open("/sys/class/net/eth0/statistics/tx_bytes");
        eth0tx >> nowTxBytes;
        eth0tx.close();
        
        //std::cout << "tx bytes: " << (nowTxBytes - previousTxBytes)/100000.0 << std::endl;
        
        instantTXRate = (nowTxBytes - previousTxBytes)/10000;
        
        previousTxBytes = nowTxBytes;
        
        // 1hz loop rate
        usleep(1000 * 1000);

    }

 
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

bool System::maxVIClock(){

    cout << "setting max video interface clock" << endl;
    ofstream viClock;
    viClock.open("/sys/kernel/debug/bpmp/debug/clk/vi/mrq_rate_locked");
    viClock << "1";
    viClock.close();

    return true;
}

bool System::maxISPClock(){

    cout << "setting max isp clock" << endl;
    ofstream viClock;
    viClock.open("/sys/kernel/debug/bpmp/debug/clk/isp/mrq_rate_locked");
    viClock << "1";
    viClock.close();

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


/**
    exec

    executes a command in the system shell
 */
string System::exec(const char *cmd){

}

int System::getTxBitrate(int interface){


}
