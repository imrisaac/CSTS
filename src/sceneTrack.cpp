//
//  sceneTrack.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "sceneTrack.hpp"

void SceneTrack::run(){
    std::cout << "scenetrack start" << std::endl;
    
    // Check if thread is requested to stop ?
    while ( false == stopRequested() ){
        
        std::cout << "scenetrack working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        
    }
    
    std::cout << "scenetrack loop stopped" << std::endl;
}
