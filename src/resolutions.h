#ifndef resolutions_h
#define resolutions_h

// AR1820 crop levels
struct Zoom{
    cv::Rect wide44 = cv::Rect(0, 555, 1080, 810);
    double scaleFactor810 = 0.88888;       
    
    cv::Rect wide55 = cv::Rect(60, 600, 960, 720);
    double scaleFactor720 = 1;    
           
    cv::Rect wide66 = cv::Rect(220, 720, 640, 480);
    double scaleFactor480 = 1.5;
    
    cv::Rect tele77 = cv::Rect(380, 840, 320, 240);
    double scaleFactor240 = 3;
    
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
