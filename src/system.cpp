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

bool System::insertKernelModule(){

}

bool System::removeKernelModule(){
    
}

/*
    because of course this is here
 */
bool System::helloWorld(){

    if(!cmdProcessorAvailable){
        return false;
    }

    system("echo hello world");

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
