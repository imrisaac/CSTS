/** @file
 *    @brief MAVLink comm protocol testsuite generated from altavian.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef ALTAVIAN_TESTSUITE_H
#define ALTAVIAN_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_altavian(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_altavian(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_target_waypoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TARGET_WAYPOINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_target_waypoint_t packet_in = {
        963497464,963497672,17651,17755,17859,175
    };
    mavlink_target_waypoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.altitude = packet_in.altitude;
        packet1.DTED = packet_in.DTED;
        packet1.radius = packet_in.radius;
        packet1.index = packet_in.index;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_target_waypoint_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_target_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_target_waypoint_pack(system_id, component_id, &msg , packet1.index , packet1.latitude , packet1.longitude , packet1.altitude , packet1.DTED , packet1.radius );
    mavlink_msg_target_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_target_waypoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.latitude , packet1.longitude , packet1.altitude , packet1.DTED , packet1.radius );
    mavlink_msg_target_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_target_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_target_waypoint_send(MAVLINK_COMM_1 , packet1.index , packet1.latitude , packet1.longitude , packet1.altitude , packet1.DTED , packet1.radius );
    mavlink_msg_target_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mission_data_waypoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mission_data_waypoint_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,963498504,963498712,963498920,963499128,963499336,963499544,963499752,963499960,963500168,963500376,963500584,963500792,963501000,963501208,963501416,963501624,963501832,963502040,963502248,22227,22331,22435,22539,22643,22747,22851,22955,23059,23163,23267,23371,23475,23579,23683,23787,23891,23995,24099,24203,24307,24411,24515,24619,24723,24827,24931,25035,25139,83,150
    };
    mavlink_mission_data_waypoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.origin_lat = packet_in.origin_lat;
        packet1.origin_long = packet_in.origin_long;
        packet1.home_lat = packet_in.home_lat;
        packet1.home_long = packet_in.home_long;
        packet1.a_waypnt_lat = packet_in.a_waypnt_lat;
        packet1.a_waypnt_long = packet_in.a_waypnt_long;
        packet1.b_waypnt_lat = packet_in.b_waypnt_lat;
        packet1.b_waypnt_long = packet_in.b_waypnt_long;
        packet1.c_waypnt_lat = packet_in.c_waypnt_lat;
        packet1.c_waypnt_long = packet_in.c_waypnt_long;
        packet1.d_waypnt_lat = packet_in.d_waypnt_lat;
        packet1.d_waypnt_long = packet_in.d_waypnt_long;
        packet1.e_waypnt_lat = packet_in.e_waypnt_lat;
        packet1.e_waypnt_long = packet_in.e_waypnt_long;
        packet1.land_lat = packet_in.land_lat;
        packet1.land_long = packet_in.land_long;
        packet1.o1_waypnt_lat = packet_in.o1_waypnt_lat;
        packet1.o1_waypnt_long = packet_in.o1_waypnt_long;
        packet1.o2_waypnt_lat = packet_in.o2_waypnt_lat;
        packet1.o2_waypnt_long = packet_in.o2_waypnt_long;
        packet1.o3_waypnt_lat = packet_in.o3_waypnt_lat;
        packet1.o3_waypnt_long = packet_in.o3_waypnt_long;
        packet1.loiter_lat = packet_in.loiter_lat;
        packet1.loiter_long = packet_in.loiter_long;
        packet1.origin_alt = packet_in.origin_alt;
        packet1.origin_DTED = packet_in.origin_DTED;
        packet1.rally_alt = packet_in.rally_alt;
        packet1.flight_time = packet_in.flight_time;
        packet1.safe_alt = packet_in.safe_alt;
        packet1.safe_offset = packet_in.safe_offset;
        packet1.home_alt = packet_in.home_alt;
        packet1.home_DTED = packet_in.home_DTED;
        packet1.a_waypnt_alt = packet_in.a_waypnt_alt;
        packet1.a_waypnt_DTED = packet_in.a_waypnt_DTED;
        packet1.b_waypnt_alt = packet_in.b_waypnt_alt;
        packet1.b_waypnt_DTED = packet_in.b_waypnt_DTED;
        packet1.c_waypnt_alt = packet_in.c_waypnt_alt;
        packet1.c_waypnt_DTED = packet_in.c_waypnt_DTED;
        packet1.d_waypnt_alt = packet_in.d_waypnt_alt;
        packet1.d_waypnt_DTED = packet_in.d_waypnt_DTED;
        packet1.e_waypnt_alt = packet_in.e_waypnt_alt;
        packet1.e_waypnt_DTED = packet_in.e_waypnt_DTED;
        packet1.land_alt = packet_in.land_alt;
        packet1.land_DTED = packet_in.land_DTED;
        packet1.o1_waypnt_alt = packet_in.o1_waypnt_alt;
        packet1.o1_waypnt_DTED = packet_in.o1_waypnt_DTED;
        packet1.o2_waypnt_alt = packet_in.o2_waypnt_alt;
        packet1.o2_waypnt_DTED = packet_in.o2_waypnt_DTED;
        packet1.o3_waypnt_alt = packet_in.o3_waypnt_alt;
        packet1.o3_waypnt_DTED = packet_in.o3_waypnt_DTED;
        packet1.loiter_alt = packet_in.loiter_alt;
        packet1.loiter_DTED = packet_in.loiter_DTED;
        packet1.loiter_radius = packet_in.loiter_radius;
        packet1.index = packet_in.index;
        packet1.rally_mode = packet_in.rally_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_data_waypoint_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mission_data_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_data_waypoint_pack(system_id, component_id, &msg , packet1.index , packet1.origin_lat , packet1.origin_long , packet1.origin_alt , packet1.origin_DTED , packet1.rally_mode , packet1.rally_alt , packet1.flight_time , packet1.safe_alt , packet1.safe_offset , packet1.home_lat , packet1.home_long , packet1.home_alt , packet1.home_DTED , packet1.a_waypnt_lat , packet1.a_waypnt_long , packet1.a_waypnt_alt , packet1.a_waypnt_DTED , packet1.b_waypnt_lat , packet1.b_waypnt_long , packet1.b_waypnt_alt , packet1.b_waypnt_DTED , packet1.c_waypnt_lat , packet1.c_waypnt_long , packet1.c_waypnt_alt , packet1.c_waypnt_DTED , packet1.d_waypnt_lat , packet1.d_waypnt_long , packet1.d_waypnt_alt , packet1.d_waypnt_DTED , packet1.e_waypnt_lat , packet1.e_waypnt_long , packet1.e_waypnt_alt , packet1.e_waypnt_DTED , packet1.land_lat , packet1.land_long , packet1.land_alt , packet1.land_DTED , packet1.o1_waypnt_lat , packet1.o1_waypnt_long , packet1.o1_waypnt_alt , packet1.o1_waypnt_DTED , packet1.o2_waypnt_lat , packet1.o2_waypnt_long , packet1.o2_waypnt_alt , packet1.o2_waypnt_DTED , packet1.o3_waypnt_lat , packet1.o3_waypnt_long , packet1.o3_waypnt_alt , packet1.o3_waypnt_DTED , packet1.loiter_lat , packet1.loiter_long , packet1.loiter_alt , packet1.loiter_DTED , packet1.loiter_radius );
    mavlink_msg_mission_data_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_data_waypoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.origin_lat , packet1.origin_long , packet1.origin_alt , packet1.origin_DTED , packet1.rally_mode , packet1.rally_alt , packet1.flight_time , packet1.safe_alt , packet1.safe_offset , packet1.home_lat , packet1.home_long , packet1.home_alt , packet1.home_DTED , packet1.a_waypnt_lat , packet1.a_waypnt_long , packet1.a_waypnt_alt , packet1.a_waypnt_DTED , packet1.b_waypnt_lat , packet1.b_waypnt_long , packet1.b_waypnt_alt , packet1.b_waypnt_DTED , packet1.c_waypnt_lat , packet1.c_waypnt_long , packet1.c_waypnt_alt , packet1.c_waypnt_DTED , packet1.d_waypnt_lat , packet1.d_waypnt_long , packet1.d_waypnt_alt , packet1.d_waypnt_DTED , packet1.e_waypnt_lat , packet1.e_waypnt_long , packet1.e_waypnt_alt , packet1.e_waypnt_DTED , packet1.land_lat , packet1.land_long , packet1.land_alt , packet1.land_DTED , packet1.o1_waypnt_lat , packet1.o1_waypnt_long , packet1.o1_waypnt_alt , packet1.o1_waypnt_DTED , packet1.o2_waypnt_lat , packet1.o2_waypnt_long , packet1.o2_waypnt_alt , packet1.o2_waypnt_DTED , packet1.o3_waypnt_lat , packet1.o3_waypnt_long , packet1.o3_waypnt_alt , packet1.o3_waypnt_DTED , packet1.loiter_lat , packet1.loiter_long , packet1.loiter_alt , packet1.loiter_DTED , packet1.loiter_radius );
    mavlink_msg_mission_data_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mission_data_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_data_waypoint_send(MAVLINK_COMM_1 , packet1.index , packet1.origin_lat , packet1.origin_long , packet1.origin_alt , packet1.origin_DTED , packet1.rally_mode , packet1.rally_alt , packet1.flight_time , packet1.safe_alt , packet1.safe_offset , packet1.home_lat , packet1.home_long , packet1.home_alt , packet1.home_DTED , packet1.a_waypnt_lat , packet1.a_waypnt_long , packet1.a_waypnt_alt , packet1.a_waypnt_DTED , packet1.b_waypnt_lat , packet1.b_waypnt_long , packet1.b_waypnt_alt , packet1.b_waypnt_DTED , packet1.c_waypnt_lat , packet1.c_waypnt_long , packet1.c_waypnt_alt , packet1.c_waypnt_DTED , packet1.d_waypnt_lat , packet1.d_waypnt_long , packet1.d_waypnt_alt , packet1.d_waypnt_DTED , packet1.e_waypnt_lat , packet1.e_waypnt_long , packet1.e_waypnt_alt , packet1.e_waypnt_DTED , packet1.land_lat , packet1.land_long , packet1.land_alt , packet1.land_DTED , packet1.o1_waypnt_lat , packet1.o1_waypnt_long , packet1.o1_waypnt_alt , packet1.o1_waypnt_DTED , packet1.o2_waypnt_lat , packet1.o2_waypnt_long , packet1.o2_waypnt_alt , packet1.o2_waypnt_DTED , packet1.o3_waypnt_lat , packet1.o3_waypnt_long , packet1.o3_waypnt_alt , packet1.o3_waypnt_DTED , packet1.loiter_lat , packet1.loiter_long , packet1.loiter_alt , packet1.loiter_DTED , packet1.loiter_radius );
    mavlink_msg_mission_data_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gps_key_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GPS_KEY_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gps_key_state_t packet_in = {
        5
    };
    mavlink_gps_key_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gps_key_status = packet_in.gps_key_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_key_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gps_key_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_key_state_pack(system_id, component_id, &msg , packet1.gps_key_status );
    mavlink_msg_gps_key_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_key_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gps_key_status );
    mavlink_msg_gps_key_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gps_key_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_key_state_send(MAVLINK_COMM_1 , packet1.gps_key_status );
    mavlink_msg_gps_key_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_component_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_component_information_t packet_in = {
        17235,17339,17,84,151,{ 218, 219, 220 },"KLMNOPQRSTUVWXY","ABCDEFGHIJKLMNO"
    };
    mavlink_av_component_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.component_response = packet_in.component_response;
        packet1.number_of_flights = packet_in.number_of_flights;
        packet1.index = packet_in.index;
        packet1.total_devices = packet_in.total_devices;
        packet1.device_type = packet_in.device_type;
        
        mav_array_memcpy(packet1.hobbs_timer, packet_in.hobbs_timer, sizeof(uint8_t)*3);
        mav_array_memcpy(packet1.device_string, packet_in.device_string, sizeof(char)*16);
        mav_array_memcpy(packet1.additional_info, packet_in.additional_info, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_component_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_information_pack(system_id, component_id, &msg , packet1.index , packet1.total_devices , packet1.device_type , packet1.component_response , packet1.hobbs_timer , packet1.number_of_flights , packet1.device_string , packet1.additional_info );
    mavlink_msg_av_component_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.total_devices , packet1.device_type , packet1.component_response , packet1.hobbs_timer , packet1.number_of_flights , packet1.device_string , packet1.additional_info );
    mavlink_msg_av_component_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_component_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_information_send(MAVLINK_COMM_1 , packet1.index , packet1.total_devices , packet1.device_type , packet1.component_response , packet1.hobbs_timer , packet1.number_of_flights , packet1.device_string , packet1.additional_info );
    mavlink_msg_av_component_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_component_version_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_component_version_information_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFG","IJKLMNOPQRSTUVW","YZABCDEFGHIJKLMNOPQRSTUVWXYZABC","EFG","IJKLMNOPQRSTUVWXYZABCDEFGHIJKLM","OPQRSTUVWXYZABC"
    };
    mavlink_av_component_version_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.index = packet_in.index;
        packet1.device_type = packet_in.device_type;
        
        mav_array_memcpy(packet1.software_version, packet_in.software_version, sizeof(char)*32);
        mav_array_memcpy(packet1.device_string, packet_in.device_string, sizeof(char)*16);
        mav_array_memcpy(packet1.assembly_part_number, packet_in.assembly_part_number, sizeof(char)*32);
        mav_array_memcpy(packet1.assembly_hardware_version, packet_in.assembly_hardware_version, sizeof(char)*4);
        mav_array_memcpy(packet1.assembly_serial_number, packet_in.assembly_serial_number, sizeof(char)*32);
        mav_array_memcpy(packet1.additional_info, packet_in.additional_info, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_version_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_component_version_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_version_information_pack(system_id, component_id, &msg , packet1.index , packet1.device_type , packet1.software_version , packet1.device_string , packet1.assembly_part_number , packet1.assembly_hardware_version , packet1.assembly_serial_number , packet1.additional_info );
    mavlink_msg_av_component_version_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_version_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.device_type , packet1.software_version , packet1.device_string , packet1.assembly_part_number , packet1.assembly_hardware_version , packet1.assembly_serial_number , packet1.additional_info );
    mavlink_msg_av_component_version_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_component_version_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_component_version_information_send(MAVLINK_COMM_1 , packet1.index , packet1.device_type , packet1.software_version , packet1.device_string , packet1.assembly_part_number , packet1.assembly_hardware_version , packet1.assembly_serial_number , packet1.additional_info );
    mavlink_msg_av_component_version_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_uplink_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_UPLINK_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_uplink_control_t packet_in = {
        17235,17339,17
    };
    mavlink_av_uplink_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rudder = packet_in.rudder;
        packet1.elevator = packet_in.elevator;
        packet1.throttle = packet_in.throttle;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_uplink_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_uplink_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_uplink_control_pack(system_id, component_id, &msg , packet1.throttle , packet1.rudder , packet1.elevator );
    mavlink_msg_av_uplink_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_uplink_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.throttle , packet1.rudder , packet1.elevator );
    mavlink_msg_av_uplink_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_uplink_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_uplink_control_send(MAVLINK_COMM_1 , packet1.throttle , packet1.rudder , packet1.elevator );
    mavlink_msg_av_uplink_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_beacon_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BEACON_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_beacon_status_t packet_in = {
        5,72,139
    };
    mavlink_beacon_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.strobe_command = packet_in.strobe_command;
        packet1.locator_command = packet_in.locator_command;
        packet1.frequency_band = packet_in.frequency_band;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BEACON_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BEACON_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_beacon_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_status_pack(system_id, component_id, &msg , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_beacon_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_status_send(MAVLINK_COMM_1 , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_beacon_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BEACON_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_beacon_control_t packet_in = {
        5,72,139
    };
    mavlink_beacon_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.strobe_command = packet_in.strobe_command;
        packet1.locator_command = packet_in.locator_command;
        packet1.frequency_band = packet_in.frequency_band;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_beacon_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_control_pack(system_id, component_id, &msg , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_beacon_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_beacon_control_send(MAVLINK_COMM_1 , packet1.strobe_command , packet1.locator_command , packet1.frequency_band );
    mavlink_msg_beacon_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_motor_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MOTOR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_motor_status_t packet_in = {
        17235,17339
    };
    mavlink_motor_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pwm_high_time = packet_in.pwm_high_time;
        packet1.temperature = packet_in.temperature;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_motor_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_motor_status_pack(system_id, component_id, &msg , packet1.pwm_high_time , packet1.temperature );
    mavlink_msg_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_motor_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pwm_high_time , packet1.temperature );
    mavlink_msg_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_motor_status_send(MAVLINK_COMM_1 , packet1.pwm_high_time , packet1.temperature );
    mavlink_msg_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_battery_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_BATTERY_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_battery_status_t packet_in = {
        17235,17339,17443,17547,17651,163,230
    };
    mavlink_av_battery_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.temperature = packet_in.temperature;
        packet1.voltage = packet_in.voltage;
        packet1.current = packet_in.current;
        packet1.capacity = packet_in.capacity;
        packet1.pcba_temp = packet_in.pcba_temp;
        packet1.device_type = packet_in.device_type;
        packet1.battery_command = packet_in.battery_command;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_battery_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_battery_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_battery_status_pack(system_id, component_id, &msg , packet1.device_type , packet1.battery_command , packet1.temperature , packet1.voltage , packet1.current , packet1.capacity , packet1.pcba_temp );
    mavlink_msg_av_battery_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_battery_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.device_type , packet1.battery_command , packet1.temperature , packet1.voltage , packet1.current , packet1.capacity , packet1.pcba_temp );
    mavlink_msg_av_battery_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_battery_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_battery_status_send(MAVLINK_COMM_1 , packet1.device_type , packet1.battery_command , packet1.temperature , packet1.voltage , packet1.current , packet1.capacity , packet1.pcba_temp );
    mavlink_msg_av_battery_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gps_extended_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GPS_EXTENDED_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gps_extended_info_t packet_in = {
        963497464,17443,17547,29,96,163,230,41,108
    };
    mavlink_gps_extended_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.avx_time = packet_in.avx_time;
        packet1.year = packet_in.year;
        packet1.magnetic_deviation = packet_in.magnetic_deviation;
        packet1.gps_status = packet_in.gps_status;
        packet1.month = packet_in.month;
        packet1.day = packet_in.day;
        packet1.hour = packet_in.hour;
        packet1.minute = packet_in.minute;
        packet1.second = packet_in.second;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_extended_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gps_extended_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_extended_info_pack(system_id, component_id, &msg , packet1.avx_time , packet1.gps_status , packet1.month , packet1.day , packet1.year , packet1.hour , packet1.minute , packet1.second , packet1.magnetic_deviation );
    mavlink_msg_gps_extended_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_extended_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.avx_time , packet1.gps_status , packet1.month , packet1.day , packet1.year , packet1.hour , packet1.minute , packet1.second , packet1.magnetic_deviation );
    mavlink_msg_gps_extended_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gps_extended_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_extended_info_send(MAVLINK_COMM_1 , packet1.avx_time , packet1.gps_status , packet1.month , packet1.day , packet1.year , packet1.hour , packet1.minute , packet1.second , packet1.magnetic_deviation );
    mavlink_msg_gps_extended_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_downlink_data_low_rate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_downlink_data_low_rate_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,187,254
    };
    mavlink_downlink_data_low_rate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.aircraft_id = packet_in.aircraft_id;
        packet1.uav_battery_voltage = packet_in.uav_battery_voltage;
        packet1.uav_temperature = packet_in.uav_temperature;
        packet1.flight_time = packet_in.flight_time;
        packet1.wind_speed = packet_in.wind_speed;
        packet1.wind_direction = packet_in.wind_direction;
        packet1.radio_channel = packet_in.radio_channel;
        packet1.radio_tx_power = packet_in.radio_tx_power;
        packet1.uav_sw_Version = packet_in.uav_sw_Version;
        packet1.aircraft_type = packet_in.aircraft_type;
        packet1.uav_uplink_fps = packet_in.uav_uplink_fps;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_low_rate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_downlink_data_low_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_low_rate_pack(system_id, component_id, &msg , packet1.aircraft_type , packet1.aircraft_id , packet1.uav_battery_voltage , packet1.uav_temperature , packet1.flight_time , packet1.wind_speed , packet1.wind_direction , packet1.radio_channel , packet1.radio_tx_power , packet1.uav_uplink_fps , packet1.uav_sw_Version );
    mavlink_msg_downlink_data_low_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_low_rate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.aircraft_type , packet1.aircraft_id , packet1.uav_battery_voltage , packet1.uav_temperature , packet1.flight_time , packet1.wind_speed , packet1.wind_direction , packet1.radio_channel , packet1.radio_tx_power , packet1.uav_uplink_fps , packet1.uav_sw_Version );
    mavlink_msg_downlink_data_low_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_downlink_data_low_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_low_rate_send(MAVLINK_COMM_1 , packet1.aircraft_type , packet1.aircraft_id , packet1.uav_battery_voltage , packet1.uav_temperature , packet1.flight_time , packet1.wind_speed , packet1.wind_direction , packet1.radio_channel , packet1.radio_tx_power , packet1.uav_uplink_fps , packet1.uav_sw_Version );
    mavlink_msg_downlink_data_low_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_downlink_data_high_rate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_downlink_data_high_rate_t packet_in = {
        963497464,963497672,963497880,963498088,18067,18171,18275,18379,18483,18587,18691,18795,18899,19003,19107,19211,19315,19419
    };
    mavlink_downlink_data_high_rate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.downlink_flags = packet_in.downlink_flags;
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.avx_time = packet_in.avx_time;
        packet1.climb_rate = packet_in.climb_rate;
        packet1.altitude = packet_in.altitude;
        packet1.av_heading = packet_in.av_heading;
        packet1.pitch_angle = packet_in.pitch_angle;
        packet1.bank_angle = packet_in.bank_angle;
        packet1.yaw_rate = packet_in.yaw_rate;
        packet1.pitch_rate = packet_in.pitch_rate;
        packet1.roll_rate = packet_in.roll_rate;
        packet1.ground_velocity = packet_in.ground_velocity;
        packet1.ground_track = packet_in.ground_track;
        packet1.air_speed = packet_in.air_speed;
        packet1.x_accel = packet_in.x_accel;
        packet1.y_accel = packet_in.y_accel;
        packet1.z_accel = packet_in.z_accel;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_high_rate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_downlink_data_high_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_high_rate_pack(system_id, component_id, &msg , packet1.downlink_flags , packet1.climb_rate , packet1.altitude , packet1.av_heading , packet1.pitch_angle , packet1.bank_angle , packet1.yaw_rate , packet1.pitch_rate , packet1.roll_rate , packet1.latitude , packet1.longitude , packet1.ground_velocity , packet1.ground_track , packet1.air_speed , packet1.x_accel , packet1.y_accel , packet1.z_accel , packet1.avx_time );
    mavlink_msg_downlink_data_high_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_high_rate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.downlink_flags , packet1.climb_rate , packet1.altitude , packet1.av_heading , packet1.pitch_angle , packet1.bank_angle , packet1.yaw_rate , packet1.pitch_rate , packet1.roll_rate , packet1.latitude , packet1.longitude , packet1.ground_velocity , packet1.ground_track , packet1.air_speed , packet1.x_accel , packet1.y_accel , packet1.z_accel , packet1.avx_time );
    mavlink_msg_downlink_data_high_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_downlink_data_high_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_data_high_rate_send(MAVLINK_COMM_1 , packet1.downlink_flags , packet1.climb_rate , packet1.altitude , packet1.av_heading , packet1.pitch_angle , packet1.bank_angle , packet1.yaw_rate , packet1.pitch_rate , packet1.roll_rate , packet1.latitude , packet1.longitude , packet1.ground_velocity , packet1.ground_track , packet1.air_speed , packet1.x_accel , packet1.y_accel , packet1.z_accel , packet1.avx_time );
    mavlink_msg_downlink_data_high_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_autopilot_time_sync_init(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_autopilot_time_sync_init_t packet_in = {
        5
    };
    mavlink_autopilot_time_sync_init_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved = packet_in.reserved;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_init_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_autopilot_time_sync_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_init_pack(system_id, component_id, &msg , packet1.reserved );
    mavlink_msg_autopilot_time_sync_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_init_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved );
    mavlink_msg_autopilot_time_sync_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_autopilot_time_sync_init_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_init_send(MAVLINK_COMM_1 , packet1.reserved );
    mavlink_msg_autopilot_time_sync_init_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_autopilot_time_sync_set(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_autopilot_time_sync_set_t packet_in = {
        93372036854775807ULL,29
    };
    mavlink_autopilot_time_sync_set_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.utc_sync_timestamp = packet_in.utc_sync_timestamp;
        packet1.gps_status = packet_in.gps_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_set_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_autopilot_time_sync_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_set_pack(system_id, component_id, &msg , packet1.utc_sync_timestamp , packet1.gps_status );
    mavlink_msg_autopilot_time_sync_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_set_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.utc_sync_timestamp , packet1.gps_status );
    mavlink_msg_autopilot_time_sync_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_autopilot_time_sync_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_autopilot_time_sync_set_send(MAVLINK_COMM_1 , packet1.utc_sync_timestamp , packet1.gps_status );
    mavlink_msg_autopilot_time_sync_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_status_t packet_in = {
        17235,17339,{ 17443, 17444, 17445, 17446, 17447, 17448, 17449, 17450, 17451, 17452, 17453, 17454, 17455, 17456, 17457 },{ 19003, 19004, 19005, 19006, 19007, 19008, 19009, 19010, 19011, 19012, 19013, 19014, 19015, 19016, 19017 },20563,20667,209,20,87,154
    };
    mavlink_av_payload_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.hfov = packet_in.hfov;
        packet1.vfov = packet_in.vfov;
        packet1.pan = packet_in.pan;
        packet1.tilt = packet_in.tilt;
        packet1.type = packet_in.type;
        packet1.status_flags = packet_in.status_flags;
        packet1.zoom_limit_and_index = packet_in.zoom_limit_and_index;
        packet1.expanded_config_flags = packet_in.expanded_config_flags;
        
        mav_array_memcpy(packet1.hfov_list, packet_in.hfov_list, sizeof(uint16_t)*15);
        mav_array_memcpy(packet1.vfov_list, packet_in.vfov_list, sizeof(uint16_t)*15);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_status_pack(system_id, component_id, &msg , packet1.type , packet1.status_flags , packet1.hfov , packet1.vfov , packet1.zoom_limit_and_index , packet1.hfov_list , packet1.vfov_list , packet1.pan , packet1.tilt , packet1.expanded_config_flags );
    mavlink_msg_av_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.type , packet1.status_flags , packet1.hfov , packet1.vfov , packet1.zoom_limit_and_index , packet1.hfov_list , packet1.vfov_list , packet1.pan , packet1.tilt , packet1.expanded_config_flags );
    mavlink_msg_av_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_status_send(MAVLINK_COMM_1 , packet1.type , packet1.status_flags , packet1.hfov , packet1.vfov , packet1.zoom_limit_and_index , packet1.hfov_list , packet1.vfov_list , packet1.pan , packet1.tilt , packet1.expanded_config_flags );
    mavlink_msg_av_payload_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_pan_and_tilt(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_pan_and_tilt_t packet_in = {
        17235,17339
    };
    mavlink_av_payload_pan_and_tilt_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pan = packet_in.pan;
        packet1.tilt = packet_in.tilt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_pan_and_tilt_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_pan_and_tilt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_pan_and_tilt_pack(system_id, component_id, &msg , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_pan_and_tilt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_pan_and_tilt_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_pan_and_tilt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_pan_and_tilt_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_pan_and_tilt_send(MAVLINK_COMM_1 , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_pan_and_tilt_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_control_t packet_in = {
        17235,17339,17,84,151
    };
    mavlink_av_payload_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pan = packet_in.pan;
        packet1.tilt = packet_in.tilt;
        packet1.control_type = packet_in.control_type;
        packet1.control_flags = packet_in.control_flags;
        packet1.zoom_index = packet_in.zoom_index;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_control_pack(system_id, component_id, &msg , packet1.control_type , packet1.control_flags , packet1.zoom_index , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.control_type , packet1.control_flags , packet1.zoom_index , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_control_send(MAVLINK_COMM_1 , packet1.control_type , packet1.control_flags , packet1.zoom_index , packet1.pan , packet1.tilt );
    mavlink_msg_av_payload_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_high_rate_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_high_rate_control_t packet_in = {
        17235,17339,17443,151,218,29
    };
    mavlink_av_payload_high_rate_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.commanded_rudder = packet_in.commanded_rudder;
        packet1.commanded_elevator = packet_in.commanded_elevator;
        packet1.commanded_throttle = packet_in.commanded_throttle;
        packet1.joystick_x = packet_in.joystick_x;
        packet1.joystick_y = packet_in.joystick_y;
        packet1.uplinked_throttle = packet_in.uplinked_throttle;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_high_rate_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_control_pack(system_id, component_id, &msg , packet1.joystick_x , packet1.joystick_y , packet1.uplinked_throttle , packet1.commanded_rudder , packet1.commanded_elevator , packet1.commanded_throttle );
    mavlink_msg_av_payload_high_rate_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.joystick_x , packet1.joystick_y , packet1.uplinked_throttle , packet1.commanded_rudder , packet1.commanded_elevator , packet1.commanded_throttle );
    mavlink_msg_av_payload_high_rate_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_high_rate_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_control_send(MAVLINK_COMM_1 , packet1.joystick_x , packet1.joystick_y , packet1.uplinked_throttle , packet1.commanded_rudder , packet1.commanded_elevator , packet1.commanded_throttle );
    mavlink_msg_av_payload_high_rate_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_klv_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_klv_stream_t packet_in = {
        5,72,{ 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106 }
    };
    mavlink_av_payload_klv_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.length = packet_in.length;
        packet1.klv_type = packet_in.klv_type;
        
        mav_array_memcpy(packet1.klv_data, packet_in.klv_data, sizeof(uint8_t)*224);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_klv_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_klv_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_klv_stream_pack(system_id, component_id, &msg , packet1.length , packet1.klv_type , packet1.klv_data );
    mavlink_msg_av_payload_klv_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_klv_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.length , packet1.klv_type , packet1.klv_data );
    mavlink_msg_av_payload_klv_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_klv_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_klv_stream_send(MAVLINK_COMM_1 , packet1.length , packet1.klv_type , packet1.klv_data );
    mavlink_msg_av_payload_klv_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_video_compressor_bit_rate(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_video_compressor_bit_rate_t packet_in = {
        17235
    };
    mavlink_av_payload_video_compressor_bit_rate_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.output_bit_rate = packet_in.output_bit_rate;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_video_compressor_bit_rate_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_video_compressor_bit_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_video_compressor_bit_rate_pack(system_id, component_id, &msg , packet1.output_bit_rate );
    mavlink_msg_av_payload_video_compressor_bit_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_video_compressor_bit_rate_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.output_bit_rate );
    mavlink_msg_av_payload_video_compressor_bit_rate_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_video_compressor_bit_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_video_compressor_bit_rate_send(MAVLINK_COMM_1 , packet1.output_bit_rate );
    mavlink_msg_av_payload_video_compressor_bit_rate_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_interface_dumb(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_interface_dumb_t packet_in = {
        5,72
    };
    mavlink_av_payload_interface_dumb_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command_type = packet_in.command_type;
        packet1.payload_command = packet_in.payload_command;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_interface_dumb_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_interface_dumb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_interface_dumb_pack(system_id, component_id, &msg , packet1.command_type , packet1.payload_command );
    mavlink_msg_av_payload_interface_dumb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_interface_dumb_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command_type , packet1.payload_command );
    mavlink_msg_av_payload_interface_dumb_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_interface_dumb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_interface_dumb_send(MAVLINK_COMM_1 , packet1.command_type , packet1.payload_command );
    mavlink_msg_av_payload_interface_dumb_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gps_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GPS_COMMAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gps_command_t packet_in = {
        963497464,963497672,963497880,17859,17963,18067,18171,18275,18379,18483,211,22,89,156,223,34,101,168,235,46,113,180,247,58,125,192,3,70
    };
    mavlink_gps_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.nanosecond = packet_in.nanosecond;
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.year = packet_in.year;
        packet1.gps_status = packet_in.gps_status;
        packet1.gps_key_status = packet_in.gps_key_status;
        packet1.altitude = packet_in.altitude;
        packet1.ground_speed = packet_in.ground_speed;
        packet1.ground_course = packet_in.ground_course;
        packet1.magnetic_deviation = packet_in.magnetic_deviation;
        packet1.command = packet_in.command;
        packet1.month = packet_in.month;
        packet1.day = packet_in.day;
        packet1.hour = packet_in.hour;
        packet1.minute = packet_in.minute;
        packet1.second = packet_in.second;
        packet1.sat_cno_1 = packet_in.sat_cno_1;
        packet1.sat_cno_2 = packet_in.sat_cno_2;
        packet1.sat_cno_3 = packet_in.sat_cno_3;
        packet1.sat_cno_4 = packet_in.sat_cno_4;
        packet1.sat_cno_5 = packet_in.sat_cno_5;
        packet1.sat_cno_6 = packet_in.sat_cno_6;
        packet1.sat_cno_7 = packet_in.sat_cno_7;
        packet1.sat_cno_8 = packet_in.sat_cno_8;
        packet1.sat_cno_9 = packet_in.sat_cno_9;
        packet1.sat_cno_10 = packet_in.sat_cno_10;
        packet1.sat_cno_11 = packet_in.sat_cno_11;
        packet1.sat_cno_12 = packet_in.sat_cno_12;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_command_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gps_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_command_pack(system_id, component_id, &msg , packet1.command , packet1.year , packet1.month , packet1.day , packet1.hour , packet1.minute , packet1.second , packet1.nanosecond , packet1.gps_status , packet1.gps_key_status , packet1.latitude , packet1.longitude , packet1.altitude , packet1.ground_speed , packet1.ground_course , packet1.magnetic_deviation , packet1.sat_cno_1 , packet1.sat_cno_2 , packet1.sat_cno_3 , packet1.sat_cno_4 , packet1.sat_cno_5 , packet1.sat_cno_6 , packet1.sat_cno_7 , packet1.sat_cno_8 , packet1.sat_cno_9 , packet1.sat_cno_10 , packet1.sat_cno_11 , packet1.sat_cno_12 );
    mavlink_msg_gps_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.year , packet1.month , packet1.day , packet1.hour , packet1.minute , packet1.second , packet1.nanosecond , packet1.gps_status , packet1.gps_key_status , packet1.latitude , packet1.longitude , packet1.altitude , packet1.ground_speed , packet1.ground_course , packet1.magnetic_deviation , packet1.sat_cno_1 , packet1.sat_cno_2 , packet1.sat_cno_3 , packet1.sat_cno_4 , packet1.sat_cno_5 , packet1.sat_cno_6 , packet1.sat_cno_7 , packet1.sat_cno_8 , packet1.sat_cno_9 , packet1.sat_cno_10 , packet1.sat_cno_11 , packet1.sat_cno_12 );
    mavlink_msg_gps_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gps_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gps_command_send(MAVLINK_COMM_1 , packet1.command , packet1.year , packet1.month , packet1.day , packet1.hour , packet1.minute , packet1.second , packet1.nanosecond , packet1.gps_status , packet1.gps_key_status , packet1.latitude , packet1.longitude , packet1.altitude , packet1.ground_speed , packet1.ground_course , packet1.magnetic_deviation , packet1.sat_cno_1 , packet1.sat_cno_2 , packet1.sat_cno_3 , packet1.sat_cno_4 , packet1.sat_cno_5 , packet1.sat_cno_6 , packet1.sat_cno_7 , packet1.sat_cno_8 , packet1.sat_cno_9 , packet1.sat_cno_10 , packet1.sat_cno_11 , packet1.sat_cno_12 );
    mavlink_msg_gps_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_av_payload_high_rate_av_commanded_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_av_payload_high_rate_av_commanded_data_t packet_in = {
        17235,17339,17443,17547,17651,17755
    };
    mavlink_av_payload_high_rate_av_commanded_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.commanded_turn_rate = packet_in.commanded_turn_rate;
        packet1.commanded_bank_angle = packet_in.commanded_bank_angle;
        packet1.commanded_course = packet_in.commanded_course;
        packet1.commanded_climb_rate = packet_in.commanded_climb_rate;
        packet1.commanded_altitude = packet_in.commanded_altitude;
        packet1.commanded_airspeed = packet_in.commanded_airspeed;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_av_commanded_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_av_payload_high_rate_av_commanded_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_av_commanded_data_pack(system_id, component_id, &msg , packet1.commanded_turn_rate , packet1.commanded_bank_angle , packet1.commanded_course , packet1.commanded_climb_rate , packet1.commanded_altitude , packet1.commanded_airspeed );
    mavlink_msg_av_payload_high_rate_av_commanded_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_av_commanded_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.commanded_turn_rate , packet1.commanded_bank_angle , packet1.commanded_course , packet1.commanded_climb_rate , packet1.commanded_altitude , packet1.commanded_airspeed );
    mavlink_msg_av_payload_high_rate_av_commanded_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_av_payload_high_rate_av_commanded_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_av_payload_high_rate_av_commanded_data_send(MAVLINK_COMM_1 , packet1.commanded_turn_rate , packet1.commanded_bank_angle , packet1.commanded_course , packet1.commanded_climb_rate , packet1.commanded_altitude , packet1.commanded_airspeed );
    mavlink_msg_av_payload_high_rate_av_commanded_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_image_capture_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_image_capture_command_t packet_in = {
        17235,17339,17443,17547,17651,163,230,"MNOPQRSTUVWXYZABCDEFGHIJKLMNOPQ",137,204,15,{ 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93 },{ 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129 },{ 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165 }
    };
    mavlink_image_capture_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.captured_image_formats = packet_in.captured_image_formats;
        packet1.horizontal_resolution = packet_in.horizontal_resolution;
        packet1.vertical_resolution = packet_in.vertical_resolution;
        packet1.horizontal_offset = packet_in.horizontal_offset;
        packet1.vertical_offset = packet_in.vertical_offset;
        packet1.version = packet_in.version;
        packet1.image_capture_command_flags = packet_in.image_capture_command_flags;
        packet1.filename_length = packet_in.filename_length;
        packet1.quality = packet_in.quality;
        packet1.downsample_index = packet_in.downsample_index;
        
        mav_array_memcpy(packet1.filename, packet_in.filename, sizeof(char)*32);
        mav_array_memcpy(packet1.additional_behavior_block1, packet_in.additional_behavior_block1, sizeof(uint8_t)*12);
        mav_array_memcpy(packet1.additional_behavior_block2, packet_in.additional_behavior_block2, sizeof(uint8_t)*12);
        mav_array_memcpy(packet1.additional_behavior_block3, packet_in.additional_behavior_block3, sizeof(uint8_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_command_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_image_capture_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_command_pack(system_id, component_id, &msg , packet1.version , packet1.image_capture_command_flags , packet1.filename , packet1.filename_length , packet1.captured_image_formats , packet1.horizontal_resolution , packet1.vertical_resolution , packet1.horizontal_offset , packet1.vertical_offset , packet1.quality , packet1.downsample_index , packet1.additional_behavior_block1 , packet1.additional_behavior_block2 , packet1.additional_behavior_block3 );
    mavlink_msg_image_capture_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.image_capture_command_flags , packet1.filename , packet1.filename_length , packet1.captured_image_formats , packet1.horizontal_resolution , packet1.vertical_resolution , packet1.horizontal_offset , packet1.vertical_offset , packet1.quality , packet1.downsample_index , packet1.additional_behavior_block1 , packet1.additional_behavior_block2 , packet1.additional_behavior_block3 );
    mavlink_msg_image_capture_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_image_capture_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_command_send(MAVLINK_COMM_1 , packet1.version , packet1.image_capture_command_flags , packet1.filename , packet1.filename_length , packet1.captured_image_formats , packet1.horizontal_resolution , packet1.vertical_resolution , packet1.horizontal_offset , packet1.vertical_offset , packet1.quality , packet1.downsample_index , packet1.additional_behavior_block1 , packet1.additional_behavior_block2 , packet1.additional_behavior_block3 );
    mavlink_msg_image_capture_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_image_capture_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_image_capture_information_t packet_in = {
        17235,17339,17443,17547,17651,17755,{ 17859, 17860, 17861, 17862, 17863, 17864, 17865, 17866 },89,156,223,34,101,168
    };
    mavlink_image_capture_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.image_capture_unavailable_flags = packet_in.image_capture_unavailable_flags;
        packet1.supported_image_formats = packet_in.supported_image_formats;
        packet1.hfov = packet_in.hfov;
        packet1.vfov = packet_in.vfov;
        packet1.resolution_X = packet_in.resolution_X;
        packet1.resolution_Y = packet_in.resolution_Y;
        packet1.version = packet_in.version;
        packet1.recommended_quality = packet_in.recommended_quality;
        packet1.recommended_downsample_ratio = packet_in.recommended_downsample_ratio;
        packet1.downsample_index = packet_in.downsample_index;
        packet1.num_quality_settings = packet_in.num_quality_settings;
        packet1.downsample_ratio_count = packet_in.downsample_ratio_count;
        
        mav_array_memcpy(packet1.downsample_ratios, packet_in.downsample_ratios, sizeof(uint16_t)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_image_capture_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_information_pack(system_id, component_id, &msg , packet1.version , packet1.image_capture_unavailable_flags , packet1.supported_image_formats , packet1.hfov , packet1.vfov , packet1.resolution_X , packet1.resolution_Y , packet1.recommended_quality , packet1.recommended_downsample_ratio , packet1.downsample_index , packet1.num_quality_settings , packet1.downsample_ratio_count , packet1.downsample_ratios );
    mavlink_msg_image_capture_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.image_capture_unavailable_flags , packet1.supported_image_formats , packet1.hfov , packet1.vfov , packet1.resolution_X , packet1.resolution_Y , packet1.recommended_quality , packet1.recommended_downsample_ratio , packet1.downsample_index , packet1.num_quality_settings , packet1.downsample_ratio_count , packet1.downsample_ratios );
    mavlink_msg_image_capture_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_image_capture_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_capture_information_send(MAVLINK_COMM_1 , packet1.version , packet1.image_capture_unavailable_flags , packet1.supported_image_formats , packet1.hfov , packet1.vfov , packet1.resolution_X , packet1.resolution_Y , packet1.recommended_quality , packet1.recommended_downsample_ratio , packet1.downsample_index , packet1.num_quality_settings , packet1.downsample_ratio_count , packet1.downsample_ratios );
    mavlink_msg_image_capture_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_tracker_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TRACKER_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_tracker_information_t packet_in = {
        5,72,139
    };
    mavlink_tracker_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        packet1.offset_x = packet_in.offset_x;
        packet1.offset_y = packet_in.offset_y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_tracker_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_tracker_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_tracker_information_pack(system_id, component_id, &msg , packet1.status , packet1.offset_x , packet1.offset_y );
    mavlink_msg_tracker_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_tracker_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status , packet1.offset_x , packet1.offset_y );
    mavlink_msg_tracker_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_tracker_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_tracker_information_send(MAVLINK_COMM_1 , packet1.status , packet1.offset_x , packet1.offset_y );
    mavlink_msg_tracker_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_payload_high(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PAYLOAD_HIGH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_payload_high_t packet_in = {
        17235,139,206,17,84
    };
    mavlink_payload_high_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command = packet_in.command;
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        packet1.param3 = packet_in.param3;
        packet1.param4 = packet_in.param4;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_high_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_payload_high_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_high_pack(system_id, component_id, &msg , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 );
    mavlink_msg_payload_high_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_high_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 );
    mavlink_msg_payload_high_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_payload_high_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_high_send(MAVLINK_COMM_1 , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 );
    mavlink_msg_payload_high_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_payload_low(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PAYLOAD_LOW >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_payload_low_t packet_in = {
        963497464,963497672,963497880,101.0,129.0,157.0,185.0,18691
    };
    mavlink_payload_low_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        packet1.param3 = packet_in.param3;
        packet1.param4 = packet_in.param4;
        packet1.param5 = packet_in.param5;
        packet1.param6 = packet_in.param6;
        packet1.param7 = packet_in.param7;
        packet1.command = packet_in.command;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_low_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_payload_low_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_low_pack(system_id, component_id, &msg , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_payload_low_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_low_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_payload_low_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_payload_low_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_low_send(MAVLINK_COMM_1 , packet1.command , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_payload_low_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_payload_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PAYLOAD_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_payload_ack_t packet_in = {
        17235,139
    };
    mavlink_payload_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command = packet_in.command;
        packet1.result = packet_in.result;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_payload_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ack_pack(system_id, component_id, &msg , packet1.command , packet1.result );
    mavlink_msg_payload_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.result );
    mavlink_msg_payload_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_payload_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ack_send(MAVLINK_COMM_1 , packet1.command , packet1.result );
    mavlink_msg_payload_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_file_system_manager_node_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_file_system_manager_node_status_t packet_in = {
        963497464,17443,151,{ 218, 219, 220, 221, 222, 223 },108
    };
    mavlink_file_system_manager_node_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.last_command_sequence_number = packet_in.last_command_sequence_number;
        packet1.requester_process_id = packet_in.requester_process_id;
        packet1.version = packet_in.version;
        packet1.command_state_flags = packet_in.command_state_flags;
        
        mav_array_memcpy(packet1.requester_mac_address, packet_in.requester_mac_address, sizeof(uint8_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_file_system_manager_node_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_pack(system_id, component_id, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.last_command_sequence_number , packet1.command_state_flags );
    mavlink_msg_file_system_manager_node_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.last_command_sequence_number , packet1.command_state_flags );
    mavlink_msg_file_system_manager_node_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_file_system_manager_node_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_send(MAVLINK_COMM_1 , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.last_command_sequence_number , packet1.command_state_flags );
    mavlink_msg_file_system_manager_node_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_file_system_manager_node_status_request(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_file_system_manager_node_status_request_t packet_in = {
        17235,139,{ 206, 207, 208, 209, 210, 211 }
    };
    mavlink_file_system_manager_node_status_request_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.requester_process_id = packet_in.requester_process_id;
        packet1.version = packet_in.version;
        
        mav_array_memcpy(packet1.requester_mac_address, packet_in.requester_mac_address, sizeof(uint8_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_request_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_file_system_manager_node_status_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_request_pack(system_id, component_id, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id );
    mavlink_msg_file_system_manager_node_status_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_request_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id );
    mavlink_msg_file_system_manager_node_status_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_file_system_manager_node_status_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_manager_node_status_request_send(MAVLINK_COMM_1 , packet1.version , packet1.requester_mac_address , packet1.requester_process_id );
    mavlink_msg_file_system_manager_node_status_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_file_system_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FILE_SYSTEM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_file_system_status_t packet_in = {
        5,72,139
    };
    mavlink_file_system_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.version = packet_in.version;
        packet1.file_transfer_bandwidth_percentage = packet_in.file_transfer_bandwidth_percentage;
        packet1.payload_bandwidth_allocation = packet_in.payload_bandwidth_allocation;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_file_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_status_pack(system_id, component_id, &msg , packet1.version , packet1.file_transfer_bandwidth_percentage , packet1.payload_bandwidth_allocation );
    mavlink_msg_file_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.file_transfer_bandwidth_percentage , packet1.payload_bandwidth_allocation );
    mavlink_msg_file_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_file_system_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_system_status_send(MAVLINK_COMM_1 , packet1.version , packet1.file_transfer_bandwidth_percentage , packet1.payload_bandwidth_allocation );
    mavlink_msg_file_system_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_file_system_bandwidth(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_file_system_bandwidth_t packet_in = {
        5,72
    };
    mavlink_set_file_system_bandwidth_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.version = packet_in.version;
        packet1.bandwidth_percent = packet_in.bandwidth_percent;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_file_system_bandwidth_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_file_system_bandwidth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_file_system_bandwidth_pack(system_id, component_id, &msg , packet1.version , packet1.bandwidth_percent );
    mavlink_msg_set_file_system_bandwidth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_file_system_bandwidth_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.bandwidth_percent );
    mavlink_msg_set_file_system_bandwidth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_file_system_bandwidth_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_file_system_bandwidth_send(MAVLINK_COMM_1 , packet1.version , packet1.bandwidth_percent );
    mavlink_msg_set_file_system_bandwidth_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_file_information(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FILE_INFORMATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_file_information_t packet_in = {
        963497464,17443,151,"HIJKLMNOPQRSTUVWXYZABCDEFGHIJKL",58,"OP",70
    };
    mavlink_file_information_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.file_size = packet_in.file_size;
        packet1.file_id = packet_in.file_id;
        packet1.version = packet_in.version;
        packet1.filename_length = packet_in.filename_length;
        packet1.file_information_flags = packet_in.file_information_flags;
        
        mav_array_memcpy(packet1.filename, packet_in.filename, sizeof(char)*32);
        mav_array_memcpy(packet1.extension, packet_in.extension, sizeof(char)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_file_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_pack(system_id, component_id, &msg , packet1.version , packet1.filename , packet1.filename_length , packet1.extension , packet1.file_information_flags , packet1.file_size , packet1.file_id );
    mavlink_msg_file_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.filename , packet1.filename_length , packet1.extension , packet1.file_information_flags , packet1.file_size , packet1.file_id );
    mavlink_msg_file_information_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_file_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_send(MAVLINK_COMM_1 , packet1.version , packet1.filename , packet1.filename_length , packet1.extension , packet1.file_information_flags , packet1.file_size , packet1.file_id );
    mavlink_msg_file_information_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_file_information_request(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_file_information_request_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRSTUVWXYZABCDEF",168,"IJ"
    };
    mavlink_file_information_request_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.version = packet_in.version;
        packet1.filename_length = packet_in.filename_length;
        
        mav_array_memcpy(packet1.filename, packet_in.filename, sizeof(char)*32);
        mav_array_memcpy(packet1.extension, packet_in.extension, sizeof(char)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_request_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_file_information_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_request_pack(system_id, component_id, &msg , packet1.version , packet1.filename , packet1.filename_length , packet1.extension );
    mavlink_msg_file_information_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_request_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.filename , packet1.filename_length , packet1.extension );
    mavlink_msg_file_information_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_file_information_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_file_information_request_send(MAVLINK_COMM_1 , packet1.version , packet1.filename , packet1.filename_length , packet1.extension );
    mavlink_msg_file_information_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cancel_file_block_downlink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cancel_file_block_downlink_t packet_in = {
        963497464,17443,151,{ 218, 219, 220, 221, 222, 223 }
    };
    mavlink_cancel_file_block_downlink_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command_sequence = packet_in.command_sequence;
        packet1.requester_process_id = packet_in.requester_process_id;
        packet1.version = packet_in.version;
        
        mav_array_memcpy(packet1.requester_mac_address, packet_in.requester_mac_address, sizeof(uint8_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cancel_file_block_downlink_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cancel_file_block_downlink_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cancel_file_block_downlink_pack(system_id, component_id, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence );
    mavlink_msg_cancel_file_block_downlink_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cancel_file_block_downlink_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence );
    mavlink_msg_cancel_file_block_downlink_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cancel_file_block_downlink_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cancel_file_block_downlink_send(MAVLINK_COMM_1 , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence );
    mavlink_msg_cancel_file_block_downlink_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_downlink_file_blocks_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_downlink_file_blocks_command_t packet_in = {
        963497464,963497672,17651,17755,17859,175,{ 242, 243, 244, 245, 246, 247 }
    };
    mavlink_downlink_file_blocks_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command_sequence = packet_in.command_sequence;
        packet1.start_index = packet_in.start_index;
        packet1.requester_process_id = packet_in.requester_process_id;
        packet1.file_id = packet_in.file_id;
        packet1.group_count = packet_in.group_count;
        packet1.version = packet_in.version;
        
        mav_array_memcpy(packet1.requester_mac_address, packet_in.requester_mac_address, sizeof(uint8_t)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_file_blocks_command_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_downlink_file_blocks_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_file_blocks_command_pack(system_id, component_id, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence , packet1.file_id , packet1.start_index , packet1.group_count );
    mavlink_msg_downlink_file_blocks_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_file_blocks_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence , packet1.file_id , packet1.start_index , packet1.group_count );
    mavlink_msg_downlink_file_blocks_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_downlink_file_blocks_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_downlink_file_blocks_command_send(MAVLINK_COMM_1 , packet1.version , packet1.requester_mac_address , packet1.requester_process_id , packet1.command_sequence , packet1.file_id , packet1.start_index , packet1.group_count );
    mavlink_msg_downlink_file_blocks_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_delete_file(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DELETE_FILE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_delete_file_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFG","IJ"
    };
    mavlink_delete_file_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.version = packet_in.version;
        packet1.filename_length = packet_in.filename_length;
        
        mav_array_memcpy(packet1.filename, packet_in.filename, sizeof(char)*32);
        mav_array_memcpy(packet1.extension, packet_in.extension, sizeof(char)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_delete_file_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_delete_file_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_delete_file_pack(system_id, component_id, &msg , packet1.version , packet1.filename_length , packet1.filename , packet1.extension );
    mavlink_msg_delete_file_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_delete_file_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.version , packet1.filename_length , packet1.filename , packet1.extension );
    mavlink_msg_delete_file_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_delete_file_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_delete_file_send(MAVLINK_COMM_1 , packet1.version , packet1.filename_length , packet1.filename , packet1.extension );
    mavlink_msg_delete_file_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_feed_forward_turn_rates(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_feed_forward_turn_rates_t packet_in = {
        17235,17339
    };
    mavlink_feed_forward_turn_rates_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.turn_rate = packet_in.turn_rate;
        packet1.tilt = packet_in.tilt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_turn_rates_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_feed_forward_turn_rates_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_turn_rates_pack(system_id, component_id, &msg , packet1.turn_rate , packet1.tilt );
    mavlink_msg_feed_forward_turn_rates_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_turn_rates_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.turn_rate , packet1.tilt );
    mavlink_msg_feed_forward_turn_rates_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_feed_forward_turn_rates_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_turn_rates_send(MAVLINK_COMM_1 , packet1.turn_rate , packet1.tilt );
    mavlink_msg_feed_forward_turn_rates_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_feed_forward_joystick_positions(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_feed_forward_joystick_positions_t packet_in = {
        5,72
    };
    mavlink_feed_forward_joystick_positions_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x_position = packet_in.x_position;
        packet1.y_position = packet_in.y_position;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_joystick_positions_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_feed_forward_joystick_positions_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_joystick_positions_pack(system_id, component_id, &msg , packet1.x_position , packet1.y_position );
    mavlink_msg_feed_forward_joystick_positions_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_joystick_positions_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x_position , packet1.y_position );
    mavlink_msg_feed_forward_joystick_positions_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_feed_forward_joystick_positions_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_feed_forward_joystick_positions_send(MAVLINK_COMM_1 , packet1.x_position , packet1.y_position );
    mavlink_msg_feed_forward_joystick_positions_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_bandwidth_limit(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_bandwidth_limit_t packet_in = {
        17235
    };
    mavlink_set_bandwidth_limit_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.bit_rate = packet_in.bit_rate;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_bandwidth_limit_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_pack(system_id, component_id, &msg , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_bandwidth_limit_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_send(MAVLINK_COMM_1 , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_bandwidth_limit_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_bandwidth_limit_ack_t packet_in = {
        17235
    };
    mavlink_set_bandwidth_limit_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.bit_rate = packet_in.bit_rate;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_bandwidth_limit_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_ack_pack(system_id, component_id, &msg , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_bandwidth_limit_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_bandwidth_limit_ack_send(MAVLINK_COMM_1 , packet1.bit_rate );
    mavlink_msg_set_bandwidth_limit_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cfov(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CFOV >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cfov_t packet_in = {
        963497464,963497672,963497880,17859,17963,18067,18171,18275
    };
    mavlink_cfov_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.avx_time = packet_in.avx_time;
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.heading = packet_in.heading;
        packet1.depression = packet_in.depression;
        packet1.roll = packet_in.roll;
        packet1.range = packet_in.range;
        packet1.terrain_altitude = packet_in.terrain_altitude;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CFOV_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CFOV_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cfov_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_pack(system_id, component_id, &msg , packet1.avx_time , packet1.latitude , packet1.longitude , packet1.heading , packet1.depression , packet1.roll , packet1.range , packet1.terrain_altitude );
    mavlink_msg_cfov_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.avx_time , packet1.latitude , packet1.longitude , packet1.heading , packet1.depression , packet1.roll , packet1.range , packet1.terrain_altitude );
    mavlink_msg_cfov_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cfov_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_send(MAVLINK_COMM_1 , packet1.avx_time , packet1.latitude , packet1.longitude , packet1.heading , packet1.depression , packet1.roll , packet1.range , packet1.terrain_altitude );
    mavlink_msg_cfov_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cfov_waypoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CFOV_WAYPOINT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cfov_waypoint_t packet_in = {
        963497464,963497672,963497880,963498088
    };
    mavlink_cfov_waypoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.altitude = packet_in.altitude;
        packet1.radius = packet_in.radius;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_waypoint_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cfov_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_waypoint_pack(system_id, component_id, &msg , packet1.latitude , packet1.longitude , packet1.altitude , packet1.radius );
    mavlink_msg_cfov_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_waypoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.latitude , packet1.longitude , packet1.altitude , packet1.radius );
    mavlink_msg_cfov_waypoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cfov_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cfov_waypoint_send(MAVLINK_COMM_1 , packet1.latitude , packet1.longitude , packet1.altitude , packet1.radius );
    mavlink_msg_cfov_waypoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_altavian(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_target_waypoint(system_id, component_id, last_msg);
    mavlink_test_mission_data_waypoint(system_id, component_id, last_msg);
    mavlink_test_gps_key_state(system_id, component_id, last_msg);
    mavlink_test_av_component_information(system_id, component_id, last_msg);
    mavlink_test_av_component_version_information(system_id, component_id, last_msg);
    mavlink_test_av_uplink_control(system_id, component_id, last_msg);
    mavlink_test_beacon_status(system_id, component_id, last_msg);
    mavlink_test_beacon_control(system_id, component_id, last_msg);
    mavlink_test_motor_status(system_id, component_id, last_msg);
    mavlink_test_av_battery_status(system_id, component_id, last_msg);
    mavlink_test_gps_extended_info(system_id, component_id, last_msg);
    mavlink_test_downlink_data_low_rate(system_id, component_id, last_msg);
    mavlink_test_downlink_data_high_rate(system_id, component_id, last_msg);
    mavlink_test_autopilot_time_sync_init(system_id, component_id, last_msg);
    mavlink_test_autopilot_time_sync_set(system_id, component_id, last_msg);
    mavlink_test_av_payload_status(system_id, component_id, last_msg);
    mavlink_test_av_payload_pan_and_tilt(system_id, component_id, last_msg);
    mavlink_test_av_payload_control(system_id, component_id, last_msg);
    mavlink_test_av_payload_high_rate_control(system_id, component_id, last_msg);
    mavlink_test_av_payload_klv_stream(system_id, component_id, last_msg);
    mavlink_test_av_payload_video_compressor_bit_rate(system_id, component_id, last_msg);
    mavlink_test_av_payload_interface_dumb(system_id, component_id, last_msg);
    mavlink_test_gps_command(system_id, component_id, last_msg);
    mavlink_test_av_payload_high_rate_av_commanded_data(system_id, component_id, last_msg);
    mavlink_test_image_capture_command(system_id, component_id, last_msg);
    mavlink_test_image_capture_information(system_id, component_id, last_msg);
    mavlink_test_tracker_information(system_id, component_id, last_msg);
    mavlink_test_payload_high(system_id, component_id, last_msg);
    mavlink_test_payload_low(system_id, component_id, last_msg);
    mavlink_test_payload_ack(system_id, component_id, last_msg);
    mavlink_test_file_system_manager_node_status(system_id, component_id, last_msg);
    mavlink_test_file_system_manager_node_status_request(system_id, component_id, last_msg);
    mavlink_test_file_system_status(system_id, component_id, last_msg);
    mavlink_test_set_file_system_bandwidth(system_id, component_id, last_msg);
    mavlink_test_file_information(system_id, component_id, last_msg);
    mavlink_test_file_information_request(system_id, component_id, last_msg);
    mavlink_test_cancel_file_block_downlink(system_id, component_id, last_msg);
    mavlink_test_downlink_file_blocks_command(system_id, component_id, last_msg);
    mavlink_test_delete_file(system_id, component_id, last_msg);
    mavlink_test_feed_forward_turn_rates(system_id, component_id, last_msg);
    mavlink_test_feed_forward_joystick_positions(system_id, component_id, last_msg);
    mavlink_test_set_bandwidth_limit(system_id, component_id, last_msg);
    mavlink_test_set_bandwidth_limit_ack(system_id, component_id, last_msg);
    mavlink_test_cfov(system_id, component_id, last_msg);
    mavlink_test_cfov_waypoint(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ALTAVIAN_TESTSUITE_H
