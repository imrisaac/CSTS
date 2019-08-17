#ifndef resolutions_h
#define resolutions_h

// AR1820 crop levels
struct Zoom{
    cv::Rect wide0 = cv::Rect(0, 555, 1080, 810);
    double scaleFactor810 = 0.888;       
    cv::Rect wide1 = cv::Rect(60, 600, 960, 720);       
    cv::Rect tele0 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele1 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele2 = cv::Rect(0, 600, 1080, 810);
};

/*
    Boson640
    Sensor rotated 90 deg clockwise, looking into the lense 
*/
struct Boson640_90{
    int width = 512;
    int height = 640;
    double scaleFactor720 = 1.125;
};



#endif // resolutions_h
