//
//  objectTrack.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "objectTrack.hpp"

void ObjectTrack::run()
{
    std::cout << "objecttrack start" << std::endl;

    // Check if thread is requested to stop ?
    while (false == stopRequested())
    {

        std::cout << "objecttrack working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "objecttrack loop stopped" << std::endl;
}
