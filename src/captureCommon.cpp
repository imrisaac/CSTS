#include "capture.hpp"
#include "captureCommon.hpp"

/**
    gstCameraPipeline
    returns gstreamer pipeline string
 */
std::string getCameraPipeline(CamIndex camera, int width, int height, int fps)
{

    string pipeline;

    ostringstream _width;
    ostringstream _height;
    ostringstream _fps;

    _width << width;
    _height << height;
    _fps << fps;

    //TODO: handle calling two of the same pipelines
    switch (camera)
    {
    case DevKitTx1:
        pipeline = "nvcamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)I420, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case DevKitTx2:
    case DevKitNano:
        pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case AR1820:
        pipeline = "nvarguscamerasrc exposurecompensation=0 wbmode=0 maxperf=true ee-mode=1 eestrength=-1 sensor-id=0 ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=" + std::to_string(params_.gstFlip) + " ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    case Boson:
        pipeline = "v4l2src device =/dev/video0 ! 'video/x-raw, format=(string)UYVY, width=(int)" + std::to_string(params_.captureWidth) + ", height=" +
                   std::to_string(params_.captureHeight) + ", framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1' ! nvvidconv flip - method = 4 ! ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;

    default:

        // TODO: default to a test pattern
        // default to the tx2 dev kit pipeline
        pipeline = "nvarguscamerasrc ! video/x-raw(memory:NVMM), width=(int)" + std::to_string(params_.captureWidth) + ", height=(int)" +
                   std::to_string(params_.captureHeight) + ", format=(string)NV12, framerate=(fraction)" + std::to_string(params_.captureFPS) +
                   "/1 ! nvvidconv flip-method=0 ! video/x-raw, format=(string)BGRx ! videoconvert ! video/x-raw, format=(string)BGR ! appsink";
        break;
    }

    return pipeline;
}
