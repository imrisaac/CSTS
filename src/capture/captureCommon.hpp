//
//  captureCommon.hpp
//  thread_safe
//
//  Contains the capture thread class and loop
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//
//

#ifndef captureCommon_hpp
#define captureCommon_hpp

enum CamIndex
{
    DevKitTx2 = 0,
    DevKitTx1 = 1,
    DevKitNano = 2,
    AR1820 = 3,
    Boson = 4,
    Pattern = 5,
    VideoTestSrc = 6,
};

enum WbAlgo
{
    Disabled,
    Simple,
    GrayWorld,
    Learning,
};

#endif // captureCommon_hpp
