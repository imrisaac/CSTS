#pragma once
// MESSAGE GPS_EXTENDED_INFO PACKING

#define MAVLINK_MSG_ID_GPS_EXTENDED_INFO 195

MAVPACKED(
typedef struct __mavlink_gps_extended_info_t {
 uint32_t avx_time; /*< (seconds * 100)*/
 uint16_t year; /*< */
 int16_t magnetic_deviation; /*< Magnetic Deviation of the GPS (radians * 1000) */
 uint8_t gps_status; /*< See GPS_STATUS_FLAGS*/
 uint8_t month; /*< */
 uint8_t day; /*< */
 uint8_t hour; /*< */
 uint8_t minute; /*< */
 uint8_t second; /*< */
}) mavlink_gps_extended_info_t;

#define MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN 14
#define MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN 14
#define MAVLINK_MSG_ID_195_LEN 14
#define MAVLINK_MSG_ID_195_MIN_LEN 14

#define MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC 35
#define MAVLINK_MSG_ID_195_CRC 35



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GPS_EXTENDED_INFO { \
    195, \
    "GPS_EXTENDED_INFO", \
    9, \
    {  { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gps_extended_info_t, avx_time) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gps_extended_info_t, year) }, \
         { "magnetic_deviation", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_gps_extended_info_t, magnetic_deviation) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gps_extended_info_t, gps_status) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_gps_extended_info_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_gps_extended_info_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_gps_extended_info_t, hour) }, \
         { "minute", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_gps_extended_info_t, minute) }, \
         { "second", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_gps_extended_info_t, second) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GPS_EXTENDED_INFO { \
    "GPS_EXTENDED_INFO", \
    9, \
    {  { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gps_extended_info_t, avx_time) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_gps_extended_info_t, year) }, \
         { "magnetic_deviation", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_gps_extended_info_t, magnetic_deviation) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gps_extended_info_t, gps_status) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_gps_extended_info_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_gps_extended_info_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_gps_extended_info_t, hour) }, \
         { "minute", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_gps_extended_info_t, minute) }, \
         { "second", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_gps_extended_info_t, second) }, \
         } \
}
#endif

