#pragma once
// MESSAGE MISSION_DATA_WAYPOINT PACKING

#define MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT 9

MAVPACKED(
typedef struct __mavlink_mission_data_waypoint_t {
 int32_t origin_lat; /*< Origin Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t origin_long; /*< Origin Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t home_lat; /*< Home Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t home_long; /*< Home Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t a_waypnt_lat; /*< 'A' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t a_waypnt_long; /*< 'A' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t b_waypnt_lat; /*< 'B' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t b_waypnt_long; /*< 'B' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t c_waypnt_lat; /*< 'C' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t c_waypnt_long; /*< 'C' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t d_waypnt_lat; /*< 'D' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t d_waypnt_long; /*< 'D' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t e_waypnt_lat; /*< 'E' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t e_waypnt_long; /*< 'E' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t land_lat; /*< Land Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t land_long; /*< Land Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t o1_waypnt_lat; /*< ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t o1_waypnt_long; /*< ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t o2_waypnt_lat; /*< ORBIT 2 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t o2_waypnt_long; /*< ORBIT 2 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t o3_waypnt_lat; /*< ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t o3_waypnt_long; /*< ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int32_t loiter_lat; /*< Loiter Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t loiter_long; /*< Loiter Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int16_t origin_alt; /*< Origin Altitude in meters*/
 int16_t origin_DTED; /*< Origin DTED in meters*/
 int16_t rally_alt; /*< Rally altitude in meters*/
 uint16_t flight_time; /*< Flight Cycle time in seconds*/
 int16_t safe_alt; /*< Safe altitude in meters*/
 uint16_t safe_offset; /*< Safe altitude offset in meters*/
 int16_t home_alt; /*< Home Altitude in meters*/
 int16_t home_DTED; /*< Home DTED in meters*/
 int16_t a_waypnt_alt; /*< 'A' waypoint Altitude in meters*/
 int16_t a_waypnt_DTED; /*< 'A' waypoint DTED in meters*/
 int16_t b_waypnt_alt; /*< 'B' waypoint Altitude in meters*/
 int16_t b_waypnt_DTED; /*< 'B' waypoint DTED in meters*/
 int16_t c_waypnt_alt; /*< 'C' waypoint Altitude in meters*/
 int16_t c_waypnt_DTED; /*< 'C' waypoint DTED in meters*/
 int16_t d_waypnt_alt; /*< 'D' waypoint Altitude in meters*/
 int16_t d_waypnt_DTED; /*< 'D' waypoint DTED in meters*/
 int16_t e_waypnt_alt; /*< 'E' waypoint Altitude in meters*/
 int16_t e_waypnt_DTED; /*< 'E' waypoint DTED in meters*/
 int16_t land_alt; /*< Land Altitude in meters*/
 int16_t land_DTED; /*< Land DTED in meters*/
 int16_t o1_waypnt_alt; /*< ORBIT 3 waypoint Altitude in meters*/
 int16_t o1_waypnt_DTED; /*< ORBIT 3 waypoint DTED in meters*/
 int16_t o2_waypnt_alt; /*< ORBIT 2 waypoint Altitude in meters*/
 int16_t o2_waypnt_DTED; /*< ORBIT 2 waypoint DTED in meters*/
 int16_t o3_waypnt_alt; /*< ORBIT 3 waypoint Altitude in meters*/
 int16_t o3_waypnt_DTED; /*< ORBIT 3 waypoint DTED in meters*/
 int16_t loiter_alt; /*< Loiter Altitude in meters*/
 int16_t loiter_DTED; /*< Loiter DTED in meters*/
 uint16_t loiter_radius; /*< Loiter Radius of the waypoint in meters*/
 uint8_t index; /*< Target waypoint mission index*/
 uint8_t rally_mode; /*< Rally Mode*/
}) mavlink_mission_data_waypoint_t;

#define MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN 156
#define MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN 156
#define MAVLINK_MSG_ID_9_LEN 156
#define MAVLINK_MSG_ID_9_MIN_LEN 156

