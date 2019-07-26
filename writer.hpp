//
//  writer.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef writer_hpp
#define writer_hpp

#include <stdio.h>
#include "thread.hpp"

/*
    Writer class
    inherits from Threader class
 */
class Writer: public Threader
{
public:
    
    void initilize();
    
    void run();
    
    void gstreamerWrite();
    
    void fileWrite();
    
    void overlayTelemetry();
    
};

#endif /* writer_hpp */
