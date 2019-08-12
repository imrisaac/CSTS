#pragma once
// MESSAGE CFOV PACKING

#define MAVLINK_MSG_ID_CFOV 239

MAVPACKED(
typedef struct __mavlink_cfov_t {
 uint32_t avx_time; /*< (seconds * 1000)*/
 int32_t latitude; /*< Latitude of CFOV*/
 int32_t longitude; /*< Longitude of CFOV*/
 int16_t heading; /*< */
 int16_t depression; /*< */
 int16_t roll; /*< */
 int16_t range; /*< */
 int16_t terrain_altitude; /*< */
}) mavlink_cfov_t;

#define MAVLINK_MSG_ID_CFOV_LEN 22
#define MAVLINK_MSG_ID_CFOV_MIN_LEN 22
#define MAVLINK_MSG_ID_239_LEN 22
#define MAVLINK_MSG_ID_239_MIN_LEN 22

#define MAVLINK_MSG_ID_CFOV_CRC 47
#define MAVLINK_MSG_ID_239_CRC 47



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CFOV { \
    239, \
    "CFOV", \
    8, \
    {  { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cfov_t, avx_time) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_cfov_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_cfov_t, longitude) }, \
         { "heading", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_cfov_t, heading) }, \
         { "depression", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_cfov_t, depression) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_cfov_t, roll) }, \
         { "range", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_cfov_t, range) }, \
         { "terrain_altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_cfov_t, terrain_altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CFOV { \
    "CFOV", \
    8, \
    {  { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cfov_t, avx_time) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_cfov_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_cfov_t, longitude) }, \
         { "heading", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_cfov_t, heading) }, \
         { "depression", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_cfov_t, depression) }, \
         { "roll", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_cfov_t, roll) }, \
         { "range", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_cfov_t, range) }, \
         { "terrain_altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_cfov_t, terrain_altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a cfov message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param avx_time (seconds * 1000)
 * @param latitude Latitude of CFOV
 * @param longitude Longitude of CFOV
 * @param heading 
 * @param depression 
 * @param roll 
 * @param range 
 * @param terrain_altitude 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cfov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t avx_time, int32_t latitude, int32_t longitude, int16_t heading, int16_t depression, int16_t roll, int16_t range, int16_t terrain_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_int16_t(buf, 12, heading);
    _mav_put_int16_t(buf, 14, depression);
    _mav_put_int16_t(buf, 16, roll);
    _mav_put_int16_t(buf, 18, range);
    _mav_put_int16_t(buf, 20, terrain_altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CFOV_LEN);
#else
    mavlink_cfov_t packet;
    packet.avx_time = avx_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.heading = heading;
    packet.depression = depression;
    packet.roll = roll;
    packet.range = range;
    packet.terrain_altitude = terrain_altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CFOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CFOV;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
}