#define MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC 34
#define MAVLINK_MSG_ID_9_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MISSION_DATA_WAYPOINT { \
    9, \
    "MISSION_DATA_WAYPOINT", \
    55, \
    {  { "origin_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_mission_data_waypoint_t, origin_lat) }, \
         { "origin_long", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_mission_data_waypoint_t, origin_long) }, \
         { "home_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_mission_data_waypoint_t, home_lat) }, \
         { "home_long", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_mission_data_waypoint_t, home_long) }, \
         { "a_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_lat) }, \
         { "a_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_long) }, \
         { "b_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_lat) }, \
         { "b_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_long) }, \
         { "c_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_lat) }, \
         { "c_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_long) }, \
         { "d_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_lat) }, \
         { "d_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_long) }, \
         { "e_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_lat) }, \
         { "e_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_long) }, \
         { "land_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_mission_data_waypoint_t, land_lat) }, \
         { "land_long", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_mission_data_waypoint_t, land_long) }, \
         { "o1_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_lat) }, \
         { "o1_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 68, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_long) }, \
         { "o2_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_lat) }, \
         { "o2_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_long) }, \
         { "o3_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 80, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_lat) }, \
         { "o3_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 84, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_long) }, \
         { "loiter_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 88, offsetof(mavlink_mission_data_waypoint_t, loiter_lat) }, \
         { "loiter_long", NULL, MAVLINK_TYPE_INT32_T, 0, 92, offsetof(mavlink_mission_data_waypoint_t, loiter_long) }, \
         { "origin_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_mission_data_waypoint_t, origin_alt) }, \
         { "origin_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 98, offsetof(mavlink_mission_data_waypoint_t, origin_DTED) }, \
         { "rally_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 100, offsetof(mavlink_mission_data_waypoint_t, rally_alt) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 102, offsetof(mavlink_mission_data_waypoint_t, flight_time) }, \
         { "safe_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 104, offsetof(mavlink_mission_data_waypoint_t, safe_alt) }, \
         { "safe_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 106, offsetof(mavlink_mission_data_waypoint_t, safe_offset) }, \
         { "home_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 108, offsetof(mavlink_mission_data_waypoint_t, home_alt) }, \
         { "home_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 110, offsetof(mavlink_mission_data_waypoint_t, home_DTED) }, \
         { "a_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 112, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_alt) }, \
         { "a_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 114, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_DTED) }, \
         { "b_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 116, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_alt) }, \
         { "b_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 118, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_DTED) }, \
         { "c_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 120, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_alt) }, \
         { "c_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 122, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_DTED) }, \
         { "d_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 124, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_alt) }, \
         { "d_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 126, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_DTED) }, \
         { "e_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 128, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_alt) }, \
         { "e_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 130, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_DTED) }, \
         { "land_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 132, offsetof(mavlink_mission_data_waypoint_t, land_alt) }, \
         { "land_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 134, offsetof(mavlink_mission_data_waypoint_t, land_DTED) }, \
         { "o1_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 136, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_alt) }, \
         { "o1_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 138, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_DTED) }, \
         { "o2_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 140, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_alt) }, \
         { "o2_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 142, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_DTED) }, \
         { "o3_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 144, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_alt) }, \
         { "o3_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 146, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_DTED) }, \
         { "loiter_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 148, offsetof(mavlink_mission_data_waypoint_t, loiter_alt) }, \
         { "loiter_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 150, offsetof(mavlink_mission_data_waypoint_t, loiter_DTED) }, \
         { "loiter_radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 152, offsetof(mavlink_mission_data_waypoint_t, loiter_radius) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 154, offsetof(mavlink_mission_data_waypoint_t, index) }, \
         { "rally_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 155, offsetof(mavlink_mission_data_waypoint_t, rally_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MISSION_DATA_WAYPOINT { \
    "MISSION_DATA_WAYPOINT", \
    55, \
    {  { "origin_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_mission_data_waypoint_t, origin_lat) }, \
         { "origin_long", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_mission_data_waypoint_t, origin_long) }, \
         { "home_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_mission_data_waypoint_t, home_lat) }, \
         { "home_long", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_mission_data_waypoint_t, home_long) }, \
         { "a_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_lat) }, \
         { "a_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_long) }, \
         { "b_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_lat) }, \
         { "b_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_long) }, \
         { "c_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_lat) }, \
         { "c_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_long) }, \
         { "d_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_lat) }, \
         { "d_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_long) }, \
         { "e_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_lat) }, \
         { "e_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_long) }, \
         { "land_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_mission_data_waypoint_t, land_lat) }, \
         { "land_long", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_mission_data_waypoint_t, land_long) }, \
         { "o1_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_lat) }, \
         { "o1_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 68, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_long) }, \
         { "o2_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_lat) }, \
         { "o2_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_long) }, \
         { "o3_waypnt_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 80, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_lat) }, \
         { "o3_waypnt_long", NULL, MAVLINK_TYPE_INT32_T, 0, 84, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_long) }, \
         { "loiter_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 88, offsetof(mavlink_mission_data_waypoint_t, loiter_lat) }, \
         { "loiter_long", NULL, MAVLINK_TYPE_INT32_T, 0, 92, offsetof(mavlink_mission_data_waypoint_t, loiter_long) }, \
         { "origin_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_mission_data_waypoint_t, origin_alt) }, \
         { "origin_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 98, offsetof(mavlink_mission_data_waypoint_t, origin_DTED) }, \
         { "rally_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 100, offsetof(mavlink_mission_data_waypoint_t, rally_alt) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 102, offsetof(mavlink_mission_data_waypoint_t, flight_time) }, \
         { "safe_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 104, offsetof(mavlink_mission_data_waypoint_t, safe_alt) }, \
         { "safe_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 106, offsetof(mavlink_mission_data_waypoint_t, safe_offset) }, \
         { "home_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 108, offsetof(mavlink_mission_data_waypoint_t, home_alt) }, \
         { "home_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 110, offsetof(mavlink_mission_data_waypoint_t, home_DTED) }, \
         { "a_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 112, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_alt) }, \
         { "a_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 114, offsetof(mavlink_mission_data_waypoint_t, a_waypnt_DTED) }, \
         { "b_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 116, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_alt) }, \
         { "b_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 118, offsetof(mavlink_mission_data_waypoint_t, b_waypnt_DTED) }, \
         { "c_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 120, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_alt) }, \
         { "c_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 122, offsetof(mavlink_mission_data_waypoint_t, c_waypnt_DTED) }, \
         { "d_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 124, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_alt) }, \
         { "d_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 126, offsetof(mavlink_mission_data_waypoint_t, d_waypnt_DTED) }, \
         { "e_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 128, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_alt) }, \
         { "e_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 130, offsetof(mavlink_mission_data_waypoint_t, e_waypnt_DTED) }, \
         { "land_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 132, offsetof(mavlink_mission_data_waypoint_t, land_alt) }, \
         { "land_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 134, offsetof(mavlink_mission_data_waypoint_t, land_DTED) }, \
         { "o1_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 136, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_alt) }, \
         { "o1_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 138, offsetof(mavlink_mission_data_waypoint_t, o1_waypnt_DTED) }, \
         { "o2_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 140, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_alt) }, \
         { "o2_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 142, offsetof(mavlink_mission_data_waypoint_t, o2_waypnt_DTED) }, \
         { "o3_waypnt_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 144, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_alt) }, \
         { "o3_waypnt_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 146, offsetof(mavlink_mission_data_waypoint_t, o3_waypnt_DTED) }, \
         { "loiter_alt", NULL, MAVLINK_TYPE_INT16_T, 0, 148, offsetof(mavlink_mission_data_waypoint_t, loiter_alt) }, \
         { "loiter_DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 150, offsetof(mavlink_mission_data_waypoint_t, loiter_DTED) }, \
         { "loiter_radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 152, offsetof(mavlink_mission_data_waypoint_t, loiter_radius) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 154, offsetof(mavlink_mission_data_waypoint_t, index) }, \
         { "rally_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 155, offsetof(mavlink_mission_data_waypoint_t, rally_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a mission_data_waypoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index Target waypoint mission index
 * @param origin_lat Origin Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param origin_long Origin Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param origin_alt Origin Altitude in meters
 * @param origin_DTED Origin DTED in meters
 * @param rally_mode Rally Mode
 * @param rally_alt Rally altitude in meters
 * @param flight_time Flight Cycle time in seconds
 * @param safe_alt Safe altitude in meters
 * @param safe_offset Safe altitude offset in meters
 * @param home_lat Home Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param home_long Home Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param home_alt Home Altitude in meters
 * @param home_DTED Home DTED in meters
 * @param a_waypnt_lat 'A' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param a_waypnt_long 'A' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param a_waypnt_alt 'A' waypoint Altitude in meters
 * @param a_waypnt_DTED 'A' waypoint DTED in meters
 * @param b_waypnt_lat 'B' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param b_waypnt_long 'B' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param b_waypnt_alt 'B' waypoint Altitude in meters
 * @param b_waypnt_DTED 'B' waypoint DTED in meters
 * @param c_waypnt_lat 'C' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param c_waypnt_long 'C' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param c_waypnt_alt 'C' waypoint Altitude in meters
 * @param c_waypnt_DTED 'C' waypoint DTED in meters
 * @param d_waypnt_lat 'D' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param d_waypnt_long 'D' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param d_waypnt_alt 'D' waypoint Altitude in meters
 * @param d_waypnt_DTED 'D' waypoint DTED in meters
 * @param e_waypnt_lat 'E' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param e_waypnt_long 'E' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param e_waypnt_alt 'E' waypoint Altitude in meters
 * @param e_waypnt_DTED 'E' waypoint DTED in meters
 * @param land_lat Land Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param land_long Land Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param land_alt Land Altitude in meters
 * @param land_DTED Land DTED in meters
 * @param o1_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o1_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o1_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o1_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param o2_waypnt_lat ORBIT 2 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o2_waypnt_long ORBIT 2 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o2_waypnt_alt ORBIT 2 waypoint Altitude in meters
 * @param o2_waypnt_DTED ORBIT 2 waypoint DTED in meters
 * @param o3_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o3_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o3_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o3_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param loiter_lat Loiter Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param loiter_long Loiter Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param loiter_alt Loiter Altitude in meters
 * @param loiter_DTED Loiter DTED in meters
 * @param loiter_radius Loiter Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, int32_t origin_lat, int32_t origin_long, int16_t origin_alt, int16_t origin_DTED, uint8_t rally_mode, int16_t rally_alt, uint16_t flight_time, int16_t safe_alt, uint16_t safe_offset, int32_t home_lat, int32_t home_long, int16_t home_alt, int16_t home_DTED, int32_t a_waypnt_lat, int32_t a_waypnt_long, int16_t a_waypnt_alt, int16_t a_waypnt_DTED, int32_t b_waypnt_lat, int32_t b_waypnt_long, int16_t b_waypnt_alt, int16_t b_waypnt_DTED, int32_t c_waypnt_lat, int32_t c_waypnt_long, int16_t c_waypnt_alt, int16_t c_waypnt_DTED, int32_t d_waypnt_lat, int32_t d_waypnt_long, int16_t d_waypnt_alt, int16_t d_waypnt_DTED, int32_t e_waypnt_lat, int32_t e_waypnt_long, int16_t e_waypnt_alt, int16_t e_waypnt_DTED, int32_t land_lat, int32_t land_long, int16_t land_alt, int16_t land_DTED, int32_t o1_waypnt_lat, int32_t o1_waypnt_long, int16_t o1_waypnt_alt, int16_t o1_waypnt_DTED, int32_t o2_waypnt_lat, int32_t o2_waypnt_long, int16_t o2_waypnt_alt, int16_t o2_waypnt_DTED, int32_t o3_waypnt_lat, int32_t o3_waypnt_long, int16_t o3_waypnt_alt, int16_t o3_waypnt_DTED, int32_t loiter_lat, int32_t loiter_long, int16_t loiter_alt, int16_t loiter_DTED, uint16_t loiter_radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, origin_lat);
    _mav_put_int32_t(buf, 4, origin_long);
    _mav_put_int32_t(buf, 8, home_lat);
    _mav_put_int32_t(buf, 12, home_long);
    _mav_put_int32_t(buf, 16, a_waypnt_lat);
    _mav_put_int32_t(buf, 20, a_waypnt_long);
    _mav_put_int32_t(buf, 24, b_waypnt_lat);
    _mav_put_int32_t(buf, 28, b_waypnt_long);
    _mav_put_int32_t(buf, 32, c_waypnt_lat);
    _mav_put_int32_t(buf, 36, c_waypnt_long);
    _mav_put_int32_t(buf, 40, d_waypnt_lat);
    _mav_put_int32_t(buf, 44, d_waypnt_long);
    _mav_put_int32_t(buf, 48, e_waypnt_lat);
    _mav_put_int32_t(buf, 52, e_waypnt_long);
    _mav_put_int32_t(buf, 56, land_lat);
    _mav_put_int32_t(buf, 60, land_long);
    _mav_put_int32_t(buf, 64, o1_waypnt_lat);
    _mav_put_int32_t(buf, 68, o1_waypnt_long);
    _mav_put_int32_t(buf, 72, o2_waypnt_lat);
    _mav_put_int32_t(buf, 76, o2_waypnt_long);
    _mav_put_int32_t(buf, 80, o3_waypnt_lat);
    _mav_put_int32_t(buf, 84, o3_waypnt_long);
    _mav_put_int32_t(buf, 88, loiter_lat);
    _mav_put_int32_t(buf, 92, loiter_long);
    _mav_put_int16_t(buf, 96, origin_alt);
    _mav_put_int16_t(buf, 98, origin_DTED);
    _mav_put_int16_t(buf, 100, rally_alt);
    _mav_put_uint16_t(buf, 102, flight_time);
    _mav_put_int16_t(buf, 104, safe_alt);
    _mav_put_uint16_t(buf, 106, safe_offset);
    _mav_put_int16_t(buf, 108, home_alt);
    _mav_put_int16_t(buf, 110, home_DTED);
    _mav_put_int16_t(buf, 112, a_waypnt_alt);
    _mav_put_int16_t(buf, 114, a_waypnt_DTED);
    _mav_put_int16_t(buf, 116, b_waypnt_alt);
    _mav_put_int16_t(buf, 118, b_waypnt_DTED);
    _mav_put_int16_t(buf, 120, c_waypnt_alt);
    _mav_put_int16_t(buf, 122, c_waypnt_DTED);
    _mav_put_int16_t(buf, 124, d_waypnt_alt);
    _mav_put_int16_t(buf, 126, d_waypnt_DTED);
    _mav_put_int16_t(buf, 128, e_waypnt_alt);
    _mav_put_int16_t(buf, 130, e_waypnt_DTED);
    _mav_put_int16_t(buf, 132, land_alt);
    _mav_put_int16_t(buf, 134, land_DTED);
    _mav_put_int16_t(buf, 136, o1_waypnt_alt);
    _mav_put_int16_t(buf, 138, o1_waypnt_DTED);
    _mav_put_int16_t(buf, 140, o2_waypnt_alt);
    _mav_put_int16_t(buf, 142, o2_waypnt_DTED);
    _mav_put_int16_t(buf, 144, o3_waypnt_alt);
    _mav_put_int16_t(buf, 146, o3_waypnt_DTED);
    _mav_put_int16_t(buf, 148, loiter_alt);
    _mav_put_int16_t(buf, 150, loiter_DTED);
    _mav_put_uint16_t(buf, 152, loiter_radius);
    _mav_put_uint8_t(buf, 154, index);
    _mav_put_uint8_t(buf, 155, rally_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN);
#else
    mavlink_mission_data_waypoint_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_long = origin_long;
    packet.home_lat = home_lat;
    packet.home_long = home_long;
    packet.a_waypnt_lat = a_waypnt_lat;
    packet.a_waypnt_long = a_waypnt_long;
    packet.b_waypnt_lat = b_waypnt_lat;
    packet.b_waypnt_long = b_waypnt_long;
    packet.c_waypnt_lat = c_waypnt_lat;
    packet.c_waypnt_long = c_waypnt_long;
    packet.d_waypnt_lat = d_waypnt_lat;
    packet.d_waypnt_long = d_waypnt_long;
    packet.e_waypnt_lat = e_waypnt_lat;
    packet.e_waypnt_long = e_waypnt_long;
    packet.land_lat = land_lat;
    packet.land_long = land_long;
    packet.o1_waypnt_lat = o1_waypnt_lat;
    packet.o1_waypnt_long = o1_waypnt_long;
    packet.o2_waypnt_lat = o2_waypnt_lat;
    packet.o2_waypnt_long = o2_waypnt_long;
    packet.o3_waypnt_lat = o3_waypnt_lat;
    packet.o3_waypnt_long = o3_waypnt_long;
    packet.loiter_lat = loiter_lat;
    packet.loiter_long = loiter_long;
    packet.origin_alt = origin_alt;
    packet.origin_DTED = origin_DTED;
    packet.rally_alt = rally_alt;
    packet.flight_time = flight_time;
    packet.safe_alt = safe_alt;
    packet.safe_offset = safe_offset;
    packet.home_alt = home_alt;
    packet.home_DTED = home_DTED;
    packet.a_waypnt_alt = a_waypnt_alt;
    packet.a_waypnt_DTED = a_waypnt_DTED;
    packet.b_waypnt_alt = b_waypnt_alt;
    packet.b_waypnt_DTED = b_waypnt_DTED;
    packet.c_waypnt_alt = c_waypnt_alt;
    packet.c_waypnt_DTED = c_waypnt_DTED;
    packet.d_waypnt_alt = d_waypnt_alt;
    packet.d_waypnt_DTED = d_waypnt_DTED;
    packet.e_waypnt_alt = e_waypnt_alt;
    packet.e_waypnt_DTED = e_waypnt_DTED;
    packet.land_alt = land_alt;
    packet.land_DTED = land_DTED;
    packet.o1_waypnt_alt = o1_waypnt_alt;
    packet.o1_waypnt_DTED = o1_waypnt_DTED;
    packet.o2_waypnt_alt = o2_waypnt_alt;
    packet.o2_waypnt_DTED = o2_waypnt_DTED;
    packet.o3_waypnt_alt = o3_waypnt_alt;
    packet.o3_waypnt_DTED = o3_waypnt_DTED;
    packet.loiter_alt = loiter_alt;
    packet.loiter_DTED = loiter_DTED;
    packet.loiter_radius = loiter_radius;
    packet.index = index;
    packet.rally_mode = rally_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
}

