# Video Capture Stabilization Tracking and Streaming (CSTS)

Main camera processing application fot the Jetson TX2

Based on the 5th major rewrite of what was originally called vision_core4

incorperates new threading model from VC4, stabilization method from nano stab, and serial port handeling from nix_mvlink_parser

Currently operates using three thread:

1. main thread in main.cpp
    * Creats and destroys all other threads
    * Responsible for capture, cropping, and stabilization.
2. Writer thread
    * responsible for writring frames to udp port and files
3. system thread
   * responsible for mavlink commms io
   * other system interfacing, cpu temps, image sensor temps etc.