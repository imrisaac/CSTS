//
//  interfaceMavlink.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//

#include "mavlinkInterface.hpp"

// dirty macro for printing variable name
#define VariableName(name) #name

// get usec helper
uint64_t get_time_usec()
{
    static struct timeval _time_stamp;
    gettimeofday(&_time_stamp, NULL);
    return _time_stamp.tv_sec * 1000000 + _time_stamp.tv_usec;
}

void MavlinkInterface::processMessage(mavlink_message_t message){

    // Store message sysid and compid.
    // Note this doesn't handle multiple message sources
    // need multiple structs for multiple sources, programatically ideally
    current_messages.sysid = message.sysid;
    current_messages.compid = message.compid;

    // Handle Message ID
    switch (message.msgid){

        case MAVLINK_MSG_ID_HEARTBEAT:{

            //printf("MAVLINK_MSG_ID_HEARTBEAT\n");
            mavlink_msg_heartbeat_decode(&message, &(current_messages.heartbeat));
            cout << "heartbeat" << endl;
            current_messages.time_stamps.heartbeat = get_time_usec();

            break;

        }

        case MAVLINK_MSG_ID_SYS_STATUS:{

            //printf("MAVLINK_MSG_ID_SYS_STATUS\n");
            mavlink_msg_sys_status_decode(&message, &(current_messages.sys_status));
            current_messages.time_stamps.sys_status = get_time_usec();

            break;

        }

        case MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL:{

            break;
        }
    } // message id switch case

    return;
}