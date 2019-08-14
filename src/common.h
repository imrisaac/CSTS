
#ifndef common_h
#define common_h

// workaround for no add_compile_definitions before cmake 3.12
#ifndef MAC
    #define JETSON
    #define WITH_CUDA
    #define HAVE_DISPLAY		// remove this before deployment
#endif

enum OutputMode{

    simpleEO,
    simpleIR,
    Dual,

};

struct Zoom{
    cv::Rect wide  = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele0 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele1 = cv::Rect(0, 600, 1080, 810);
    cv::Rect tele2 = cv::Rect(0, 600, 1080, 810);
};

#endif /* common.h  */
