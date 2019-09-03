//
//  objectTrack.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//

#ifndef objectTrack_hpp
#define objectTrack_hpp

#include <stdio.h>
#include "thread.hpp"

// opencv
#include <opencv2/tracking.hpp>

using namespace std;
using namespace cv;

/**
 ObjectTrack thread
 inherits from Threadder class
 
 responsible object tracking if you could not tell by the name
 */
class ObjectTrack : public Threader
{
public:

    void initilize();

    // Function to be executed by thread function
    void run();
private:

    Ptr<Tracker> createTrackerByName(string trackerType);

    vector<string> trackerTypes = {"BOOSTING", "MIL", "KCF", "TLD", "MEDIANFLOW", "GOTURN", "MOSSE", "CSRT"};
};

#endif /* sceneTrack_hpp */