/**
 * @brief Pack a mission_data_waypoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index Target waypoint mission index
 * @param origin_lat Origin Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param origin_long Origin Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param origin_alt Origin Altitude in meters
 * @param origin_DTED Origin DTED in meters
 * @param rally_mode Rally Mode
 * @param rally_alt Rally altitude in meters
 * @param flight_time Flight Cycle time in seconds
 * @param safe_alt Safe altitude in meters
 * @param safe_offset Safe altitude offset in meters
 * @param home_lat Home Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param home_long Home Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param home_alt Home Altitude in meters
 * @param home_DTED Home DTED in meters
 * @param a_waypnt_lat 'A' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param a_waypnt_long 'A' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param a_waypnt_alt 'A' waypoint Altitude in meters
 * @param a_waypnt_DTED 'A' waypoint DTED in meters
 * @param b_waypnt_lat 'B' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param b_waypnt_long 'B' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param b_waypnt_alt 'B' waypoint Altitude in meters
 * @param b_waypnt_DTED 'B' waypoint DTED in meters
 * @param c_waypnt_lat 'C' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param c_waypnt_long 'C' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param c_waypnt_alt 'C' waypoint Altitude in meters
 * @param c_waypnt_DTED 'C' waypoint DTED in meters
 * @param d_waypnt_lat 'D' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param d_waypnt_long 'D' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param d_waypnt_alt 'D' waypoint Altitude in meters
 * @param d_waypnt_DTED 'D' waypoint DTED in meters
 * @param e_waypnt_lat 'E' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param e_waypnt_long 'E' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param e_waypnt_alt 'E' waypoint Altitude in meters
 * @param e_waypnt_DTED 'E' waypoint DTED in meters
 * @param land_lat Land Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param land_long Land Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param land_alt Land Altitude in meters
 * @param land_DTED Land DTED in meters
 * @param o1_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o1_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o1_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o1_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param o2_waypnt_lat ORBIT 2 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o2_waypnt_long ORBIT 2 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o2_waypnt_alt ORBIT 2 waypoint Altitude in meters
 * @param o2_waypnt_DTED ORBIT 2 waypoint DTED in meters
 * @param o3_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o3_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o3_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o3_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param loiter_lat Loiter Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param loiter_long Loiter Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param loiter_alt Loiter Altitude in meters
 * @param loiter_DTED Loiter DTED in meters
 * @param loiter_radius Loiter Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,int32_t origin_lat,int32_t origin_long,int16_t origin_alt,int16_t origin_DTED,uint8_t rally_mode,int16_t rally_alt,uint16_t flight_time,int16_t safe_alt,uint16_t safe_offset,int32_t home_lat,int32_t home_long,int16_t home_alt,int16_t home_DTED,int32_t a_waypnt_lat,int32_t a_waypnt_long,int16_t a_waypnt_alt,int16_t a_waypnt_DTED,int32_t b_waypnt_lat,int32_t b_waypnt_long,int16_t b_waypnt_alt,int16_t b_waypnt_DTED,int32_t c_waypnt_lat,int32_t c_waypnt_long,int16_t c_waypnt_alt,int16_t c_waypnt_DTED,int32_t d_waypnt_lat,int32_t d_waypnt_long,int16_t d_waypnt_alt,int16_t d_waypnt_DTED,int32_t e_waypnt_lat,int32_t e_waypnt_long,int16_t e_waypnt_alt,int16_t e_waypnt_DTED,int32_t land_lat,int32_t land_long,int16_t land_alt,int16_t land_DTED,int32_t o1_waypnt_lat,int32_t o1_waypnt_long,int16_t o1_waypnt_alt,int16_t o1_waypnt_DTED,int32_t o2_waypnt_lat,int32_t o2_waypnt_long,int16_t o2_waypnt_alt,int16_t o2_waypnt_DTED,int32_t o3_waypnt_lat,int32_t o3_waypnt_long,int16_t o3_waypnt_alt,int16_t o3_waypnt_DTED,int32_t loiter_lat,int32_t loiter_long,int16_t loiter_alt,int16_t loiter_DTED,uint16_t loiter_radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, origin_lat);
    _mav_put_int32_t(buf, 4, origin_long);
    _mav_put_int32_t(buf, 8, home_lat);
    _mav_put_int32_t(buf, 12, home_long);
    _mav_put_int32_t(buf, 16, a_waypnt_lat);
    _mav_put_int32_t(buf, 20, a_waypnt_long);
    _mav_put_int32_t(buf, 24, b_waypnt_lat);
    _mav_put_int32_t(buf, 28, b_waypnt_long);
    _mav_put_int32_t(buf, 32, c_waypnt_lat);
    _mav_put_int32_t(buf, 36, c_waypnt_long);
    _mav_put_int32_t(buf, 40, d_waypnt_lat);
    _mav_put_int32_t(buf, 44, d_waypnt_long);
    _mav_put_int32_t(buf, 48, e_waypnt_lat);
    _mav_put_int32_t(buf, 52, e_waypnt_long);
    _mav_put_int32_t(buf, 56, land_lat);
    _mav_put_int32_t(buf, 60, land_long);
    _mav_put_int32_t(buf, 64, o1_waypnt_lat);
    _mav_put_int32_t(buf, 68, o1_waypnt_long);
    _mav_put_int32_t(buf, 72, o2_waypnt_lat);
    _mav_put_int32_t(buf, 76, o2_waypnt_long);
    _mav_put_int32_t(buf, 80, o3_waypnt_lat);
    _mav_put_int32_t(buf, 84, o3_waypnt_long);
    _mav_put_int32_t(buf, 88, loiter_lat);
    _mav_put_int32_t(buf, 92, loiter_long);
    _mav_put_int16_t(buf, 96, origin_alt);
    _mav_put_int16_t(buf, 98, origin_DTED);
    _mav_put_int16_t(buf, 100, rally_alt);
    _mav_put_uint16_t(buf, 102, flight_time);
    _mav_put_int16_t(buf, 104, safe_alt);
    _mav_put_uint16_t(buf, 106, safe_offset);
    _mav_put_int16_t(buf, 108, home_alt);
    _mav_put_int16_t(buf, 110, home_DTED);
    _mav_put_int16_t(buf, 112, a_waypnt_alt);
    _mav_put_int16_t(buf, 114, a_waypnt_DTED);
    _mav_put_int16_t(buf, 116, b_waypnt_alt);
    _mav_put_int16_t(buf, 118, b_waypnt_DTED);
    _mav_put_int16_t(buf, 120, c_waypnt_alt);
    _mav_put_int16_t(buf, 122, c_waypnt_DTED);
    _mav_put_int16_t(buf, 124, d_waypnt_alt);
    _mav_put_int16_t(buf, 126, d_waypnt_DTED);
    _mav_put_int16_t(buf, 128, e_waypnt_alt);
    _mav_put_int16_t(buf, 130, e_waypnt_DTED);
    _mav_put_int16_t(buf, 132, land_alt);
    _mav_put_int16_t(buf, 134, land_DTED);
    _mav_put_int16_t(buf, 136, o1_waypnt_alt);
    _mav_put_int16_t(buf, 138, o1_waypnt_DTED);
    _mav_put_int16_t(buf, 140, o2_waypnt_alt);
    _mav_put_int16_t(buf, 142, o2_waypnt_DTED);
    _mav_put_int16_t(buf, 144, o3_waypnt_alt);
    _mav_put_int16_t(buf, 146, o3_waypnt_DTED);
    _mav_put_int16_t(buf, 148, loiter_alt);
    _mav_put_int16_t(buf, 150, loiter_DTED);
    _mav_put_uint16_t(buf, 152, loiter_radius);
    _mav_put_uint8_t(buf, 154, index);
    _mav_put_uint8_t(buf, 155, rally_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN);
#else
    mavlink_mission_data_waypoint_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_long = origin_long;
    packet.home_lat = home_lat;
    packet.home_long = home_long;
    packet.a_waypnt_lat = a_waypnt_lat;
    packet.a_waypnt_long = a_waypnt_long;
    packet.b_waypnt_lat = b_waypnt_lat;
    packet.b_waypnt_long = b_waypnt_long;
    packet.c_waypnt_lat = c_waypnt_lat;
    packet.c_waypnt_long = c_waypnt_long;
    packet.d_waypnt_lat = d_waypnt_lat;
    packet.d_waypnt_long = d_waypnt_long;
    packet.e_waypnt_lat = e_waypnt_lat;
    packet.e_waypnt_long = e_waypnt_long;
    packet.land_lat = land_lat;
    packet.land_long = land_long;
    packet.o1_waypnt_lat = o1_waypnt_lat;
    packet.o1_waypnt_long = o1_waypnt_long;
    packet.o2_waypnt_lat = o2_waypnt_lat;
    packet.o2_waypnt_long = o2_waypnt_long;
    packet.o3_waypnt_lat = o3_waypnt_lat;
    packet.o3_waypnt_long = o3_waypnt_long;
    packet.loiter_lat = loiter_lat;
    packet.loiter_long = loiter_long;
    packet.origin_alt = origin_alt;
    packet.origin_DTED = origin_DTED;
    packet.rally_alt = rally_alt;
    packet.flight_time = flight_time;
    packet.safe_alt = safe_alt;
    packet.safe_offset = safe_offset;
    packet.home_alt = home_alt;
    packet.home_DTED = home_DTED;
    packet.a_waypnt_alt = a_waypnt_alt;
    packet.a_waypnt_DTED = a_waypnt_DTED;
    packet.b_waypnt_alt = b_waypnt_alt;
    packet.b_waypnt_DTED = b_waypnt_DTED;
    packet.c_waypnt_alt = c_waypnt_alt;
    packet.c_waypnt_DTED = c_waypnt_DTED;
    packet.d_waypnt_alt = d_waypnt_alt;
    packet.d_waypnt_DTED = d_waypnt_DTED;
    packet.e_waypnt_alt = e_waypnt_alt;
    packet.e_waypnt_DTED = e_waypnt_DTED;
    packet.land_alt = land_alt;
    packet.land_DTED = land_DTED;
    packet.o1_waypnt_alt = o1_waypnt_alt;
    packet.o1_waypnt_DTED = o1_waypnt_DTED;
    packet.o2_waypnt_alt = o2_waypnt_alt;
    packet.o2_waypnt_DTED = o2_waypnt_DTED;
    packet.o3_waypnt_alt = o3_waypnt_alt;
    packet.o3_waypnt_DTED = o3_waypnt_DTED;
    packet.loiter_alt = loiter_alt;
    packet.loiter_DTED = loiter_DTED;
    packet.loiter_radius = loiter_radius;
    packet.index = index;
    packet.rally_mode = rally_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
}

/**
 * @brief Encode a mission_data_waypoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mission_data_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mission_data_waypoint_t* mission_data_waypoint)
{
    return mavlink_msg_mission_data_waypoint_pack(system_id, component_id, msg, mission_data_waypoint->index, mission_data_waypoint->origin_lat, mission_data_waypoint->origin_long, mission_data_waypoint->origin_alt, mission_data_waypoint->origin_DTED, mission_data_waypoint->rally_mode, mission_data_waypoint->rally_alt, mission_data_waypoint->flight_time, mission_data_waypoint->safe_alt, mission_data_waypoint->safe_offset, mission_data_waypoint->home_lat, mission_data_waypoint->home_long, mission_data_waypoint->home_alt, mission_data_waypoint->home_DTED, mission_data_waypoint->a_waypnt_lat, mission_data_waypoint->a_waypnt_long, mission_data_waypoint->a_waypnt_alt, mission_data_waypoint->a_waypnt_DTED, mission_data_waypoint->b_waypnt_lat, mission_data_waypoint->b_waypnt_long, mission_data_waypoint->b_waypnt_alt, mission_data_waypoint->b_waypnt_DTED, mission_data_waypoint->c_waypnt_lat, mission_data_waypoint->c_waypnt_long, mission_data_waypoint->c_waypnt_alt, mission_data_waypoint->c_waypnt_DTED, mission_data_waypoint->d_waypnt_lat, mission_data_waypoint->d_waypnt_long, mission_data_waypoint->d_waypnt_alt, mission_data_waypoint->d_waypnt_DTED, mission_data_waypoint->e_waypnt_lat, mission_data_waypoint->e_waypnt_long, mission_data_waypoint->e_waypnt_alt, mission_data_waypoint->e_waypnt_DTED, mission_data_waypoint->land_lat, mission_data_waypoint->land_long, mission_data_waypoint->land_alt, mission_data_waypoint->land_DTED, mission_data_waypoint->o1_waypnt_lat, mission_data_waypoint->o1_waypnt_long, mission_data_waypoint->o1_waypnt_alt, mission_data_waypoint->o1_waypnt_DTED, mission_data_waypoint->o2_waypnt_lat, mission_data_waypoint->o2_waypnt_long, mission_data_waypoint->o2_waypnt_alt, mission_data_waypoint->o2_waypnt_DTED, mission_data_waypoint->o3_waypnt_lat, mission_data_waypoint->o3_waypnt_long, mission_data_waypoint->o3_waypnt_alt, mission_data_waypoint->o3_waypnt_DTED, mission_data_waypoint->loiter_lat, mission_data_waypoint->loiter_long, mission_data_waypoint->loiter_alt, mission_data_waypoint->loiter_DTED, mission_data_waypoint->loiter_radius);
}

/**
 * @brief Encode a mission_data_waypoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_data_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mission_data_waypoint_t* mission_data_waypoint)
{
    return mavlink_msg_mission_data_waypoint_pack_chan(system_id, component_id, chan, msg, mission_data_waypoint->index, mission_data_waypoint->origin_lat, mission_data_waypoint->origin_long, mission_data_waypoint->origin_alt, mission_data_waypoint->origin_DTED, mission_data_waypoint->rally_mode, mission_data_waypoint->rally_alt, mission_data_waypoint->flight_time, mission_data_waypoint->safe_alt, mission_data_waypoint->safe_offset, mission_data_waypoint->home_lat, mission_data_waypoint->home_long, mission_data_waypoint->home_alt, mission_data_waypoint->home_DTED, mission_data_waypoint->a_waypnt_lat, mission_data_waypoint->a_waypnt_long, mission_data_waypoint->a_waypnt_alt, mission_data_waypoint->a_waypnt_DTED, mission_data_waypoint->b_waypnt_lat, mission_data_waypoint->b_waypnt_long, mission_data_waypoint->b_waypnt_alt, mission_data_waypoint->b_waypnt_DTED, mission_data_waypoint->c_waypnt_lat, mission_data_waypoint->c_waypnt_long, mission_data_waypoint->c_waypnt_alt, mission_data_waypoint->c_waypnt_DTED, mission_data_waypoint->d_waypnt_lat, mission_data_waypoint->d_waypnt_long, mission_data_waypoint->d_waypnt_alt, mission_data_waypoint->d_waypnt_DTED, mission_data_waypoint->e_waypnt_lat, mission_data_waypoint->e_waypnt_long, mission_data_waypoint->e_waypnt_alt, mission_data_waypoint->e_waypnt_DTED, mission_data_waypoint->land_lat, mission_data_waypoint->land_long, mission_data_waypoint->land_alt, mission_data_waypoint->land_DTED, mission_data_waypoint->o1_waypnt_lat, mission_data_waypoint->o1_waypnt_long, mission_data_waypoint->o1_waypnt_alt, mission_data_waypoint->o1_waypnt_DTED, mission_data_waypoint->o2_waypnt_lat, mission_data_waypoint->o2_waypnt_long, mission_data_waypoint->o2_waypnt_alt, mission_data_waypoint->o2_waypnt_DTED, mission_data_waypoint->o3_waypnt_lat, mission_data_waypoint->o3_waypnt_long, mission_data_waypoint->o3_waypnt_alt, mission_data_waypoint->o3_waypnt_DTED, mission_data_waypoint->loiter_lat, mission_data_waypoint->loiter_long, mission_data_waypoint->loiter_alt, mission_data_waypoint->loiter_DTED, mission_data_waypoint->loiter_radius);
}

/**
 * @brief Send a mission_data_waypoint message
 * @param chan MAVLink channel to send the message
 *
 * @param index Target waypoint mission index
 * @param origin_lat Origin Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param origin_long Origin Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param origin_alt Origin Altitude in meters
 * @param origin_DTED Origin DTED in meters
 * @param rally_mode Rally Mode
 * @param rally_alt Rally altitude in meters
 * @param flight_time Flight Cycle time in seconds
 * @param safe_alt Safe altitude in meters
 * @param safe_offset Safe altitude offset in meters
 * @param home_lat Home Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param home_long Home Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param home_alt Home Altitude in meters
 * @param home_DTED Home DTED in meters
 * @param a_waypnt_lat 'A' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param a_waypnt_long 'A' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param a_waypnt_alt 'A' waypoint Altitude in meters
 * @param a_waypnt_DTED 'A' waypoint DTED in meters
 * @param b_waypnt_lat 'B' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param b_waypnt_long 'B' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param b_waypnt_alt 'B' waypoint Altitude in meters
 * @param b_waypnt_DTED 'B' waypoint DTED in meters
 * @param c_waypnt_lat 'C' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param c_waypnt_long 'C' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param c_waypnt_alt 'C' waypoint Altitude in meters
 * @param c_waypnt_DTED 'C' waypoint DTED in meters
 * @param d_waypnt_lat 'D' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param d_waypnt_long 'D' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param d_waypnt_alt 'D' waypoint Altitude in meters
 * @param d_waypnt_DTED 'D' waypoint DTED in meters
 * @param e_waypnt_lat 'E' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param e_waypnt_long 'E' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param e_waypnt_alt 'E' waypoint Altitude in meters
 * @param e_waypnt_DTED 'E' waypoint DTED in meters
 * @param land_lat Land Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param land_long Land Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param land_alt Land Altitude in meters
 * @param land_DTED Land DTED in meters
 * @param o1_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o1_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o1_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o1_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param o2_waypnt_lat ORBIT 2 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o2_waypnt_long ORBIT 2 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o2_waypnt_alt ORBIT 2 waypoint Altitude in meters
 * @param o2_waypnt_DTED ORBIT 2 waypoint DTED in meters
 * @param o3_waypnt_lat ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param o3_waypnt_long ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param o3_waypnt_alt ORBIT 3 waypoint Altitude in meters
 * @param o3_waypnt_DTED ORBIT 3 waypoint DTED in meters
 * @param loiter_lat Loiter Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param loiter_long Loiter Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param loiter_alt Loiter Altitude in meters
 * @param loiter_DTED Loiter DTED in meters
 * @param loiter_radius Loiter Radius of the waypoint in meters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mission_data_waypoint_send(mavlink_channel_t chan, uint8_t index, int32_t origin_lat, int32_t origin_long, int16_t origin_alt, int16_t origin_DTED, uint8_t rally_mode, int16_t rally_alt, uint16_t flight_time, int16_t safe_alt, uint16_t safe_offset, int32_t home_lat, int32_t home_long, int16_t home_alt, int16_t home_DTED, int32_t a_waypnt_lat, int32_t a_waypnt_long, int16_t a_waypnt_alt, int16_t a_waypnt_DTED, int32_t b_waypnt_lat, int32_t b_waypnt_long, int16_t b_waypnt_alt, int16_t b_waypnt_DTED, int32_t c_waypnt_lat, int32_t c_waypnt_long, int16_t c_waypnt_alt, int16_t c_waypnt_DTED, int32_t d_waypnt_lat, int32_t d_waypnt_long, int16_t d_waypnt_alt, int16_t d_waypnt_DTED, int32_t e_waypnt_lat, int32_t e_waypnt_long, int16_t e_waypnt_alt, int16_t e_waypnt_DTED, int32_t land_lat, int32_t land_long, int16_t land_alt, int16_t land_DTED, int32_t o1_waypnt_lat, int32_t o1_waypnt_long, int16_t o1_waypnt_alt, int16_t o1_waypnt_DTED, int32_t o2_waypnt_lat, int32_t o2_waypnt_long, int16_t o2_waypnt_alt, int16_t o2_waypnt_DTED, int32_t o3_waypnt_lat, int32_t o3_waypnt_long, int16_t o3_waypnt_alt, int16_t o3_waypnt_DTED, int32_t loiter_lat, int32_t loiter_long, int16_t loiter_alt, int16_t loiter_DTED, uint16_t loiter_radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, origin_lat);
    _mav_put_int32_t(buf, 4, origin_long);
    _mav_put_int32_t(buf, 8, home_lat);
    _mav_put_int32_t(buf, 12, home_long);
    _mav_put_int32_t(buf, 16, a_waypnt_lat);
    _mav_put_int32_t(buf, 20, a_waypnt_long);
    _mav_put_int32_t(buf, 24, b_waypnt_lat);
    _mav_put_int32_t(buf, 28, b_waypnt_long);
    _mav_put_int32_t(buf, 32, c_waypnt_lat);
    _mav_put_int32_t(buf, 36, c_waypnt_long);
    _mav_put_int32_t(buf, 40, d_waypnt_lat);
    _mav_put_int32_t(buf, 44, d_waypnt_long);
    _mav_put_int32_t(buf, 48, e_waypnt_lat);
    _mav_put_int32_t(buf, 52, e_waypnt_long);
    _mav_put_int32_t(buf, 56, land_lat);
    _mav_put_int32_t(buf, 60, land_long);
    _mav_put_int32_t(buf, 64, o1_waypnt_lat);
    _mav_put_int32_t(buf, 68, o1_waypnt_long);
    _mav_put_int32_t(buf, 72, o2_waypnt_lat);
    _mav_put_int32_t(buf, 76, o2_waypnt_long);
    _mav_put_int32_t(buf, 80, o3_waypnt_lat);
    _mav_put_int32_t(buf, 84, o3_waypnt_long);
    _mav_put_int32_t(buf, 88, loiter_lat);
    _mav_put_int32_t(buf, 92, loiter_long);
    _mav_put_int16_t(buf, 96, origin_alt);
    _mav_put_int16_t(buf, 98, origin_DTED);
    _mav_put_int16_t(buf, 100, rally_alt);
    _mav_put_uint16_t(buf, 102, flight_time);
    _mav_put_int16_t(buf, 104, safe_alt);
    _mav_put_uint16_t(buf, 106, safe_offset);
    _mav_put_int16_t(buf, 108, home_alt);
    _mav_put_int16_t(buf, 110, home_DTED);
    _mav_put_int16_t(buf, 112, a_waypnt_alt);
    _mav_put_int16_t(buf, 114, a_waypnt_DTED);
    _mav_put_int16_t(buf, 116, b_waypnt_alt);
    _mav_put_int16_t(buf, 118, b_waypnt_DTED);
    _mav_put_int16_t(buf, 120, c_waypnt_alt);
    _mav_put_int16_t(buf, 122, c_waypnt_DTED);
    _mav_put_int16_t(buf, 124, d_waypnt_alt);
    _mav_put_int16_t(buf, 126, d_waypnt_DTED);
    _mav_put_int16_t(buf, 128, e_waypnt_alt);
    _mav_put_int16_t(buf, 130, e_waypnt_DTED);
    _mav_put_int16_t(buf, 132, land_alt);
    _mav_put_int16_t(buf, 134, land_DTED);
    _mav_put_int16_t(buf, 136, o1_waypnt_alt);
    _mav_put_int16_t(buf, 138, o1_waypnt_DTED);
    _mav_put_int16_t(buf, 140, o2_waypnt_alt);
    _mav_put_int16_t(buf, 142, o2_waypnt_DTED);
    _mav_put_int16_t(buf, 144, o3_waypnt_alt);
    _mav_put_int16_t(buf, 146, o3_waypnt_DTED);
    _mav_put_int16_t(buf, 148, loiter_alt);
    _mav_put_int16_t(buf, 150, loiter_DTED);
    _mav_put_uint16_t(buf, 152, loiter_radius);
    _mav_put_uint8_t(buf, 154, index);
    _mav_put_uint8_t(buf, 155, rally_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT, buf, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
#else
    mavlink_mission_data_waypoint_t packet;
    packet.origin_lat = origin_lat;
    packet.origin_long = origin_long;
    packet.home_lat = home_lat;
    packet.home_long = home_long;
    packet.a_waypnt_lat = a_waypnt_lat;
    packet.a_waypnt_long = a_waypnt_long;
    packet.b_waypnt_lat = b_waypnt_lat;
    packet.b_waypnt_long = b_waypnt_long;
    packet.c_waypnt_lat = c_waypnt_lat;
    packet.c_waypnt_long = c_waypnt_long;
    packet.d_waypnt_lat = d_waypnt_lat;
    packet.d_waypnt_long = d_waypnt_long;
    packet.e_waypnt_lat = e_waypnt_lat;
    packet.e_waypnt_long = e_waypnt_long;
    packet.land_lat = land_lat;
    packet.land_long = land_long;
    packet.o1_waypnt_lat = o1_waypnt_lat;
    packet.o1_waypnt_long = o1_waypnt_long;
    packet.o2_waypnt_lat = o2_waypnt_lat;
    packet.o2_waypnt_long = o2_waypnt_long;
    packet.o3_waypnt_lat = o3_waypnt_lat;
    packet.o3_waypnt_long = o3_waypnt_long;
    packet.loiter_lat = loiter_lat;
    packet.loiter_long = loiter_long;
    packet.origin_alt = origin_alt;
    packet.origin_DTED = origin_DTED;
    packet.rally_alt = rally_alt;
    packet.flight_time = flight_time;
    packet.safe_alt = safe_alt;
    packet.safe_offset = safe_offset;
    packet.home_alt = home_alt;
    packet.home_DTED = home_DTED;
    packet.a_waypnt_alt = a_waypnt_alt;
    packet.a_waypnt_DTED = a_waypnt_DTED;
    packet.b_waypnt_alt = b_waypnt_alt;
    packet.b_waypnt_DTED = b_waypnt_DTED;
    packet.c_waypnt_alt = c_waypnt_alt;
    packet.c_waypnt_DTED = c_waypnt_DTED;
    packet.d_waypnt_alt = d_waypnt_alt;
    packet.d_waypnt_DTED = d_waypnt_DTED;
    packet.e_waypnt_alt = e_waypnt_alt;
    packet.e_waypnt_DTED = e_waypnt_DTED;
    packet.land_alt = land_alt;
    packet.land_DTED = land_DTED;
    packet.o1_waypnt_alt = o1_waypnt_alt;
    packet.o1_waypnt_DTED = o1_waypnt_DTED;
    packet.o2_waypnt_alt = o2_waypnt_alt;
    packet.o2_waypnt_DTED = o2_waypnt_DTED;
    packet.o3_waypnt_alt = o3_waypnt_alt;
    packet.o3_waypnt_DTED = o3_waypnt_DTED;
    packet.loiter_alt = loiter_alt;
    packet.loiter_DTED = loiter_DTED;
    packet.loiter_radius = loiter_radius;
    packet.index = index;
    packet.rally_mode = rally_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT, (const char *)&packet, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
#endif
}

/**
 * @brief Send a mission_data_waypoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mission_data_waypoint_send_struct(mavlink_channel_t chan, const mavlink_mission_data_waypoint_t* mission_data_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mission_data_waypoint_send(chan, mission_data_waypoint->index, mission_data_waypoint->origin_lat, mission_data_waypoint->origin_long, mission_data_waypoint->origin_alt, mission_data_waypoint->origin_DTED, mission_data_waypoint->rally_mode, mission_data_waypoint->rally_alt, mission_data_waypoint->flight_time, mission_data_waypoint->safe_alt, mission_data_waypoint->safe_offset, mission_data_waypoint->home_lat, mission_data_waypoint->home_long, mission_data_waypoint->home_alt, mission_data_waypoint->home_DTED, mission_data_waypoint->a_waypnt_lat, mission_data_waypoint->a_waypnt_long, mission_data_waypoint->a_waypnt_alt, mission_data_waypoint->a_waypnt_DTED, mission_data_waypoint->b_waypnt_lat, mission_data_waypoint->b_waypnt_long, mission_data_waypoint->b_waypnt_alt, mission_data_waypoint->b_waypnt_DTED, mission_data_waypoint->c_waypnt_lat, mission_data_waypoint->c_waypnt_long, mission_data_waypoint->c_waypnt_alt, mission_data_waypoint->c_waypnt_DTED, mission_data_waypoint->d_waypnt_lat, mission_data_waypoint->d_waypnt_long, mission_data_waypoint->d_waypnt_alt, mission_data_waypoint->d_waypnt_DTED, mission_data_waypoint->e_waypnt_lat, mission_data_waypoint->e_waypnt_long, mission_data_waypoint->e_waypnt_alt, mission_data_waypoint->e_waypnt_DTED, mission_data_waypoint->land_lat, mission_data_waypoint->land_long, mission_data_waypoint->land_alt, mission_data_waypoint->land_DTED, mission_data_waypoint->o1_waypnt_lat, mission_data_waypoint->o1_waypnt_long, mission_data_waypoint->o1_waypnt_alt, mission_data_waypoint->o1_waypnt_DTED, mission_data_waypoint->o2_waypnt_lat, mission_data_waypoint->o2_waypnt_long, mission_data_waypoint->o2_waypnt_alt, mission_data_waypoint->o2_waypnt_DTED, mission_data_waypoint->o3_waypnt_lat, mission_data_waypoint->o3_waypnt_long, mission_data_waypoint->o3_waypnt_alt, mission_data_waypoint->o3_waypnt_DTED, mission_data_waypoint->loiter_lat, mission_data_waypoint->loiter_long, mission_data_waypoint->loiter_alt, mission_data_waypoint->loiter_DTED, mission_data_waypoint->loiter_radius);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT, (const char *)mission_data_waypoint, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mission_data_waypoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, int32_t origin_lat, int32_t origin_long, int16_t origin_alt, int16_t origin_DTED, uint8_t rally_mode, int16_t rally_alt, uint16_t flight_time, int16_t safe_alt, uint16_t safe_offset, int32_t home_lat, int32_t home_long, int16_t home_alt, int16_t home_DTED, int32_t a_waypnt_lat, int32_t a_waypnt_long, int16_t a_waypnt_alt, int16_t a_waypnt_DTED, int32_t b_waypnt_lat, int32_t b_waypnt_long, int16_t b_waypnt_alt, int16_t b_waypnt_DTED, int32_t c_waypnt_lat, int32_t c_waypnt_long, int16_t c_waypnt_alt, int16_t c_waypnt_DTED, int32_t d_waypnt_lat, int32_t d_waypnt_long, int16_t d_waypnt_alt, int16_t d_waypnt_DTED, int32_t e_waypnt_lat, int32_t e_waypnt_long, int16_t e_waypnt_alt, int16_t e_waypnt_DTED, int32_t land_lat, int32_t land_long, int16_t land_alt, int16_t land_DTED, int32_t o1_waypnt_lat, int32_t o1_waypnt_long, int16_t o1_waypnt_alt, int16_t o1_waypnt_DTED, int32_t o2_waypnt_lat, int32_t o2_waypnt_long, int16_t o2_waypnt_alt, int16_t o2_waypnt_DTED, int32_t o3_waypnt_lat, int32_t o3_waypnt_long, int16_t o3_waypnt_alt, int16_t o3_waypnt_DTED, int32_t loiter_lat, int32_t loiter_long, int16_t loiter_alt, int16_t loiter_DTED, uint16_t loiter_radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, origin_lat);
    _mav_put_int32_t(buf, 4, origin_long);
    _mav_put_int32_t(buf, 8, home_lat);
    _mav_put_int32_t(buf, 12, home_long);
    _mav_put_int32_t(buf, 16, a_waypnt_lat);
    _mav_put_int32_t(buf, 20, a_waypnt_long);
    _mav_put_int32_t(buf, 24, b_waypnt_lat);
    _mav_put_int32_t(buf, 28, b_waypnt_long);
    _mav_put_int32_t(buf, 32, c_waypnt_lat);
    _mav_put_int32_t(buf, 36, c_waypnt_long);
    _mav_put_int32_t(buf, 40, d_waypnt_lat);
    _mav_put_int32_t(buf, 44, d_waypnt_long);
    _mav_put_int32_t(buf, 48, e_waypnt_lat);
    _mav_put_int32_t(buf, 52, e_waypnt_long);
    _mav_put_int32_t(buf, 56, land_lat);
    _mav_put_int32_t(buf, 60, land_long);
    _mav_put_int32_t(buf, 64, o1_waypnt_lat);
    _mav_put_int32_t(buf, 68, o1_waypnt_long);
    _mav_put_int32_t(buf, 72, o2_waypnt_lat);
    _mav_put_int32_t(buf, 76, o2_waypnt_long);
    _mav_put_int32_t(buf, 80, o3_waypnt_lat);
    _mav_put_int32_t(buf, 84, o3_waypnt_long);
    _mav_put_int32_t(buf, 88, loiter_lat);
    _mav_put_int32_t(buf, 92, loiter_long);
    _mav_put_int16_t(buf, 96, origin_alt);
    _mav_put_int16_t(buf, 98, origin_DTED);
    _mav_put_int16_t(buf, 100, rally_alt);
    _mav_put_uint16_t(buf, 102, flight_time);
    _mav_put_int16_t(buf, 104, safe_alt);
    _mav_put_uint16_t(buf, 106, safe_offset);
    _mav_put_int16_t(buf, 108, home_alt);
    _mav_put_int16_t(buf, 110, home_DTED);
    _mav_put_int16_t(buf, 112, a_waypnt_alt);
    _mav_put_int16_t(buf, 114, a_waypnt_DTED);
    _mav_put_int16_t(buf, 116, b_waypnt_alt);
    _mav_put_int16_t(buf, 118, b_waypnt_DTED);
    _mav_put_int16_t(buf, 120, c_waypnt_alt);
    _mav_put_int16_t(buf, 122, c_waypnt_DTED);
    _mav_put_int16_t(buf, 124, d_waypnt_alt);
    _mav_put_int16_t(buf, 126, d_waypnt_DTED);
    _mav_put_int16_t(buf, 128, e_waypnt_alt);
    _mav_put_int16_t(buf, 130, e_waypnt_DTED);
    _mav_put_int16_t(buf, 132, land_alt);
    _mav_put_int16_t(buf, 134, land_DTED);
    _mav_put_int16_t(buf, 136, o1_waypnt_alt);
    _mav_put_int16_t(buf, 138, o1_waypnt_DTED);
    _mav_put_int16_t(buf, 140, o2_waypnt_alt);
    _mav_put_int16_t(buf, 142, o2_waypnt_DTED);
    _mav_put_int16_t(buf, 144, o3_waypnt_alt);
    _mav_put_int16_t(buf, 146, o3_waypnt_DTED);
    _mav_put_int16_t(buf, 148, loiter_alt);
    _mav_put_int16_t(buf, 150, loiter_DTED);
    _mav_put_uint16_t(buf, 152, loiter_radius);
    _mav_put_uint8_t(buf, 154, index);
    _mav_put_uint8_t(buf, 155, rally_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT, buf, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
#else
    mavlink_mission_data_waypoint_t *packet = (mavlink_mission_data_waypoint_t *)msgbuf;
    packet->origin_lat = origin_lat;
    packet->origin_long = origin_long;
    packet->home_lat = home_lat;
    packet->home_long = home_long;
    packet->a_waypnt_lat = a_waypnt_lat;
    packet->a_waypnt_long = a_waypnt_long;
    packet->b_waypnt_lat = b_waypnt_lat;
    packet->b_waypnt_long = b_waypnt_long;
    packet->c_waypnt_lat = c_waypnt_lat;
    packet->c_waypnt_long = c_waypnt_long;
    packet->d_waypnt_lat = d_waypnt_lat;
    packet->d_waypnt_long = d_waypnt_long;
    packet->e_waypnt_lat = e_waypnt_lat;
    packet->e_waypnt_long = e_waypnt_long;
    packet->land_lat = land_lat;
    packet->land_long = land_long;
    packet->o1_waypnt_lat = o1_waypnt_lat;
    packet->o1_waypnt_long = o1_waypnt_long;
    packet->o2_waypnt_lat = o2_waypnt_lat;
    packet->o2_waypnt_long = o2_waypnt_long;
    packet->o3_waypnt_lat = o3_waypnt_lat;
    packet->o3_waypnt_long = o3_waypnt_long;
    packet->loiter_lat = loiter_lat;
    packet->loiter_long = loiter_long;
    packet->origin_alt = origin_alt;
    packet->origin_DTED = origin_DTED;
    packet->rally_alt = rally_alt;
    packet->flight_time = flight_time;
    packet->safe_alt = safe_alt;
    packet->safe_offset = safe_offset;
    packet->home_alt = home_alt;
    packet->home_DTED = home_DTED;
    packet->a_waypnt_alt = a_waypnt_alt;
    packet->a_waypnt_DTED = a_waypnt_DTED;
    packet->b_waypnt_alt = b_waypnt_alt;
    packet->b_waypnt_DTED = b_waypnt_DTED;
    packet->c_waypnt_alt = c_waypnt_alt;
    packet->c_waypnt_DTED = c_waypnt_DTED;
    packet->d_waypnt_alt = d_waypnt_alt;
    packet->d_waypnt_DTED = d_waypnt_DTED;
    packet->e_waypnt_alt = e_waypnt_alt;
    packet->e_waypnt_DTED = e_waypnt_DTED;
    packet->land_alt = land_alt;
    packet->land_DTED = land_DTED;
    packet->o1_waypnt_alt = o1_waypnt_alt;
    packet->o1_waypnt_DTED = o1_waypnt_DTED;
    packet->o2_waypnt_alt = o2_waypnt_alt;
    packet->o2_waypnt_DTED = o2_waypnt_DTED;
    packet->o3_waypnt_alt = o3_waypnt_alt;
    packet->o3_waypnt_DTED = o3_waypnt_DTED;
    packet->loiter_alt = loiter_alt;
    packet->loiter_DTED = loiter_DTED;
    packet->loiter_radius = loiter_radius;
    packet->index = index;
    packet->rally_mode = rally_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT, (const char *)packet, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE MISSION_DATA_WAYPOINT UNPACKING


/**
 * @brief Get field index from mission_data_waypoint message
 *
 * @return Target waypoint mission index
 */
