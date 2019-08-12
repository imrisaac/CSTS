#pragma once
// MESSAGE TARGET_WAYPOINT PACKING

#define MAVLINK_MSG_ID_TARGET_WAYPOINT 8

MAVPACKED(
typedef struct __mavlink_target_waypoint_t {
 int32_t latitude; /*< Latitude in RADIANS -PI/2 to PI/2 * 10E8.*/
 int32_t longitude; /*< Longitude in RADIANS -PI/2 to PI/2 * 10E8*/
 int16_t altitude; /*< Target Altitude in meters*/
 int16_t DTED; /*< Target DTED in meters*/
 uint16_t radius; /*< Orbit Radius of the waypoint in meters*/
 uint8_t index; /*< Target waypoint mission index*/
}) mavlink_target_waypoint_t;

#define MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN 15
#define MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN 15
#define MAVLINK_MSG_ID_8_LEN 15
#define MAVLINK_MSG_ID_8_MIN_LEN 15

#define MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC 179
#define MAVLINK_MSG_ID_8_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TARGET_WAYPOINT { \
    8, \
    "TARGET_WAYPOINT", \
    6, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_target_waypoint_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_target_waypoint_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_target_waypoint_t, altitude) }, \
         { "DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_target_waypoint_t, DTED) }, \
         { "radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_target_waypoint_t, radius) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_target_waypoint_t, index) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TARGET_WAYPOINT { \
    "TARGET_WAYPOINT", \
    6, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_target_waypoint_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_target_waypoint_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_target_waypoint_t, altitude) }, \
         { "DTED", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_target_waypoint_t, DTED) }, \
         { "radius", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_target_waypoint_t, radius) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_target_waypoint_t, index) }, \
         } \
}
#endif

/**
 * @brief Pack a target_waypoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index Target waypoint mission index
 * @param latitude Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param longitude Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param altitude Target Altitude in meters
 * @param DTED Target DTED in meters
 * @param radius Orbit Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_waypoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, int32_t latitude, int32_t longitude, int16_t altitude, int16_t DTED, uint16_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int16_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 10, DTED);
    _mav_put_uint16_t(buf, 12, radius);
    _mav_put_uint8_t(buf, 14, index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN);
#else
    mavlink_target_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.DTED = DTED;
    packet.radius = radius;
    packet.index = index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TARGET_WAYPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
}

/**
 * @brief Pack a target_waypoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index Target waypoint mission index
 * @param latitude Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param longitude Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param altitude Target Altitude in meters
 * @param DTED Target DTED in meters
 * @param radius Orbit Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_target_waypoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,int32_t latitude,int32_t longitude,int16_t altitude,int16_t DTED,uint16_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int16_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 10, DTED);
    _mav_put_uint16_t(buf, 12, radius);
    _mav_put_uint8_t(buf, 14, index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN);
#else
    mavlink_target_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.DTED = DTED;
    packet.radius = radius;
    packet.index = index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TARGET_WAYPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
}

/**
 * @brief Encode a target_waypoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param target_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_waypoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_target_waypoint_t* target_waypoint)
{
    return mavlink_msg_target_waypoint_pack(system_id, component_id, msg, target_waypoint->index, target_waypoint->latitude, target_waypoint->longitude, target_waypoint->altitude, target_waypoint->DTED, target_waypoint->radius);
}

/**
 * @brief Encode a target_waypoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_target_waypoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_target_waypoint_t* target_waypoint)
{
    return mavlink_msg_target_waypoint_pack_chan(system_id, component_id, chan, msg, target_waypoint->index, target_waypoint->latitude, target_waypoint->longitude, target_waypoint->altitude, target_waypoint->DTED, target_waypoint->radius);
}

/**
 * @brief Send a target_waypoint message
 * @param chan MAVLink channel to send the message
 *
 * @param index Target waypoint mission index
 * @param latitude Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 * @param longitude Longitude in RADIANS -PI/2 to PI/2 * 10E8
 * @param altitude Target Altitude in meters
 * @param DTED Target DTED in meters
 * @param radius Orbit Radius of the waypoint in meters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_target_waypoint_send(mavlink_channel_t chan, uint8_t index, int32_t latitude, int32_t longitude, int16_t altitude, int16_t DTED, uint16_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int16_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 10, DTED);
    _mav_put_uint16_t(buf, 12, radius);
    _mav_put_uint8_t(buf, 14, index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_WAYPOINT, buf, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
#else
    mavlink_target_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.DTED = DTED;
    packet.radius = radius;
    packet.index = index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_WAYPOINT, (const char *)&packet, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
#endif
}

/**
 * @brief Send a target_waypoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_target_waypoint_send_struct(mavlink_channel_t chan, const mavlink_target_waypoint_t* target_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_target_waypoint_send(chan, target_waypoint->index, target_waypoint->latitude, target_waypoint->longitude, target_waypoint->altitude, target_waypoint->DTED, target_waypoint->radius);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_WAYPOINT, (const char *)target_waypoint, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_target_waypoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, int32_t latitude, int32_t longitude, int16_t altitude, int16_t DTED, uint16_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int16_t(buf, 8, altitude);
    _mav_put_int16_t(buf, 10, DTED);
    _mav_put_uint16_t(buf, 12, radius);
    _mav_put_uint8_t(buf, 14, index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_WAYPOINT, buf, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
#else
    mavlink_target_waypoint_t *packet = (mavlink_target_waypoint_t *)msgbuf;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude = altitude;
    packet->DTED = DTED;
    packet->radius = radius;
    packet->index = index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TARGET_WAYPOINT, (const char *)packet, MAVLINK_MSG_ID_TARGET_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN, MAVLINK_MSG_ID_TARGET_WAYPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE TARGET_WAYPOINT UNPACKING


/**
 * @brief Get field index from target_waypoint message
 *
 * @return Target waypoint mission index
 */
