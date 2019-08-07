//
//  thread.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef thread_hpp
#define thread_hpp

#include <stdio.h>
#include <thread>
#include <iostream>
#include <assert.h>
#include <chrono>
#include <future>
#include <unistd.h>     // for usleep

#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"

/**
 * Class that encapsulates promise and future object and
 * provides API to set exit signal for the thread
 */
class Threader
{
    std::promise<void> exitSignal;
    std::future<void> futureObj;
public:
    Threader() :
    futureObj(exitSignal.get_future()){
        
    }
    
    Threader(Threader && obj) : exitSignal(std::move(obj.exitSignal)), futureObj(std::move(obj.futureObj)){
        std::cout << "Move Constructor is called" << std::endl;
    }
    
    Threader & operator=(Threader && obj){
        std::cout << "Move Assignment is called" << std::endl;
        exitSignal = std::move(obj.exitSignal);
        futureObj = std::move(obj.futureObj);
        return *this;
    }
    
    // Run function needs to be provided by the derived class
    // It will be called by thread function
    virtual void run() = 0;
    
    // Thread function to be executed by thread
    void operator()(){
        run();
    }
    
    // Checks if thread is requested to stop
    bool stopRequested(){
        // checks if value in future object is available
        if (futureObj.wait_for(std::chrono::milliseconds(0)) == std::future_status::timeout)
            return false;
        return true;
    }
    
    // Request the thread to stop by setting value in promise object
    void stop(){
        exitSignal.set_value();
    }
    
    // this needs to be somewhere everyone can reach
    pthread_mutex_t capture_mutex;
};


#endif /* thread_hpp */