static inline uint8_t mavlink_msg_mission_data_waypoint_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  154);
}

/**
 * @brief Get field origin_lat from mission_data_waypoint message
 *
 * @return Origin Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_origin_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field origin_long from mission_data_waypoint message
 *
 * @return Origin Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_origin_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field origin_alt from mission_data_waypoint message
 *
 * @return Origin Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_origin_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  96);
}

/**
 * @brief Get field origin_DTED from mission_data_waypoint message
 *
 * @return Origin DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_origin_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  98);
}

/**
 * @brief Get field rally_mode from mission_data_waypoint message
 *
 * @return Rally Mode
 */
static inline uint8_t mavlink_msg_mission_data_waypoint_get_rally_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  155);
}

/**
 * @brief Get field rally_alt from mission_data_waypoint message
 *
 * @return Rally altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_rally_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  100);
}

/**
 * @brief Get field flight_time from mission_data_waypoint message
 *
 * @return Flight Cycle time in seconds
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_get_flight_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  102);
}

/**
 * @brief Get field safe_alt from mission_data_waypoint message
 *
 * @return Safe altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_safe_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  104);
}

/**
 * @brief Get field safe_offset from mission_data_waypoint message
 *
 * @return Safe altitude offset in meters
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_get_safe_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  106);
}

/**
 * @brief Get field home_lat from mission_data_waypoint message
 *
 * @return Home Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_home_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field home_long from mission_data_waypoint message
 *
 * @return Home Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_home_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field home_alt from mission_data_waypoint message
 *
 * @return Home Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_home_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  108);
}

/**
 * @brief Get field home_DTED from mission_data_waypoint message
 *
 * @return Home DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_home_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  110);
}

/**
 * @brief Get field a_waypnt_lat from mission_data_waypoint message
 *
 * @return 'A' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_a_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field a_waypnt_long from mission_data_waypoint message
 *
 * @return 'A' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_a_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field a_waypnt_alt from mission_data_waypoint message
 *
 * @return 'A' waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_a_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  112);
}

/**
 * @brief Get field a_waypnt_DTED from mission_data_waypoint message
 *
 * @return 'A' waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_a_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  114);
}

/**
 * @brief Get field b_waypnt_lat from mission_data_waypoint message
 *
 * @return 'B' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_b_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field b_waypnt_long from mission_data_waypoint message
 *
 * @return 'B' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_b_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field b_waypnt_alt from mission_data_waypoint message
 *
 * @return 'B' waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_b_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  116);
}

/**
 * @brief Get field b_waypnt_DTED from mission_data_waypoint message
 *
 * @return 'B' waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_b_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  118);
}

/**
 * @brief Get field c_waypnt_lat from mission_data_waypoint message
 *
 * @return 'C' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_c_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field c_waypnt_long from mission_data_waypoint message
 *
 * @return 'C' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_c_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field c_waypnt_alt from mission_data_waypoint message
 *
 * @return 'C' waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_c_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  120);
}

/**
 * @brief Get field c_waypnt_DTED from mission_data_waypoint message
 *
 * @return 'C' waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_c_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  122);
}

/**
 * @brief Get field d_waypnt_lat from mission_data_waypoint message
 *
 * @return 'D' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_d_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field d_waypnt_long from mission_data_waypoint message
 *
 * @return 'D' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_d_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field d_waypnt_alt from mission_data_waypoint message
 *
 * @return 'D' waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_d_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  124);
}

/**
 * @brief Get field d_waypnt_DTED from mission_data_waypoint message
 *
 * @return 'D' waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_d_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  126);
}

/**
 * @brief Get field e_waypnt_lat from mission_data_waypoint message
 *
 * @return 'E' waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_e_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Get field e_waypnt_long from mission_data_waypoint message
 *
 * @return 'E' waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_e_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  52);
}

/**
 * @brief Get field e_waypnt_alt from mission_data_waypoint message
 *
 * @return 'E' waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_e_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  128);
}

/**
 * @brief Get field e_waypnt_DTED from mission_data_waypoint message
 *
 * @return 'E' waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_e_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  130);
}

/**
 * @brief Get field land_lat from mission_data_waypoint message
 *
 * @return Land Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_land_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  56);
}

/**
 * @brief Get field land_long from mission_data_waypoint message
 *
 * @return Land Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_land_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  60);
}

/**
 * @brief Get field land_alt from mission_data_waypoint message
 *
 * @return Land Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_land_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  132);
}

/**
 * @brief Get field land_DTED from mission_data_waypoint message
 *
 * @return Land DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_land_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  134);
}

/**
 * @brief Get field o1_waypnt_lat from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o1_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  64);
}

/**
 * @brief Get field o1_waypnt_long from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o1_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  68);
}

/**
 * @brief Get field o1_waypnt_alt from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o1_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  136);
}

/**
 * @brief Get field o1_waypnt_DTED from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o1_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  138);
}

/**
 * @brief Get field o2_waypnt_lat from mission_data_waypoint message
 *
 * @return ORBIT 2 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o2_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  72);
}

/**
 * @brief Get field o2_waypnt_long from mission_data_waypoint message
 *
 * @return ORBIT 2 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o2_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  76);
}

/**
 * @brief Get field o2_waypnt_alt from mission_data_waypoint message
 *
 * @return ORBIT 2 waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o2_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  140);
}

/**
 * @brief Get field o2_waypnt_DTED from mission_data_waypoint message
 *
 * @return ORBIT 2 waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o2_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  142);
}

/**
 * @brief Get field o3_waypnt_lat from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o3_waypnt_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  80);
}

/**
 * @brief Get field o3_waypnt_long from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_o3_waypnt_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  84);
}

/**
 * @brief Get field o3_waypnt_alt from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o3_waypnt_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  144);
}

/**
 * @brief Get field o3_waypnt_DTED from mission_data_waypoint message
 *
 * @return ORBIT 3 waypoint DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_o3_waypnt_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  146);
}

/**
 * @brief Get field loiter_lat from mission_data_waypoint message
 *
 * @return Loiter Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_loiter_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  88);
}

/**
 * @brief Get field loiter_long from mission_data_waypoint message
 *
 * @return Loiter Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_mission_data_waypoint_get_loiter_long(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  92);
}

/**
 * @brief Get field loiter_alt from mission_data_waypoint message
 *
 * @return Loiter Altitude in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_loiter_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  148);
}

/**
 * @brief Get field loiter_DTED from mission_data_waypoint message
 *
 * @return Loiter DTED in meters
 */