static inline uint8_t mavlink_msg_target_waypoint_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field latitude from target_waypoint message
 *
 * @return Latitude in RADIANS -PI/2 to PI/2 * 10E8.
 */
static inline int32_t mavlink_msg_target_waypoint_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field longitude from target_waypoint message
 *
 * @return Longitude in RADIANS -PI/2 to PI/2 * 10E8
 */
static inline int32_t mavlink_msg_target_waypoint_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field altitude from target_waypoint message
 *
 * @return Target Altitude in meters
 */
static inline int16_t mavlink_msg_target_waypoint_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field DTED from target_waypoint message
 *
 * @return Target DTED in meters
 */
static inline int16_t mavlink_msg_target_waypoint_get_DTED(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field radius from target_waypoint message
 *
 * @return Orbit Radius of the waypoint in meters
 */
static inline uint16_t mavlink_msg_target_waypoint_get_radius(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Decode a target_waypoint message into a struct
 *
 * @param msg The message to decode
 * @param target_waypoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_target_waypoint_decode(const mavlink_message_t* msg, mavlink_target_waypoint_t* target_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    target_waypoint->latitude = mavlink_msg_target_waypoint_get_latitude(msg);
    target_waypoint->longitude = mavlink_msg_target_waypoint_get_longitude(msg);
    target_waypoint->altitude = mavlink_msg_target_waypoint_get_altitude(msg);
    target_waypoint->DTED = mavlink_msg_target_waypoint_get_DTED(msg);
    target_waypoint->radius = mavlink_msg_target_waypoint_get_radius(msg);
    target_waypoint->index = mavlink_msg_target_waypoint_get_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN? msg->len : MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN;
        memset(target_waypoint, 0, MAVLINK_MSG_ID_TARGET_WAYPOINT_LEN);
    memcpy(target_waypoint, _MAV_PAYLOAD(msg), len);
#endif
}
