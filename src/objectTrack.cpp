//
//  objectTrack.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//

#include "objectTrack.hpp"

/**
    initilize()

    initilize an object tracker or trackers
 */
void ObjectTrack::initilize(){

    std::cout << "initilizing objecttrack";


    return;
}

/**
    run()

    run the object tracker thread
 */
void ObjectTrack::run(){

    std::cout << "objecttrack start" << std::endl;

    // Check if thread is requested to stop ?
    while (false == stopRequested())
    {

        std::cout << "objecttrack working" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "objecttrack loop stopped" << std::endl;
}

// create tracker by name
Ptr<Tracker> ObjectTrack::createTrackerByName(string trackerType){

    Ptr<Tracker> tracker;
    if (trackerType == trackerTypes[0])
        tracker = TrackerBoosting::create();
    else if (trackerType == trackerTypes[1])
        tracker = TrackerMIL::create();
    else if (trackerType == trackerTypes[2])
        tracker = TrackerKCF::create();
    else if (trackerType == trackerTypes[3])
        tracker = TrackerTLD::create();
    else if (trackerType == trackerTypes[4])
        tracker = TrackerMedianFlow::create();
    else if (trackerType == trackerTypes[5])
        tracker = TrackerGOTURN::create();
    else if (trackerType == trackerTypes[6])
        tracker = TrackerMOSSE::create();
    else if (trackerType == trackerTypes[7])
        tracker = TrackerCSRT::create();
    else
    {
        cout << "Incorrect tracker name" << endl;
        cout << "Available trackers are: " << endl;
        for (vector<string>::iterator it = trackerTypes.begin(); it != trackerTypes.end(); ++it)
            std::cout << " " << *it << endl;
    }
    return tracker;
}