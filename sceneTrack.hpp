//
//  sceneTrack.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef sceneTrack_hpp
#define sceneTrack_hpp

#include <stdio.h>
#include "thread.hpp"

/*
 SceneTrack thread
 inherits from Threadder class
 
 responsible for running scene tracking on new frames from the capture thread
 */
class SceneTrack: public Threader
{
public:
    // Function to be executed by thread function
    void run();
};

#endif /* sceneTrack_hpp */
