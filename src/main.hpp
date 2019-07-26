//
//  main.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef main_h
#define main_h

#define MAC
//#define JETSON 

// std libs
#include <pthread.h>        // mutexes
#include <iostream>
#include <getopt.h>         // cmd line option parsing
#include <stdlib.h>         // cmd line option parsing
#include <string>           // cmd line option parsing

// special sauce
#include "interfaces.hpp"
#include "capture.hpp"
#include "sceneTrack.hpp"
#include "stabilizer.hpp"
#include "writer.hpp"

// opencv
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/tracking.hpp"

#endif /* main_h */
