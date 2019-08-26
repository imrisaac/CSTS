//
//  interfaceMavlink.hpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#ifndef mavlinkInterface_hpp
#define mavlinkInterface_hpp

#include "serial_port.h"

#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <iostream>		// for basic file operations
#include <fstream>		// for basic file operations

// TODO: fix ugly include
#include "../../include/mavlink/v2.0/ardupilotmega/mavlink.h"

using namespace std;

struct Time_Stamps
{
    Time_Stamps()
    {
        reset_timestamps();
    }

    uint64_t heartbeat;
    uint64_t sys_status;
    uint64_t battery_status;
    uint64_t local_position_ned;
    uint64_t global_position_int;
    uint64_t position_target_local_ned;
    uint64_t position_target_global_int;
    uint64_t highres_imu;
    uint64_t attitude;

    void
    reset_timestamps()
    {
        heartbeat = 0;
        sys_status = 0;
        battery_status = 0;
        local_position_ned = 0;
        global_position_int = 0;
        position_target_local_ned = 0;
        position_target_global_int = 0;
        highres_imu = 0;
        attitude = 0;
    }
};

struct Mavlink_Messages
{

    int sysid;
    int compid;

    // Heartbeat
    mavlink_heartbeat_t heartbeat;

    // System Status
    mavlink_sys_status_t sys_status;

    // Battery Status
    mavlink_battery_status_t battery_status;

    // Local Position
    mavlink_local_position_ned_t local_position_ned;

    // Global Position
    mavlink_global_position_int_t global_position_int;

    // Local Position Target
    mavlink_position_target_local_ned_t position_target_local_ned;

    // Global Position Target
    mavlink_position_target_global_int_t position_target_global_int;

    // HiRes IMU
    mavlink_highres_imu_t highres_imu;

    // Attitude
    mavlink_attitude_t attitude;

    // Payload Control
    mavlink_av_payload_control_t payload_control;

    // System Parameters?

    // Time Stamps
    Time_Stamps time_stamps;

    void reset_timestamps(){
        time_stamps.reset_timestamps();
    }
};

class MavlinkInterface
{
public:
    void init();

    void processMessage(mavlink_message_t message);

    void write_messages();

    // TODO: make private
    Mavlink_Messages current_messages;
    
    void send_heartbeat(uint8_t type, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status);
    
    void send_payload_status();

    void send_scaled_pressure(int temperature);

private:

};

#endif //mavlinkInterface_hpp
