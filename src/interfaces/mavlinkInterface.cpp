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
    // This doesn't handle multiple message sources
    current_messages.sysid = message.sysid;
    current_messages.compid = message.compid;

    // Handle Message ID
    switch (message.msgid){

        case MAVLINK_MSG_ID_HEARTBEAT:{

            //printf("MAVLINK_MSG_ID_HEARTBEAT\n");
            mavlink_msg_heartbeat_decode(&message, &(current_messages.heartbeat));
            current_messages.time_stamps.heartbeat = get_time_usec();
            
            //cout << "heartbeat " << current_messages.time_stamps.heartbeat << endl;

            break;

        }

        case MAVLINK_MSG_ID_SYS_STATUS:{

            //printf("MAVLINK_MSG_ID_SYS_STATUS\n");
            mavlink_msg_sys_status_decode(&message, &(current_messages.sys_status));
            current_messages.time_stamps.sys_status = get_time_usec();

            break;

        }

        case MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL:{
            
           // cout << "recieved payload control" << endl;
            
            mavlink_av_payload_control_t packet;

            mavlink_msg_av_payload_control_decode(&message, &packet);
            current_messages.payload_control = packet;

            break;
        }

        case MAVLINK_MSG_ID_GPS_RAW_INT:{

           // cout << "recieved gps raw int" << endl;
            break;
        }

        case MAVLINK_MSG_ID_SYSTEM_TIME:{
            

            cout << "recieved system time message" << endl;
            
        }

    } // message id switch case

    return;
}


/*
	send_heartbeat
	wrapper for sending heartbeat
 */
void MavlinkInterface::send_heartbeat(uint8_t type, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status){

    /*
	mavlink_heartbeat_t heartbeat;
	mavlink_message_t message;

	//uint16_t mavlink_msg_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t *msg, const mavlink_heartbeat_t *heartbeat)

    mavlink_msg_heartbeat_encode(
		system_id,
		companion_id,
        &message, 
		&heartbeat);

	// do the write
	int len = write_message(message);

	// check the write
	if ( len <= 0 )
		fprintf(stderr,"WARNING: could not send HEARTBEAT \n");
* 
* */
}

/*
    Send scaled pressure
    used for sending Tegra cpu tempeature
 */
void MavlinkInterface::send_scaled_pressure(int temperature, int pressure){
    
    mavlink_scaled_pressure_t scaled_pressure;
    mavlink_message_t message;

    scaled_pressure.temperature = temperature;

    int msg_size = mavlink_msg_scaled_pressure_encode(
        system_id,
        component_id,
        &message,
        &scaled_pressure
    );
    
    //serial_port->write_message(message);
}


/**
    Send payload status message
 */
void MavlinkInterface::send_payload_status(){

}

