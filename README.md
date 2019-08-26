# Video Capture Stabilization Tracking and Streaming 

Main camera processing application fot the Jetson TX2

Based on the 5th major rewrite of what has originally called vision_core4

incorperates new threading model from VC4 and stabilization method from nano stab

Currently operates using three thread:

1. main thread in main.cpp
    * Creats and destroys all other threads
    * Responsible for capture, cropping, and stabilization.
2. Writer thread
    * responsible for writring frames to udp port and files
3. system thread
   * responsible for mavlink commms io
   * other system interfacing, cpu temps, image sensor temps etc.