static inline int16_t mavlink_msg_mission_data_waypoint_get_loiter_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  150);
}

/**
 * @brief Get field loiter_radius from mission_data_waypoint message
 *
 * @return Loiter Radius of the waypoint in meters
 */
static inline uint16_t mavlink_msg_mission_data_waypoint_get_loiter_radius(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  152);
}

/**
 * @brief Decode a mission_data_waypoint message into a struct
 *
 * @param msg The message to decode
 * @param mission_data_waypoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_mission_data_waypoint_decode(const mavlink_message_t* msg, mavlink_mission_data_waypoint_t* mission_data_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mission_data_waypoint->origin_lat = mavlink_msg_mission_data_waypoint_get_origin_lat(msg);
    mission_data_waypoint->origin_long = mavlink_msg_mission_data_waypoint_get_origin_long(msg);
    mission_data_waypoint->home_lat = mavlink_msg_mission_data_waypoint_get_home_lat(msg);
    mission_data_waypoint->home_long = mavlink_msg_mission_data_waypoint_get_home_long(msg);
    mission_data_waypoint->a_waypnt_lat = mavlink_msg_mission_data_waypoint_get_a_waypnt_lat(msg);
    mission_data_waypoint->a_waypnt_long = mavlink_msg_mission_data_waypoint_get_a_waypnt_long(msg);
    mission_data_waypoint->b_waypnt_lat = mavlink_msg_mission_data_waypoint_get_b_waypnt_lat(msg);
    mission_data_waypoint->b_waypnt_long = mavlink_msg_mission_data_waypoint_get_b_waypnt_long(msg);
    mission_data_waypoint->c_waypnt_lat = mavlink_msg_mission_data_waypoint_get_c_waypnt_lat(msg);
    mission_data_waypoint->c_waypnt_long = mavlink_msg_mission_data_waypoint_get_c_waypnt_long(msg);
    mission_data_waypoint->d_waypnt_lat = mavlink_msg_mission_data_waypoint_get_d_waypnt_lat(msg);
    mission_data_waypoint->d_waypnt_long = mavlink_msg_mission_data_waypoint_get_d_waypnt_long(msg);
    mission_data_waypoint->e_waypnt_lat = mavlink_msg_mission_data_waypoint_get_e_waypnt_lat(msg);
    mission_data_waypoint->e_waypnt_long = mavlink_msg_mission_data_waypoint_get_e_waypnt_long(msg);
    mission_data_waypoint->land_lat = mavlink_msg_mission_data_waypoint_get_land_lat(msg);
    mission_data_waypoint->land_long = mavlink_msg_mission_data_waypoint_get_land_long(msg);
    mission_data_waypoint->o1_waypnt_lat = mavlink_msg_mission_data_waypoint_get_o1_waypnt_lat(msg);
    mission_data_waypoint->o1_waypnt_long = mavlink_msg_mission_data_waypoint_get_o1_waypnt_long(msg);
    mission_data_waypoint->o2_waypnt_lat = mavlink_msg_mission_data_waypoint_get_o2_waypnt_lat(msg);
    mission_data_waypoint->o2_waypnt_long = mavlink_msg_mission_data_waypoint_get_o2_waypnt_long(msg);
    mission_data_waypoint->o3_waypnt_lat = mavlink_msg_mission_data_waypoint_get_o3_waypnt_lat(msg);
    mission_data_waypoint->o3_waypnt_long = mavlink_msg_mission_data_waypoint_get_o3_waypnt_long(msg);
    mission_data_waypoint->loiter_lat = mavlink_msg_mission_data_waypoint_get_loiter_lat(msg);
    mission_data_waypoint->loiter_long = mavlink_msg_mission_data_waypoint_get_loiter_long(msg);
    mission_data_waypoint->origin_alt = mavlink_msg_mission_data_waypoint_get_origin_alt(msg);
    mission_data_waypoint->origin_DTED = mavlink_msg_mission_data_waypoint_get_origin_DTED(msg);
    mission_data_waypoint->rally_alt = mavlink_msg_mission_data_waypoint_get_rally_alt(msg);
    mission_data_waypoint->flight_time = mavlink_msg_mission_data_waypoint_get_flight_time(msg);
    mission_data_waypoint->safe_alt = mavlink_msg_mission_data_waypoint_get_safe_alt(msg);
    mission_data_waypoint->safe_offset = mavlink_msg_mission_data_waypoint_get_safe_offset(msg);
    mission_data_waypoint->home_alt = mavlink_msg_mission_data_waypoint_get_home_alt(msg);
    mission_data_waypoint->home_DTED = mavlink_msg_mission_data_waypoint_get_home_DTED(msg);
    mission_data_waypoint->a_waypnt_alt = mavlink_msg_mission_data_waypoint_get_a_waypnt_alt(msg);
    mission_data_waypoint->a_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_a_waypnt_DTED(msg);
    mission_data_waypoint->b_waypnt_alt = mavlink_msg_mission_data_waypoint_get_b_waypnt_alt(msg);
    mission_data_waypoint->b_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_b_waypnt_DTED(msg);
    mission_data_waypoint->c_waypnt_alt = mavlink_msg_mission_data_waypoint_get_c_waypnt_alt(msg);
    mission_data_waypoint->c_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_c_waypnt_DTED(msg);
    mission_data_waypoint->d_waypnt_alt = mavlink_msg_mission_data_waypoint_get_d_waypnt_alt(msg);
    mission_data_waypoint->d_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_d_waypnt_DTED(msg);
    mission_data_waypoint->e_waypnt_alt = mavlink_msg_mission_data_waypoint_get_e_waypnt_alt(msg);
    mission_data_waypoint->e_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_e_waypnt_DTED(msg);
    mission_data_waypoint->land_alt = mavlink_msg_mission_data_waypoint_get_land_alt(msg);
    mission_data_waypoint->land_DTED = mavlink_msg_mission_data_waypoint_get_land_DTED(msg);
    mission_data_waypoint->o1_waypnt_alt = mavlink_msg_mission_data_waypoint_get_o1_waypnt_alt(msg);
    mission_data_waypoint->o1_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_o1_waypnt_DTED(msg);
    mission_data_waypoint->o2_waypnt_alt = mavlink_msg_mission_data_waypoint_get_o2_waypnt_alt(msg);
    mission_data_waypoint->o2_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_o2_waypnt_DTED(msg);
    mission_data_waypoint->o3_waypnt_alt = mavlink_msg_mission_data_waypoint_get_o3_waypnt_alt(msg);
    mission_data_waypoint->o3_waypnt_DTED = mavlink_msg_mission_data_waypoint_get_o3_waypnt_DTED(msg);
    mission_data_waypoint->loiter_alt = mavlink_msg_mission_data_waypoint_get_loiter_alt(msg);
    mission_data_waypoint->loiter_DTED = mavlink_msg_mission_data_waypoint_get_loiter_DTED(msg);
    mission_data_waypoint->loiter_radius = mavlink_msg_mission_data_waypoint_get_loiter_radius(msg);
    mission_data_waypoint->index = mavlink_msg_mission_data_waypoint_get_index(msg);
    mission_data_waypoint->rally_mode = mavlink_msg_mission_data_waypoint_get_rally_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN? msg->len : MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN;
        memset(mission_data_waypoint, 0, MAVLINK_MSG_ID_MISSION_DATA_WAYPOINT_LEN);
    memcpy(mission_data_waypoint, _MAV_PAYLOAD(msg), len);
#endif
}
