#pragma once
// MESSAGE CFOV_WAYPOINT PACKING

#define MAVLINK_MSG_ID_CFOV_WAYPOINT 240

MAVPACKED(
typedef struct __mavlink_cfov_waypoint_t {
 int32_t latitude; /*< Latitude in decimal degrees * 1E7.*/
 int32_t longitude; /*< Longitude in decimal degrees * 1E7.*/
 int32_t altitude; /*< Altitude in meters*/
 int32_t radius; /*< Radius of the waypoint in meters*/
}) mavlink_cfov_waypoint_t;

#define MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN 16
#define MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN 16
#define MAVLINK_MSG_ID_240_LEN 16
#define MAVLINK_MSG_ID_240_MIN_LEN 16

#define MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC 78
#define MAVLINK_MSG_ID_240_CRC 78



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CFOV_WAYPOINT { \
    240, \
    "CFOV_WAYPOINT", \
    4, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_cfov_waypoint_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_cfov_waypoint_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_cfov_waypoint_t, altitude) }, \
         { "radius", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_cfov_waypoint_t, radius) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CFOV_WAYPOINT { \
    "CFOV_WAYPOINT", \
    4, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_cfov_waypoint_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_cfov_waypoint_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_cfov_waypoint_t, altitude) }, \
         { "radius", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_cfov_waypoint_t, radius) }, \
         } \
}
#endif

/**
 * @brief Pack a cfov_waypoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude Latitude in decimal degrees * 1E7.
 * @param longitude Longitude in decimal degrees * 1E7.
 * @param altitude Altitude in meters
 * @param radius Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cfov_waypoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t latitude, int32_t longitude, int32_t altitude, int32_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int32_t(buf, 12, radius);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN);
#else
    mavlink_cfov_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.radius = radius;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CFOV_WAYPOINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
}

/**
 * @brief Pack a cfov_waypoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude Latitude in decimal degrees * 1E7.
 * @param longitude Longitude in decimal degrees * 1E7.
 * @param altitude Altitude in meters
 * @param radius Radius of the waypoint in meters
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cfov_waypoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t latitude,int32_t longitude,int32_t altitude,int32_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int32_t(buf, 12, radius);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN);
#else
    mavlink_cfov_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.radius = radius;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CFOV_WAYPOINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
}

/**
 * @brief Encode a cfov_waypoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cfov_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cfov_waypoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cfov_waypoint_t* cfov_waypoint)
{
    return mavlink_msg_cfov_waypoint_pack(system_id, component_id, msg, cfov_waypoint->latitude, cfov_waypoint->longitude, cfov_waypoint->altitude, cfov_waypoint->radius);
}

/**
 * @brief Encode a cfov_waypoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cfov_waypoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cfov_waypoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cfov_waypoint_t* cfov_waypoint)
{
    return mavlink_msg_cfov_waypoint_pack_chan(system_id, component_id, chan, msg, cfov_waypoint->latitude, cfov_waypoint->longitude, cfov_waypoint->altitude, cfov_waypoint->radius);
}

/**
 * @brief Send a cfov_waypoint message
 * @param chan MAVLink channel to send the message
 *
 * @param latitude Latitude in decimal degrees * 1E7.
 * @param longitude Longitude in decimal degrees * 1E7.
 * @param altitude Altitude in meters
 * @param radius Radius of the waypoint in meters
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cfov_waypoint_send(mavlink_channel_t chan, int32_t latitude, int32_t longitude, int32_t altitude, int32_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int32_t(buf, 12, radius);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV_WAYPOINT, buf, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
#else
    mavlink_cfov_waypoint_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.radius = radius;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV_WAYPOINT, (const char *)&packet, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
#endif
}

/**
 * @brief Send a cfov_waypoint message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cfov_waypoint_send_struct(mavlink_channel_t chan, const mavlink_cfov_waypoint_t* cfov_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cfov_waypoint_send(chan, cfov_waypoint->latitude, cfov_waypoint->longitude, cfov_waypoint->altitude, cfov_waypoint->radius);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV_WAYPOINT, (const char *)cfov_waypoint, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cfov_waypoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t latitude, int32_t longitude, int32_t altitude, int32_t radius)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_int32_t(buf, 12, radius);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV_WAYPOINT, buf, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
#else
    mavlink_cfov_waypoint_t *packet = (mavlink_cfov_waypoint_t *)msgbuf;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude = altitude;
    packet->radius = radius;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CFOV_WAYPOINT, (const char *)packet, MAVLINK_MSG_ID_CFOV_WAYPOINT_MIN_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN, MAVLINK_MSG_ID_CFOV_WAYPOINT_CRC);
#endif
}
#endif

#endif

// MESSAGE CFOV_WAYPOINT UNPACKING


/**
 * @brief Get field latitude from cfov_waypoint message
 *
 * @return Latitude in decimal degrees * 1E7.
 */
static inline int32_t mavlink_msg_cfov_waypoint_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field longitude from cfov_waypoint message
 *
 * @return Longitude in decimal degrees * 1E7.
 */
static inline int32_t mavlink_msg_cfov_waypoint_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field altitude from cfov_waypoint message
 *
 * @return Altitude in meters
 */
static inline int32_t mavlink_msg_cfov_waypoint_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field radius from cfov_waypoint message
 *
 * @return Radius of the waypoint in meters
 */
static inline int32_t mavlink_msg_cfov_waypoint_get_radius(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Decode a cfov_waypoint message into a struct
 *
 * @param msg The message to decode
 * @param cfov_waypoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_cfov_waypoint_decode(const mavlink_message_t* msg, mavlink_cfov_waypoint_t* cfov_waypoint)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cfov_waypoint->latitude = mavlink_msg_cfov_waypoint_get_latitude(msg);
    cfov_waypoint->longitude = mavlink_msg_cfov_waypoint_get_longitude(msg);
    cfov_waypoint->altitude = mavlink_msg_cfov_waypoint_get_altitude(msg);
    cfov_waypoint->radius = mavlink_msg_cfov_waypoint_get_radius(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN? msg->len : MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN;
        memset(cfov_waypoint, 0, MAVLINK_MSG_ID_CFOV_WAYPOINT_LEN);
    memcpy(cfov_waypoint, _MAV_PAYLOAD(msg), len);
#endif
}