/**
 * @brief Pack a cfov message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param avx_time (seconds * 1000)
 * @param latitude Latitude of CFOV
 * @param longitude Longitude of CFOV
 * @param heading 
 * @param depression 
 * @param roll 
 * @param range 
 * @param terrain_altitude 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cfov_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t avx_time,int32_t latitude,int32_t longitude,int16_t heading,int16_t depression,int16_t roll,int16_t range,int16_t terrain_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_int16_t(buf, 12, heading);
    _mav_put_int16_t(buf, 14, depression);
    _mav_put_int16_t(buf, 16, roll);
    _mav_put_int16_t(buf, 18, range);
    _mav_put_int16_t(buf, 20, terrain_altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CFOV_LEN);
#else
    mavlink_cfov_t packet;
    packet.avx_time = avx_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.heading = heading;
    packet.depression = depression;
    packet.roll = roll;
    packet.range = range;
    packet.terrain_altitude = terrain_altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CFOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CFOV;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
}

/**
 * @brief Encode a cfov struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cfov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cfov_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cfov_t* cfov)
{
    return mavlink_msg_cfov_pack(system_id, component_id, msg, cfov->avx_time, cfov->latitude, cfov->longitude, cfov->heading, cfov->depression, cfov->roll, cfov->range, cfov->terrain_altitude);
}

/**
 * @brief Encode a cfov struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cfov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cfov_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cfov_t* cfov)
{
    return mavlink_msg_cfov_pack_chan(system_id, component_id, chan, msg, cfov->avx_time, cfov->latitude, cfov->longitude, cfov->heading, cfov->depression, cfov->roll, cfov->range, cfov->terrain_altitude);
}

/**
 * @brief Send a cfov message
 * @param chan MAVLink channel to send the message
 *
 * @param avx_time (seconds * 1000)
 * @param latitude Latitude of CFOV
 * @param longitude Longitude of CFOV
 * @param heading 
 * @param depression 
 * @param roll 
 * @param range 
 * @param terrain_altitude 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cfov_send(mavlink_channel_t chan, uint32_t avx_time, int32_t latitude, int32_t longitude, int16_t heading, int16_t depression, int16_t roll, int16_t range, int16_t terrain_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_LEN];
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_int16_t(buf, 12, heading);
    _mav_put_int16_t(buf, 14, depression);
    _mav_put_int16_t(buf, 16, roll);
    _mav_put_int16_t(buf, 18, range);
    _mav_put_int16_t(buf, 20, terrain_altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV, buf, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
#else
    mavlink_cfov_t packet;
    packet.avx_time = avx_time;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.heading = heading;
    packet.depression = depression;
    packet.roll = roll;
    packet.range = range;
    packet.terrain_altitude = terrain_altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV, (const char *)&packet, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
#endif
}

/**
 * @brief Send a cfov message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cfov_send_struct(mavlink_channel_t chan, const mavlink_cfov_t* cfov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cfov_send(chan, cfov->avx_time, cfov->latitude, cfov->longitude, cfov->heading, cfov->depression, cfov->roll, cfov->range, cfov->terrain_altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV, (const char *)cfov, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
#endif
}

#if MAVLINK_MSG_ID_CFOV_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cfov_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t avx_time, int32_t latitude, int32_t longitude, int16_t heading, int16_t depression, int16_t roll, int16_t range, int16_t terrain_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, avx_time);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_int16_t(buf, 12, heading);
    _mav_put_int16_t(buf, 14, depression);
    _mav_put_int16_t(buf, 16, roll);
    _mav_put_int16_t(buf, 18, range);
    _mav_put_int16_t(buf, 20, terrain_altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV, buf, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
#else
    mavlink_cfov_t *packet = (mavlink_cfov_t *)msgbuf;
    packet->avx_time = avx_time;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->heading = heading;
    packet->depression = depression;
    packet->roll = roll;
    packet->range = range;
    packet->terrain_altitude = terrain_altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV, (const char *)packet, MAVLINK_MSG_ID_CFOV_MIN_LEN, MAVLINK_MSG_ID_CFOV_LEN, MAVLINK_MSG_ID_CFOV_CRC);
#endif
}
#endif

#endif

// MESSAGE CFOV UNPACKING


/**
 * @brief Get field avx_time from cfov message
 *
 * @return (seconds * 1000)
 */
static inline uint32_t mavlink_msg_cfov_get_avx_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field latitude from cfov message
 *
 * @return Latitude of CFOV
 */
static inline int32_t mavlink_msg_cfov_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field longitude from cfov message
 *
 * @return Longitude of CFOV
 */
static inline int32_t mavlink_msg_cfov_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field heading from cfov message
 *
 * @return 
 */
static inline int16_t mavlink_msg_cfov_get_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field depression from cfov message
 *
 * @return 
 */
static inline int16_t mavlink_msg_cfov_get_depression(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field roll from cfov message
 *
 * @return 
 */
static inline int16_t mavlink_msg_cfov_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field range from cfov message
 *
 * @return 
 */
static inline int16_t mavlink_msg_cfov_get_range(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field terrain_altitude from cfov message
 *
 * @return 
 */
static inline int16_t mavlink_msg_cfov_get_terrain_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Decode a cfov message into a struct
 *
 * @param msg The message to decode
 * @param cfov C-struct to decode the message contents into
 */
static inline void mavlink_msg_cfov_decode(const mavlink_message_t* msg, mavlink_cfov_t* cfov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cfov->avx_time = mavlink_msg_cfov_get_avx_time(msg);
    cfov->latitude = mavlink_msg_cfov_get_latitude(msg);
    cfov->longitude = mavlink_msg_cfov_get_longitude(msg);
    cfov->heading = mavlink_msg_cfov_get_heading(msg);
    cfov->depression = mavlink_msg_cfov_get_depression(msg);
    cfov->roll = mavlink_msg_cfov_get_roll(msg);
    cfov->range = mavlink_msg_cfov_get_range(msg);
    cfov->terrain_altitude = mavlink_msg_cfov_get_terrain_altitude(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CFOV_LEN? msg->len : MAVLINK_MSG_ID_CFOV_LEN;
        memset(cfov, 0, MAVLINK_MSG_ID_CFOV_LEN);
    memcpy(cfov, _MAV_PAYLOAD(msg), len);
#endif
}
