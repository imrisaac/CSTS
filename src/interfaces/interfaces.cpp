//
//  c2.cpp
//  thread_safe
//
//  contains command and control interfaces
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "interfaces.hpp"

void Interfaces::initilize(int &argc, char **argv){

    cout << "initilizing interfaces" << endl;
    
    int result;
    

#ifdef WITH_ROS
    if (node.hasParam("")){
        cout << "found parameter" << endl;
    }else{
        cout << "could not find parameter" << endl;
    }
#endif

    // check if the serial port is open
    if ( serial_port->status != 1 ) 
	{
		fprintf(stderr,"ERROR: serial port not open\n");
		throw 1;
	}


}

/*
    Runner for the c2 thread
    contains the c2 loop
 */
void Interfaces::run(){
    std::cout << "interface loop start" << std::endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        std::cout << "interface loop working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
    }
    std::cout << "interface loop stopped" << std::endl;
}
