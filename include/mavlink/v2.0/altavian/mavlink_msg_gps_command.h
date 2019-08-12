#pragma once
// MESSAGE GPS_COMMAND PACKING

#define MAVLINK_MSG_ID_GPS_COMMAND 209

MAVPACKED(
typedef struct __mavlink_gps_command_t {
 uint32_t nanosecond; /*< */
 int32_t latitude; /*< */
 int32_t longitude; /*< */
 uint16_t year; /*< */
 uint16_t gps_status; /*< */
 uint16_t gps_key_status; /*< */
 int16_t altitude; /*< */
 uint16_t ground_speed; /*< */
 int16_t ground_course; /*< */
 int16_t magnetic_deviation; /*< */
 uint8_t command; /*< */
 uint8_t month; /*< */
 uint8_t day; /*< */
 uint8_t hour; /*< */
 uint8_t minute; /*< */
 uint8_t second; /*< */
 uint8_t sat_cno_1; /*< */
 uint8_t sat_cno_2; /*< */
 uint8_t sat_cno_3; /*< */
 uint8_t sat_cno_4; /*< */
 uint8_t sat_cno_5; /*< */
 uint8_t sat_cno_6; /*< */
 uint8_t sat_cno_7; /*< */
 uint8_t sat_cno_8; /*< */
 uint8_t sat_cno_9; /*< */
 uint8_t sat_cno_10; /*< */
 uint8_t sat_cno_11; /*< */
 uint8_t sat_cno_12; /*< */
}) mavlink_gps_command_t;

#define MAVLINK_MSG_ID_GPS_COMMAND_LEN 44
#define MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN 44
#define MAVLINK_MSG_ID_209_LEN 44
#define MAVLINK_MSG_ID_209_MIN_LEN 44

#define MAVLINK_MSG_ID_GPS_COMMAND_CRC 210
#define MAVLINK_MSG_ID_209_CRC 210



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GPS_COMMAND { \
    209, \
    "GPS_COMMAND", \
    28, \
    {  { "nanosecond", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gps_command_t, nanosecond) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_gps_command_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_gps_command_t, longitude) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_gps_command_t, year) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_gps_command_t, gps_status) }, \
         { "gps_key_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gps_command_t, gps_key_status) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_gps_command_t, altitude) }, \
         { "ground_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gps_command_t, ground_speed) }, \
         { "ground_course", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_gps_command_t, ground_course) }, \
         { "magnetic_deviation", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_gps_command_t, magnetic_deviation) }, \
         { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_gps_command_t, command) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_gps_command_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_gps_command_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_gps_command_t, hour) }, \
         { "minute", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_gps_command_t, minute) }, \
         { "second", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_gps_command_t, second) }, \
         { "sat_cno_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_gps_command_t, sat_cno_1) }, \
         { "sat_cno_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_gps_command_t, sat_cno_2) }, \
         { "sat_cno_3", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_gps_command_t, sat_cno_3) }, \
         { "sat_cno_4", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_gps_command_t, sat_cno_4) }, \
         { "sat_cno_5", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_gps_command_t, sat_cno_5) }, \
         { "sat_cno_6", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_gps_command_t, sat_cno_6) }, \
         { "sat_cno_7", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_gps_command_t, sat_cno_7) }, \
         { "sat_cno_8", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_gps_command_t, sat_cno_8) }, \
         { "sat_cno_9", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_gps_command_t, sat_cno_9) }, \
         { "sat_cno_10", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_gps_command_t, sat_cno_10) }, \
         { "sat_cno_11", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_gps_command_t, sat_cno_11) }, \
         { "sat_cno_12", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_gps_command_t, sat_cno_12) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GPS_COMMAND { \
    "GPS_COMMAND", \
    28, \
    {  { "nanosecond", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gps_command_t, nanosecond) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_gps_command_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_gps_command_t, longitude) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_gps_command_t, year) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_gps_command_t, gps_status) }, \
         { "gps_key_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gps_command_t, gps_key_status) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_gps_command_t, altitude) }, \
         { "ground_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gps_command_t, ground_speed) }, \
         { "ground_course", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_gps_command_t, ground_course) }, \
         { "magnetic_deviation", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_gps_command_t, magnetic_deviation) }, \
         { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_gps_command_t, command) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_gps_command_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_gps_command_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_gps_command_t, hour) }, \
         { "minute", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_gps_command_t, minute) }, \
         { "second", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_gps_command_t, second) }, \
         { "sat_cno_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_gps_command_t, sat_cno_1) }, \
         { "sat_cno_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_gps_command_t, sat_cno_2) }, \
         { "sat_cno_3", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_gps_command_t, sat_cno_3) }, \
         { "sat_cno_4", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_gps_command_t, sat_cno_4) }, \
         { "sat_cno_5", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_gps_command_t, sat_cno_5) }, \
         { "sat_cno_6", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_gps_command_t, sat_cno_6) }, \
         { "sat_cno_7", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_gps_command_t, sat_cno_7) }, \
         { "sat_cno_8", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_gps_command_t, sat_cno_8) }, \
         { "sat_cno_9", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_gps_command_t, sat_cno_9) }, \
         { "sat_cno_10", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_gps_command_t, sat_cno_10) }, \
         { "sat_cno_11", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_gps_command_t, sat_cno_11) }, \
         { "sat_cno_12", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_gps_command_t, sat_cno_12) }, \
         } \
}
#endif

