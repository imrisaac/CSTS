//
//  stabilizer.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "stabilizer.hpp"

/**
    Runner for the stabilizer thread
    contains the stabilizer loop
 */
void Stabilizer::run(){
    std::cout << "stabilizer start" << std::endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        std::cout << "stabilizer working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
    }
    
    std::cout << "stabilizer loop stopped" << std::endl;
}

