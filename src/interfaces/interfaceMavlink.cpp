//
//  interfaceMavlink.cpp
//  thread_safe
//
//  Created by Isaac Reed on 7/23/19.
//  Copyright © 2019 Isaac Reed. All rights reserved.
//


Autopilot_Interface::Autopilot_Interface(Serial_Port *serial_port_)
{
	// initialize attributes
	write_count = 0;

	reading_status = 0;      // whether the read thread is running
	writing_status = 0;      // whether the write thread is running
	control_status = 0;      // whether the autopilot is in offboard control mode
	time_to_exit   = false;  // flag to signal thread exit

	read_tid  = 0; // read thread id
	write_tid = 0; // write thread id

	system_id    = 0; // system id
	autopilot_id = 0; // autopilot component id
	companion_id = 0; // companion computer component id

	current_messages.sysid  = system_id;
	current_messages.compid = autopilot_id;

	serial_port = serial_port_; // serial port management object

}

Autopilot_Interface::~Autopilot_Interface()
{}

void Autopilot_Interface::read_messages()
{
	bool success;               // receive success flag
	bool received_all = false;  // receive only one message
	Time_Stamps this_timestamps;

	std::ofstream cameraSwFile;

    // read message 
    mavlink_message_t message;
    success = serial_port->read_message(message);

    // handle message
    if( success )
    {

        // Store message sysid and compid.
        // Note this doesn't handle multiple message sources.
        current_messages.sysid  = message.sysid;
        current_messages.compid = message.compid;
        current_messages.seq = message.seq;

        // Handle Message ID
        switch (message.msgid)
        {

            case MAVLINK_MSG_ID_HEARTBEAT:
            {
                //printf("MAVLINK_MSG_ID_HEARTBEAT\n");
                mavlink_msg_heartbeat_decode(&message, &(current_messages.heartbeat));

                if(prettyPrint){
                    printf("Heartbeat: seq | sysid | compid | custom_mode | type | autopilot | base_mode | system_status | mavlink_version |\n");
                    printf("           %3d |   %3d |    %3d |         %3d |  %3d |       %3d |       %3d |           %3d |             %3d |\n\n",
                           current_messages.seq, current_messages.sysid, current_messages.compid, current_messages.heartbeat.custom_mode, current_messages.heartbeat.type, current_messages.heartbeat.autopilot, current_messages.heartbeat.base_mode, current_messages.heartbeat.system_status, current_messages.heartbeat.mavlink_version);
                }

                current_messages.time_stamps.heartbeat = get_time_usec();
                this_timestamps.heartbeat = current_messages.time_stamps.heartbeat;

                break;
            }


            case MAVLINK_MSG_ID_SYS_STATUS:
            {
                //printf("MAVLINK_MSG_ID_SYS_STATUS\n");
                mavlink_msg_sys_status_decode(&message, &(current_messages.sys_status));
                current_messages.time_stamps.sys_status = get_time_usec();
                this_timestamps.sys_status = current_messages.time_stamps.sys_status;
                break;
            }

            case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
            {
                //printf("MAVLINK_MSG_ID_GLOBAL_POSITION_INT\n");
                mavlink_msg_global_position_int_decode(&message, &(current_messages.global_position_int));
                current_messages.time_stamps.global_position_int = get_time_usec();
                this_timestamps.global_position_int = current_messages.time_stamps.global_position_int;
                break;
            }


            case MAVLINK_MSG_ID_ATTITUDE:
            {
                //printf("MAVLINK_MSG_ID_ATTITUDE\n");
                mavlink_msg_attitude_decode(&message, &(current_messages.attitude));
                current_messages.time_stamps.attitude = get_time_usec();
                this_timestamps.attitude = current_messages.time_stamps.attitude;
                break;
            }

            case MAVLINK_MSG_ID_ATTITUDE_QUATERNION:
            {
                mavlink_attitude_quaternion_t packet;
                mavlink_msg_attitude_quaternion_decode(&message, &packet);

                char local_message [60];
                sprintf(local_message, "ATT_Q: %d %d %d %d", packet.q1, packet.q2, packet.q3, packet.q4);

                if (prettyPrint){
                    printf("Attitude Quaternion: seq | sysid | compid |    q1    |    q2    |    q3    |    q4    | rollspeed | pitchspeed | yawspeed |\n");
                    printf("                     %3d |   %3d |    %3d | %f | %f | %f | %f |  %f |  %f  | %f |\n\n",
                           current_messages.seq, current_messages.sysid, current_messages.compid, packet.q1, packet.q2, packet.q3, packet.q4, packet.rollspeed, packet.pitchspeed, packet.yawspeed);
                }

                break;
            }

            case MAVLINK_MSG_ID_MANUAL_CONTROL:
            {

                break;
            }

            case MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS:
            {
                mavlink_feed_forward_joystick_positions_t packet;
                mavlink_msg_feed_forward_joystick_positions_decode(&message, &packet);
                
                break;
            }

            case MAVLINK_MSG_ID_AV_PAYLOAD_STATUS:
            {
                mavlink_av_payload_status_t packet;

                mavlink_msg_av_payload_status_decode(&message, &packet);
                
                break;
            }

            case MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL:
            {
                mavlink_av_payload_control_t packet;

                mavlink_msg_av_payload_control_decode(&message, &packet);

                printf("Payload Control: seq | sysid | compid | control_type | control flags |\n");
                printf("                 %3d |   %3d |    %3d |           %3d|           %3d |\n\n",
                       current_messages.seq, current_messages.sysid, current_messages.compid, packet.control_type , packet.control_flags);

                
                if( EO_COLOR_CAMERA == packet.control_type && CONNECTED == packet.control_flags ){
                    
                    cameraSwFile.open("home/nvidia/cam.txt");

                    cameraSwFile << "EO";

                    cameraSwFile.close();

                }else if ( IR_CAMERA == packet.control_type && CONNECTED == packet.control_flags  ){

                    cameraSwFile.open("home/nvidia/cam.txt");

                    cameraSwFile << "IR";

                    cameraSwFile.close();

                }

        
                break;
            }

            case MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL:
            {

        
                break;
            }

            case MAVLINK_MSG_ID_PAYLOAD_HIGH:
            {
                mavlink_payload_high_t packet;

                mavlink_msg_payload_high_decode(&message, &packet);

                break;
            }
            
            case MAVLINK_MSG_ID_PAYLOAD_LOW:
            {
                mavlink_payload_low_t packet;

                mavlink_msg_payload_low_decode(&message, &packet);

                break;
            }

            case MAVLINK_MSG_ID_COMMAND_LONG:

                mavlink_command_long_t packet;

                mavlink_msg_command_long_decode(&message, &packet);


            default:
            {
                //printf("Warning, did not handle message id %i sysid %3d compid %3d\n",message.msgid), message.sysid, message.compid;
                break;
            }


        } // switch msgid

    } // read message


	return;
}

/*
	send_heartbeat
	wrapper for sending heartbeat
 */
void Autopilot_Interface::send_heartbeat(uint8_t type, uint8_t base_mode, uint32_t custom_mode, uint8_t system_status)
{
	mavlink_heartbeat_t heartbeat;
	mavlink_message_t message;

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
}