/**
 * @brief Pack a gps_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param minute 
 * @param second 
 * @param nanosecond 
 * @param gps_status 
 * @param gps_key_status 
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param ground_speed 
 * @param ground_course 
 * @param magnetic_deviation 
 * @param sat_cno_1 
 * @param sat_cno_2 
 * @param sat_cno_3 
 * @param sat_cno_4 
 * @param sat_cno_5 
 * @param sat_cno_6 
 * @param sat_cno_7 
 * @param sat_cno_8 
 * @param sat_cno_9 
 * @param sat_cno_10 
 * @param sat_cno_11 
 * @param sat_cno_12 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t command, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second, uint32_t nanosecond, uint16_t gps_status, uint16_t gps_key_status, int32_t latitude, int32_t longitude, int16_t altitude, uint16_t ground_speed, int16_t ground_course, int16_t magnetic_deviation, uint8_t sat_cno_1, uint8_t sat_cno_2, uint8_t sat_cno_3, uint8_t sat_cno_4, uint8_t sat_cno_5, uint8_t sat_cno_6, uint8_t sat_cno_7, uint8_t sat_cno_8, uint8_t sat_cno_9, uint8_t sat_cno_10, uint8_t sat_cno_11, uint8_t sat_cno_12)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, nanosecond);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint16_t(buf, 12, year);
    _mav_put_uint16_t(buf, 14, gps_status);
    _mav_put_uint16_t(buf, 16, gps_key_status);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_uint16_t(buf, 20, ground_speed);
    _mav_put_int16_t(buf, 22, ground_course);
    _mav_put_int16_t(buf, 24, magnetic_deviation);
    _mav_put_uint8_t(buf, 26, command);
    _mav_put_uint8_t(buf, 27, month);
    _mav_put_uint8_t(buf, 28, day);
    _mav_put_uint8_t(buf, 29, hour);
    _mav_put_uint8_t(buf, 30, minute);
    _mav_put_uint8_t(buf, 31, second);
    _mav_put_uint8_t(buf, 32, sat_cno_1);
    _mav_put_uint8_t(buf, 33, sat_cno_2);
    _mav_put_uint8_t(buf, 34, sat_cno_3);
    _mav_put_uint8_t(buf, 35, sat_cno_4);
    _mav_put_uint8_t(buf, 36, sat_cno_5);
    _mav_put_uint8_t(buf, 37, sat_cno_6);
    _mav_put_uint8_t(buf, 38, sat_cno_7);
    _mav_put_uint8_t(buf, 39, sat_cno_8);
    _mav_put_uint8_t(buf, 40, sat_cno_9);
    _mav_put_uint8_t(buf, 41, sat_cno_10);
    _mav_put_uint8_t(buf, 42, sat_cno_11);
    _mav_put_uint8_t(buf, 43, sat_cno_12);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_COMMAND_LEN);
#else
    mavlink_gps_command_t packet;
    packet.nanosecond = nanosecond;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.year = year;
    packet.gps_status = gps_status;
    packet.gps_key_status = gps_key_status;
    packet.altitude = altitude;
    packet.ground_speed = ground_speed;
    packet.ground_course = ground_course;
    packet.magnetic_deviation = magnetic_deviation;
    packet.command = command;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;
    packet.sat_cno_1 = sat_cno_1;
    packet.sat_cno_2 = sat_cno_2;
    packet.sat_cno_3 = sat_cno_3;
    packet.sat_cno_4 = sat_cno_4;
    packet.sat_cno_5 = sat_cno_5;
    packet.sat_cno_6 = sat_cno_6;
    packet.sat_cno_7 = sat_cno_7;
    packet.sat_cno_8 = sat_cno_8;
    packet.sat_cno_9 = sat_cno_9;
    packet.sat_cno_10 = sat_cno_10;
    packet.sat_cno_11 = sat_cno_11;
    packet.sat_cno_12 = sat_cno_12;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
}

/**
 * @brief Pack a gps_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param minute 
 * @param second 
 * @param nanosecond 
 * @param gps_status 
 * @param gps_key_status 
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param ground_speed 
 * @param ground_course 
 * @param magnetic_deviation 
 * @param sat_cno_1 
 * @param sat_cno_2 
 * @param sat_cno_3 
 * @param sat_cno_4 
 * @param sat_cno_5 
 * @param sat_cno_6 
 * @param sat_cno_7 
 * @param sat_cno_8 
 * @param sat_cno_9 
 * @param sat_cno_10 
 * @param sat_cno_11 
 * @param sat_cno_12 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t command,uint16_t year,uint8_t month,uint8_t day,uint8_t hour,uint8_t minute,uint8_t second,uint32_t nanosecond,uint16_t gps_status,uint16_t gps_key_status,int32_t latitude,int32_t longitude,int16_t altitude,uint16_t ground_speed,int16_t ground_course,int16_t magnetic_deviation,uint8_t sat_cno_1,uint8_t sat_cno_2,uint8_t sat_cno_3,uint8_t sat_cno_4,uint8_t sat_cno_5,uint8_t sat_cno_6,uint8_t sat_cno_7,uint8_t sat_cno_8,uint8_t sat_cno_9,uint8_t sat_cno_10,uint8_t sat_cno_11,uint8_t sat_cno_12)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, nanosecond);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint16_t(buf, 12, year);
    _mav_put_uint16_t(buf, 14, gps_status);
    _mav_put_uint16_t(buf, 16, gps_key_status);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_uint16_t(buf, 20, ground_speed);
    _mav_put_int16_t(buf, 22, ground_course);
    _mav_put_int16_t(buf, 24, magnetic_deviation);
    _mav_put_uint8_t(buf, 26, command);
    _mav_put_uint8_t(buf, 27, month);
    _mav_put_uint8_t(buf, 28, day);
    _mav_put_uint8_t(buf, 29, hour);
    _mav_put_uint8_t(buf, 30, minute);
    _mav_put_uint8_t(buf, 31, second);
    _mav_put_uint8_t(buf, 32, sat_cno_1);
    _mav_put_uint8_t(buf, 33, sat_cno_2);
    _mav_put_uint8_t(buf, 34, sat_cno_3);
    _mav_put_uint8_t(buf, 35, sat_cno_4);
    _mav_put_uint8_t(buf, 36, sat_cno_5);
    _mav_put_uint8_t(buf, 37, sat_cno_6);
    _mav_put_uint8_t(buf, 38, sat_cno_7);
    _mav_put_uint8_t(buf, 39, sat_cno_8);
    _mav_put_uint8_t(buf, 40, sat_cno_9);
    _mav_put_uint8_t(buf, 41, sat_cno_10);
    _mav_put_uint8_t(buf, 42, sat_cno_11);
    _mav_put_uint8_t(buf, 43, sat_cno_12);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_COMMAND_LEN);
#else
    mavlink_gps_command_t packet;
    packet.nanosecond = nanosecond;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.year = year;
    packet.gps_status = gps_status;
    packet.gps_key_status = gps_key_status;
    packet.altitude = altitude;
    packet.ground_speed = ground_speed;
    packet.ground_course = ground_course;
    packet.magnetic_deviation = magnetic_deviation;
    packet.command = command;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;
    packet.sat_cno_1 = sat_cno_1;
    packet.sat_cno_2 = sat_cno_2;
    packet.sat_cno_3 = sat_cno_3;
    packet.sat_cno_4 = sat_cno_4;
    packet.sat_cno_5 = sat_cno_5;
    packet.sat_cno_6 = sat_cno_6;
    packet.sat_cno_7 = sat_cno_7;
    packet.sat_cno_8 = sat_cno_8;
    packet.sat_cno_9 = sat_cno_9;
    packet.sat_cno_10 = sat_cno_10;
    packet.sat_cno_11 = sat_cno_11;
    packet.sat_cno_12 = sat_cno_12;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
}

/**
 * @brief Encode a gps_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gps_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gps_command_t* gps_command)
{
    return mavlink_msg_gps_command_pack(system_id, component_id, msg, gps_command->command, gps_command->year, gps_command->month, gps_command->day, gps_command->hour, gps_command->minute, gps_command->second, gps_command->nanosecond, gps_command->gps_status, gps_command->gps_key_status, gps_command->latitude, gps_command->longitude, gps_command->altitude, gps_command->ground_speed, gps_command->ground_course, gps_command->magnetic_deviation, gps_command->sat_cno_1, gps_command->sat_cno_2, gps_command->sat_cno_3, gps_command->sat_cno_4, gps_command->sat_cno_5, gps_command->sat_cno_6, gps_command->sat_cno_7, gps_command->sat_cno_8, gps_command->sat_cno_9, gps_command->sat_cno_10, gps_command->sat_cno_11, gps_command->sat_cno_12);
}

/**
 * @brief Encode a gps_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gps_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gps_command_t* gps_command)
{
    return mavlink_msg_gps_command_pack_chan(system_id, component_id, chan, msg, gps_command->command, gps_command->year, gps_command->month, gps_command->day, gps_command->hour, gps_command->minute, gps_command->second, gps_command->nanosecond, gps_command->gps_status, gps_command->gps_key_status, gps_command->latitude, gps_command->longitude, gps_command->altitude, gps_command->ground_speed, gps_command->ground_course, gps_command->magnetic_deviation, gps_command->sat_cno_1, gps_command->sat_cno_2, gps_command->sat_cno_3, gps_command->sat_cno_4, gps_command->sat_cno_5, gps_command->sat_cno_6, gps_command->sat_cno_7, gps_command->sat_cno_8, gps_command->sat_cno_9, gps_command->sat_cno_10, gps_command->sat_cno_11, gps_command->sat_cno_12);
}

/**
 * @brief Send a gps_command message
 * @param chan MAVLink channel to send the message
 *
 * @param command 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param minute 
 * @param second 
 * @param nanosecond 
 * @param gps_status 
 * @param gps_key_status 
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param ground_speed 
 * @param ground_course 
 * @param magnetic_deviation 
 * @param sat_cno_1 
 * @param sat_cno_2 
 * @param sat_cno_3 
 * @param sat_cno_4 
 * @param sat_cno_5 
 * @param sat_cno_6 
 * @param sat_cno_7 
 * @param sat_cno_8 
 * @param sat_cno_9 
 * @param sat_cno_10 
 * @param sat_cno_11 
 * @param sat_cno_12 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gps_command_send(mavlink_channel_t chan, uint8_t command, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second, uint32_t nanosecond, uint16_t gps_status, uint16_t gps_key_status, int32_t latitude, int32_t longitude, int16_t altitude, uint16_t ground_speed, int16_t ground_course, int16_t magnetic_deviation, uint8_t sat_cno_1, uint8_t sat_cno_2, uint8_t sat_cno_3, uint8_t sat_cno_4, uint8_t sat_cno_5, uint8_t sat_cno_6, uint8_t sat_cno_7, uint8_t sat_cno_8, uint8_t sat_cno_9, uint8_t sat_cno_10, uint8_t sat_cno_11, uint8_t sat_cno_12)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, nanosecond);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint16_t(buf, 12, year);
    _mav_put_uint16_t(buf, 14, gps_status);
    _mav_put_uint16_t(buf, 16, gps_key_status);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_uint16_t(buf, 20, ground_speed);
    _mav_put_int16_t(buf, 22, ground_course);
    _mav_put_int16_t(buf, 24, magnetic_deviation);
    _mav_put_uint8_t(buf, 26, command);
    _mav_put_uint8_t(buf, 27, month);
    _mav_put_uint8_t(buf, 28, day);
    _mav_put_uint8_t(buf, 29, hour);
    _mav_put_uint8_t(buf, 30, minute);
    _mav_put_uint8_t(buf, 31, second);
    _mav_put_uint8_t(buf, 32, sat_cno_1);
    _mav_put_uint8_t(buf, 33, sat_cno_2);
    _mav_put_uint8_t(buf, 34, sat_cno_3);
    _mav_put_uint8_t(buf, 35, sat_cno_4);
    _mav_put_uint8_t(buf, 36, sat_cno_5);
    _mav_put_uint8_t(buf, 37, sat_cno_6);
    _mav_put_uint8_t(buf, 38, sat_cno_7);
    _mav_put_uint8_t(buf, 39, sat_cno_8);
    _mav_put_uint8_t(buf, 40, sat_cno_9);
    _mav_put_uint8_t(buf, 41, sat_cno_10);
    _mav_put_uint8_t(buf, 42, sat_cno_11);
    _mav_put_uint8_t(buf, 43, sat_cno_12);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_COMMAND, buf, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
#else
    mavlink_gps_command_t packet;
    packet.nanosecond = nanosecond;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.year = year;
    packet.gps_status = gps_status;
    packet.gps_key_status = gps_key_status;
    packet.altitude = altitude;
    packet.ground_speed = ground_speed;
    packet.ground_course = ground_course;
    packet.magnetic_deviation = magnetic_deviation;
    packet.command = command;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;
    packet.sat_cno_1 = sat_cno_1;
    packet.sat_cno_2 = sat_cno_2;
    packet.sat_cno_3 = sat_cno_3;
    packet.sat_cno_4 = sat_cno_4;
    packet.sat_cno_5 = sat_cno_5;
    packet.sat_cno_6 = sat_cno_6;
    packet.sat_cno_7 = sat_cno_7;
    packet.sat_cno_8 = sat_cno_8;
    packet.sat_cno_9 = sat_cno_9;
    packet.sat_cno_10 = sat_cno_10;
    packet.sat_cno_11 = sat_cno_11;
    packet.sat_cno_12 = sat_cno_12;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
#endif
}

/**
 * @brief Send a gps_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gps_command_send_struct(mavlink_channel_t chan, const mavlink_gps_command_t* gps_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gps_command_send(chan, gps_command->command, gps_command->year, gps_command->month, gps_command->day, gps_command->hour, gps_command->minute, gps_command->second, gps_command->nanosecond, gps_command->gps_status, gps_command->gps_key_status, gps_command->latitude, gps_command->longitude, gps_command->altitude, gps_command->ground_speed, gps_command->ground_course, gps_command->magnetic_deviation, gps_command->sat_cno_1, gps_command->sat_cno_2, gps_command->sat_cno_3, gps_command->sat_cno_4, gps_command->sat_cno_5, gps_command->sat_cno_6, gps_command->sat_cno_7, gps_command->sat_cno_8, gps_command->sat_cno_9, gps_command->sat_cno_10, gps_command->sat_cno_11, gps_command->sat_cno_12);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_COMMAND, (const char *)gps_command, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_GPS_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gps_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t command, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t second, uint32_t nanosecond, uint16_t gps_status, uint16_t gps_key_status, int32_t latitude, int32_t longitude, int16_t altitude, uint16_t ground_speed, int16_t ground_course, int16_t magnetic_deviation, uint8_t sat_cno_1, uint8_t sat_cno_2, uint8_t sat_cno_3, uint8_t sat_cno_4, uint8_t sat_cno_5, uint8_t sat_cno_6, uint8_t sat_cno_7, uint8_t sat_cno_8, uint8_t sat_cno_9, uint8_t sat_cno_10, uint8_t sat_cno_11, uint8_t sat_cno_12)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, nanosecond);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint16_t(buf, 12, year);
    _mav_put_uint16_t(buf, 14, gps_status);
    _mav_put_uint16_t(buf, 16, gps_key_status);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_uint16_t(buf, 20, ground_speed);
    _mav_put_int16_t(buf, 22, ground_course);
    _mav_put_int16_t(buf, 24, magnetic_deviation);
    _mav_put_uint8_t(buf, 26, command);
    _mav_put_uint8_t(buf, 27, month);
    _mav_put_uint8_t(buf, 28, day);
    _mav_put_uint8_t(buf, 29, hour);
    _mav_put_uint8_t(buf, 30, minute);
    _mav_put_uint8_t(buf, 31, second);
    _mav_put_uint8_t(buf, 32, sat_cno_1);
    _mav_put_uint8_t(buf, 33, sat_cno_2);
    _mav_put_uint8_t(buf, 34, sat_cno_3);
    _mav_put_uint8_t(buf, 35, sat_cno_4);
    _mav_put_uint8_t(buf, 36, sat_cno_5);
    _mav_put_uint8_t(buf, 37, sat_cno_6);
    _mav_put_uint8_t(buf, 38, sat_cno_7);
    _mav_put_uint8_t(buf, 39, sat_cno_8);
    _mav_put_uint8_t(buf, 40, sat_cno_9);
    _mav_put_uint8_t(buf, 41, sat_cno_10);
    _mav_put_uint8_t(buf, 42, sat_cno_11);
    _mav_put_uint8_t(buf, 43, sat_cno_12);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_COMMAND, buf, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
#else
    mavlink_gps_command_t *packet = (mavlink_gps_command_t *)msgbuf;
    packet->nanosecond = nanosecond;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->year = year;
    packet->gps_status = gps_status;
    packet->gps_key_status = gps_key_status;
    packet->altitude = altitude;
    packet->ground_speed = ground_speed;
    packet->ground_course = ground_course;
    packet->magnetic_deviation = magnetic_deviation;
    packet->command = command;
    packet->month = month;
    packet->day = day;
    packet->hour = hour;
    packet->minute = minute;
    packet->second = second;
    packet->sat_cno_1 = sat_cno_1;
    packet->sat_cno_2 = sat_cno_2;
    packet->sat_cno_3 = sat_cno_3;
    packet->sat_cno_4 = sat_cno_4;
    packet->sat_cno_5 = sat_cno_5;
    packet->sat_cno_6 = sat_cno_6;
    packet->sat_cno_7 = sat_cno_7;
    packet->sat_cno_8 = sat_cno_8;
    packet->sat_cno_9 = sat_cno_9;
    packet->sat_cno_10 = sat_cno_10;
    packet->sat_cno_11 = sat_cno_11;
    packet->sat_cno_12 = sat_cno_12;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_COMMAND, (const char *)packet, MAVLINK_MSG_ID_GPS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_GPS_COMMAND_LEN, MAVLINK_MSG_ID_GPS_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE GPS_COMMAND UNPACKING


/**
 * @brief Get field command from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field year from gps_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_gps_command_get_year(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field month from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_month(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field day from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_day(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field hour from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_hour(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field minute from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_minute(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field second from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_second(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field nanosecond from gps_command message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_gps_command_get_nanosecond(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field gps_status from gps_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_gps_command_get_gps_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field gps_key_status from gps_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_gps_command_get_gps_key_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field latitude from gps_command message
 *
 * @return 
 */
