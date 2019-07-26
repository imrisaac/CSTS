cmake_minimum_required(VERSION 2.8)

project(vision_core4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCV 3.4.1 REQUIRED)
find_package(Threads REQUIRED)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  tf2_ros
)

include_directories(${OpenCV_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR} ${catkin_INCLUDE_DIRS})

add_executable(vision_core4
                src/main.cpp  
                src/capture.cpp 
                src/interfaces.cpp 
                src/sceneTrack.cpp
                src/stabilizer.cpp
                src/thread.cpp
                src/writer.cpp
                )

target_link_libraries(vision_core4 ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT} ${catkin_LIBRARIES})

