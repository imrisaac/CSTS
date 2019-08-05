cmake_minimum_required(VERSION 2.8)

project(vision_core4)

set(default_build_type "Release")

option(MAC_BUILD "Build for OSX" ON)
option(JETSON_BUILD "Build for the Nvidia Jetson TX1, TX2, or Nano" OFF)
option(UBUNTU_VM_BUiLD "Build for Ubuntu VM" OFF)

# ================ MAC Build ===================
if(MAC_BUILD)

  message("configuring for Mac")

  add_compile_definitions(MAC)
  add_compile_definitions(HAVE_DISPLAY)

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

  find_package(OpenCV 4.0.1 REQUIRED)
  find_package(Threads REQUIRED)

  # find_package(catkin REQUIRED COMPONENTS
  #   roscpp
  #   rospy
  #   std_msgs
  #   tf2_ros
  # )

  include_directories(${OpenCV_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR})

  add_executable(vision_core4
                  src/main.cpp  
                  src/capture.cpp 
                  src/interfaces.cpp 
                  src/sceneTrack.cpp
                  src/stabilizer.cpp
                  src/thread.cpp
                  src/writer.cpp
                  src/objectTrack.cpp
                  src/system.cpp
                  )

  target_link_libraries(vision_core4 ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT})
  
endif()

# ================ Jetson Build ===================
if(JETSON_BUILD)

  message("configuring for Jetson")

  add_compile_definitions(WITH_ROS)
  add_compile_definitions(JETSON)
  add_compile_definitions(WITH_CUDA)

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
                  src/objectTrack.cpp
                  src/system.cpp
                  )

  target_link_libraries(vision_core4 ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT} ${catkin_LIBRARIES})

endif()

# ================ Ubuntu VM Build ===================
if(Ubuntu_VM_BUILD)

  message("configuring for Ubuntu VM")

  add_compile_definitions(UBUNTU_VM)
  add_compile_definitions(HAVE_DISPLAY)

  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

  find_package(OpenCV 4.0.1 REQUIRED)
  find_package(Threads REQUIRED)

  # find_package(catkin REQUIRED COMPONENTS
  #   roscpp
  #   rospy
  #   std_msgs
  #   tf2_ros
  # )

  include_directories(${OpenCV_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR})

  add_executable(vision_core4
                  src/main.cpp  
                  src/capture.cpp 
                  src/interfaces.cpp 
                  src/sceneTrack.cpp
                  src/stabilizer.cpp
                  src/thread.cpp
                  src/writer.cpp
                  src/objectTrack.cpp
                  src/system.cpp
                  )

  target_link_libraries(vision_core4 ${OpenCV_LIBS} ${CMAKE_THREAD_LIBS_INIT})
  
endif()


# ================ Windows Build ===================
if(MAC_BUILD)

  message("configuring for Windows")

  # Hahahaha why would i ever do this

endif()