static inline int32_t mavlink_msg_gps_command_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field longitude from gps_command message
 *
 * @return 
 */
static inline int32_t mavlink_msg_gps_command_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field altitude from gps_command message
 *
 * @return 
 */
static inline int16_t mavlink_msg_gps_command_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field ground_speed from gps_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_gps_command_get_ground_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field ground_course from gps_command message
 *
 * @return 
 */
static inline int16_t mavlink_msg_gps_command_get_ground_course(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field magnetic_deviation from gps_command message
 *
 * @return 
 */
static inline int16_t mavlink_msg_gps_command_get_magnetic_deviation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field sat_cno_1 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field sat_cno_2 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field sat_cno_3 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field sat_cno_4 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field sat_cno_5 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field sat_cno_6 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field sat_cno_7 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field sat_cno_8 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field sat_cno_9 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field sat_cno_10 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field sat_cno_11 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field sat_cno_12 from gps_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_command_get_sat_cno_12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  43);
}

/**
 * @brief Decode a gps_command message into a struct
 *
 * @param msg The message to decode
 * @param gps_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_gps_command_decode(const mavlink_message_t* msg, mavlink_gps_command_t* gps_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gps_command->nanosecond = mavlink_msg_gps_command_get_nanosecond(msg);
    gps_command->latitude = mavlink_msg_gps_command_get_latitude(msg);
    gps_command->longitude = mavlink_msg_gps_command_get_longitude(msg);
    gps_command->year = mavlink_msg_gps_command_get_year(msg);
    gps_command->gps_status = mavlink_msg_gps_command_get_gps_status(msg);
    gps_command->gps_key_status = mavlink_msg_gps_command_get_gps_key_status(msg);
    gps_command->altitude = mavlink_msg_gps_command_get_altitude(msg);
    gps_command->ground_speed = mavlink_msg_gps_command_get_ground_speed(msg);
    gps_command->ground_course = mavlink_msg_gps_command_get_ground_course(msg);
    gps_command->magnetic_deviation = mavlink_msg_gps_command_get_magnetic_deviation(msg);
    gps_command->command = mavlink_msg_gps_command_get_command(msg);
    gps_command->month = mavlink_msg_gps_command_get_month(msg);
    gps_command->day = mavlink_msg_gps_command_get_day(msg);
    gps_command->hour = mavlink_msg_gps_command_get_hour(msg);
    gps_command->minute = mavlink_msg_gps_command_get_minute(msg);
    gps_command->second = mavlink_msg_gps_command_get_second(msg);
    gps_command->sat_cno_1 = mavlink_msg_gps_command_get_sat_cno_1(msg);
    gps_command->sat_cno_2 = mavlink_msg_gps_command_get_sat_cno_2(msg);
    gps_command->sat_cno_3 = mavlink_msg_gps_command_get_sat_cno_3(msg);
    gps_command->sat_cno_4 = mavlink_msg_gps_command_get_sat_cno_4(msg);
    gps_command->sat_cno_5 = mavlink_msg_gps_command_get_sat_cno_5(msg);
    gps_command->sat_cno_6 = mavlink_msg_gps_command_get_sat_cno_6(msg);
    gps_command->sat_cno_7 = mavlink_msg_gps_command_get_sat_cno_7(msg);
    gps_command->sat_cno_8 = mavlink_msg_gps_command_get_sat_cno_8(msg);
    gps_command->sat_cno_9 = mavlink_msg_gps_command_get_sat_cno_9(msg);
    gps_command->sat_cno_10 = mavlink_msg_gps_command_get_sat_cno_10(msg);
    gps_command->sat_cno_11 = mavlink_msg_gps_command_get_sat_cno_11(msg);
    gps_command->sat_cno_12 = mavlink_msg_gps_command_get_sat_cno_12(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GPS_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_GPS_COMMAND_LEN;
        memset(gps_command, 0, MAVLINK_MSG_ID_GPS_COMMAND_LEN);
    memcpy(gps_command, _MAV_PAYLOAD(msg), len);
#endif
}
