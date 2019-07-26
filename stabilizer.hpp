//
//  stabilizer.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef stabilizer_hpp
#define stabilizer_hpp

#include <stdio.h>
#include "thread.hpp"

/**
    Stabilizer thread
    inherits from Threader class
 */
class Stabilizer: public Threader
{
public:
    
    /// Initilize the stabilizer algo with necessary startup frames and parameters
    void initilize();
    
    /// runner contaning the capture loop
    void run();
};


#endif /* stabilizer_hpp */
