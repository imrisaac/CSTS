#ifndef resolutions_h
#define resolutions_h

struct Zoom{
    cv::Rect wide  = cv::Rect(0, 600, 960, 720);
    cv::Rect tele0 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele1 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele2 = cv::Rect(0, 600, 1080, 810);
};

struct Boson640_90{
    int width = 512;
    int height = 640;
    double scaleFactor720 = 1.125;
};



#endif // resolutions_h
