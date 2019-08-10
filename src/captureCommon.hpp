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

enum CamIndex
{
    DevKitTx2 = 0,
    DevKitTx1 = 1,
    DevKitNano = 2,
    AR1820 = 3,
    Boson = 4,
};

enum WbAlgo
{
    Simple,
    GrayWorld,
    Learning,
};

struct CaptureParams
{
    WbAlgo wbAlgo;
    CamIndex camIndex;
    int gstFlip;
    CaptureParams();
};