/**
 * @brief Pack a gps_extended_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param avx_time (seconds * 100)
 * @param gps_status See GPS_STATUS_FLAGS
 * @param month 
 * @param day 
 * @param year 
 * @param hour 
 * @param minute 
 * @param second 
 * @param magnetic_deviation Magnetic Deviation of the GPS (radians * 1000) 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_extended_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t avx_time, uint8_t gps_status, uint8_t month, uint8_t day, uint16_t year, uint8_t hour, uint8_t minute, uint8_t second, int16_t magnetic_deviation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_uint16_t(buf, 4, year);
    _mav_put_int16_t(buf, 6, magnetic_deviation);
    _mav_put_uint8_t(buf, 8, gps_status);
    _mav_put_uint8_t(buf, 9, month);
    _mav_put_uint8_t(buf, 10, day);
    _mav_put_uint8_t(buf, 11, hour);
    _mav_put_uint8_t(buf, 12, minute);
    _mav_put_uint8_t(buf, 13, second);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN);
#else
    mavlink_gps_extended_info_t packet;
    packet.avx_time = avx_time;
    packet.year = year;
    packet.magnetic_deviation = magnetic_deviation;
    packet.gps_status = gps_status;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_EXTENDED_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
}

/**
 * @brief Pack a gps_extended_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param avx_time (seconds * 100)
 * @param gps_status See GPS_STATUS_FLAGS
 * @param month 
 * @param day 
 * @param year 
 * @param hour 
 * @param minute 
 * @param second 
 * @param magnetic_deviation Magnetic Deviation of the GPS (radians * 1000) 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_extended_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t avx_time,uint8_t gps_status,uint8_t month,uint8_t day,uint16_t year,uint8_t hour,uint8_t minute,uint8_t second,int16_t magnetic_deviation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_uint16_t(buf, 4, year);
    _mav_put_int16_t(buf, 6, magnetic_deviation);
    _mav_put_uint8_t(buf, 8, gps_status);
    _mav_put_uint8_t(buf, 9, month);
    _mav_put_uint8_t(buf, 10, day);
    _mav_put_uint8_t(buf, 11, hour);
    _mav_put_uint8_t(buf, 12, minute);
    _mav_put_uint8_t(buf, 13, second);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN);
#else
    mavlink_gps_extended_info_t packet;
    packet.avx_time = avx_time;
    packet.year = year;
    packet.magnetic_deviation = magnetic_deviation;
    packet.gps_status = gps_status;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_EXTENDED_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
}

/**
 * @brief Encode a gps_extended_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gps_extended_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_extended_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gps_extended_info_t* gps_extended_info)
{
    return mavlink_msg_gps_extended_info_pack(system_id, component_id, msg, gps_extended_info->avx_time, gps_extended_info->gps_status, gps_extended_info->month, gps_extended_info->day, gps_extended_info->year, gps_extended_info->hour, gps_extended_info->minute, gps_extended_info->second, gps_extended_info->magnetic_deviation);
}

/**
 * @brief Encode a gps_extended_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gps_extended_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_extended_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gps_extended_info_t* gps_extended_info)
{
    return mavlink_msg_gps_extended_info_pack_chan(system_id, component_id, chan, msg, gps_extended_info->avx_time, gps_extended_info->gps_status, gps_extended_info->month, gps_extended_info->day, gps_extended_info->year, gps_extended_info->hour, gps_extended_info->minute, gps_extended_info->second, gps_extended_info->magnetic_deviation);
}

/**
 * @brief Send a gps_extended_info message
 * @param chan MAVLink channel to send the message
 *
 * @param avx_time (seconds * 100)
 * @param gps_status See GPS_STATUS_FLAGS
 * @param month 
 * @param day 
 * @param year 
 * @param hour 
 * @param minute 
 * @param second 
 * @param magnetic_deviation Magnetic Deviation of the GPS (radians * 1000) 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gps_extended_info_send(mavlink_channel_t chan, uint32_t avx_time, uint8_t gps_status, uint8_t month, uint8_t day, uint16_t year, uint8_t hour, uint8_t minute, uint8_t second, int16_t magnetic_deviation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_uint16_t(buf, 4, year);
    _mav_put_int16_t(buf, 6, magnetic_deviation);
    _mav_put_uint8_t(buf, 8, gps_status);
    _mav_put_uint8_t(buf, 9, month);
    _mav_put_uint8_t(buf, 10, day);
    _mav_put_uint8_t(buf, 11, hour);
    _mav_put_uint8_t(buf, 12, minute);
    _mav_put_uint8_t(buf, 13, second);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO, buf, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
#else
    mavlink_gps_extended_info_t packet;
    packet.avx_time = avx_time;
    packet.year = year;
    packet.magnetic_deviation = magnetic_deviation;
    packet.gps_status = gps_status;
    packet.month = month;
    packet.day = day;
    packet.hour = hour;
    packet.minute = minute;
    packet.second = second;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO, (const char *)&packet, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
#endif
}

/**
 * @brief Send a gps_extended_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gps_extended_info_send_struct(mavlink_channel_t chan, const mavlink_gps_extended_info_t* gps_extended_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gps_extended_info_send(chan, gps_extended_info->avx_time, gps_extended_info->gps_status, gps_extended_info->month, gps_extended_info->day, gps_extended_info->year, gps_extended_info->hour, gps_extended_info->minute, gps_extended_info->second, gps_extended_info->magnetic_deviation);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO, (const char *)gps_extended_info, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gps_extended_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t avx_time, uint8_t gps_status, uint8_t month, uint8_t day, uint16_t year, uint8_t hour, uint8_t minute, uint8_t second, int16_t magnetic_deviation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_uint16_t(buf, 4, year);
    _mav_put_int16_t(buf, 6, magnetic_deviation);
    _mav_put_uint8_t(buf, 8, gps_status);
    _mav_put_uint8_t(buf, 9, month);
    _mav_put_uint8_t(buf, 10, day);
    _mav_put_uint8_t(buf, 11, hour);
    _mav_put_uint8_t(buf, 12, minute);
    _mav_put_uint8_t(buf, 13, second);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO, buf, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
#else
    mavlink_gps_extended_info_t *packet = (mavlink_gps_extended_info_t *)msgbuf;
    packet->avx_time = avx_time;
    packet->year = year;
    packet->magnetic_deviation = magnetic_deviation;
    packet->gps_status = gps_status;
    packet->month = month;
    packet->day = day;
    packet->hour = hour;
    packet->minute = minute;
    packet->second = second;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_EXTENDED_INFO, (const char *)packet, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_MIN_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE GPS_EXTENDED_INFO UNPACKING


/**
 * @brief Get field avx_time from gps_extended_info message
 *
 * @return (seconds * 100)
 */
static inline uint32_t mavlink_msg_gps_extended_info_get_avx_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field gps_status from gps_extended_info message
 *
 * @return See GPS_STATUS_FLAGS
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_gps_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field month from gps_extended_info message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_month(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field day from gps_extended_info message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_day(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field year from gps_extended_info message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_gps_extended_info_get_year(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field hour from gps_extended_info message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_hour(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field minute from gps_extended_info message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_minute(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field second from gps_extended_info message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_gps_extended_info_get_second(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field magnetic_deviation from gps_extended_info message
 *
 * @return Magnetic Deviation of the GPS (radians * 1000) 
 */
static inline int16_t mavlink_msg_gps_extended_info_get_magnetic_deviation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Decode a gps_extended_info message into a struct
 *
 * @param msg The message to decode
 * @param gps_extended_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_gps_extended_info_decode(const mavlink_message_t* msg, mavlink_gps_extended_info_t* gps_extended_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gps_extended_info->avx_time = mavlink_msg_gps_extended_info_get_avx_time(msg);
    gps_extended_info->year = mavlink_msg_gps_extended_info_get_year(msg);
    gps_extended_info->magnetic_deviation = mavlink_msg_gps_extended_info_get_magnetic_deviation(msg);
    gps_extended_info->gps_status = mavlink_msg_gps_extended_info_get_gps_status(msg);
    gps_extended_info->month = mavlink_msg_gps_extended_info_get_month(msg);
    gps_extended_info->day = mavlink_msg_gps_extended_info_get_day(msg);
    gps_extended_info->hour = mavlink_msg_gps_extended_info_get_hour(msg);
    gps_extended_info->minute = mavlink_msg_gps_extended_info_get_minute(msg);
    gps_extended_info->second = mavlink_msg_gps_extended_info_get_second(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN? msg->len : MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN;
        memset(gps_extended_info, 0, MAVLINK_MSG_ID_GPS_EXTENDED_INFO_LEN);
    memcpy(gps_extended_info, _MAV_PAYLOAD(msg), len);
#endif
}
