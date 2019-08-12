#pragma once
// MESSAGE SET_FILE_SYSTEM_BANDWIDTH PACKING

#define MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH 223

MAVPACKED(
typedef struct __mavlink_set_file_system_bandwidth_t {
 uint8_t version; /*< */
 uint8_t bandwidth_percent; /*< The percent of the badndwidth available to the payload that should be made available to the FMS.*/
}) mavlink_set_file_system_bandwidth_t;

#define MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN 2
#define MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN 2
#define MAVLINK_MSG_ID_223_LEN 2
#define MAVLINK_MSG_ID_223_MIN_LEN 2

#define MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC 214
#define MAVLINK_MSG_ID_223_CRC 214



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_FILE_SYSTEM_BANDWIDTH { \
    223, \
    "SET_FILE_SYSTEM_BANDWIDTH", \
    2, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_file_system_bandwidth_t, version) }, \
         { "bandwidth_percent", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_set_file_system_bandwidth_t, bandwidth_percent) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_FILE_SYSTEM_BANDWIDTH { \
    "SET_FILE_SYSTEM_BANDWIDTH", \
    2, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_set_file_system_bandwidth_t, version) }, \
         { "bandwidth_percent", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_set_file_system_bandwidth_t, bandwidth_percent) }, \
         } \
}
#endif

/**
 * @brief Pack a set_file_system_bandwidth message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param bandwidth_percent The percent of the badndwidth available to the payload that should be made available to the FMS.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_file_system_bandwidth_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, uint8_t bandwidth_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, bandwidth_percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN);
#else
    mavlink_set_file_system_bandwidth_t packet;
    packet.version = version;
    packet.bandwidth_percent = bandwidth_percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
}

/**
 * @brief Pack a set_file_system_bandwidth message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param bandwidth_percent The percent of the badndwidth available to the payload that should be made available to the FMS.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_file_system_bandwidth_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,uint8_t bandwidth_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, bandwidth_percent);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN);
#else
    mavlink_set_file_system_bandwidth_t packet;
    packet.version = version;
    packet.bandwidth_percent = bandwidth_percent;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
}

/**
 * @brief Encode a set_file_system_bandwidth struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_file_system_bandwidth C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_file_system_bandwidth_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_file_system_bandwidth_t* set_file_system_bandwidth)
{
    return mavlink_msg_set_file_system_bandwidth_pack(system_id, component_id, msg, set_file_system_bandwidth->version, set_file_system_bandwidth->bandwidth_percent);
}

/**
 * @brief Encode a set_file_system_bandwidth struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_file_system_bandwidth C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_file_system_bandwidth_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_file_system_bandwidth_t* set_file_system_bandwidth)
{
    return mavlink_msg_set_file_system_bandwidth_pack_chan(system_id, component_id, chan, msg, set_file_system_bandwidth->version, set_file_system_bandwidth->bandwidth_percent);
}

/**
 * @brief Send a set_file_system_bandwidth message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param bandwidth_percent The percent of the badndwidth available to the payload that should be made available to the FMS.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_file_system_bandwidth_send(mavlink_channel_t chan, uint8_t version, uint8_t bandwidth_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, bandwidth_percent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH, buf, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
#else
    mavlink_set_file_system_bandwidth_t packet;
    packet.version = version;
    packet.bandwidth_percent = bandwidth_percent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH, (const char *)&packet, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
#endif
}

/**
 * @brief Send a set_file_system_bandwidth message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_file_system_bandwidth_send_struct(mavlink_channel_t chan, const mavlink_set_file_system_bandwidth_t* set_file_system_bandwidth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_file_system_bandwidth_send(chan, set_file_system_bandwidth->version, set_file_system_bandwidth->bandwidth_percent);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH, (const char *)set_file_system_bandwidth, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_file_system_bandwidth_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, uint8_t bandwidth_percent)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, bandwidth_percent);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH, buf, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
#else
    mavlink_set_file_system_bandwidth_t *packet = (mavlink_set_file_system_bandwidth_t *)msgbuf;
    packet->version = version;
    packet->bandwidth_percent = bandwidth_percent;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH, (const char *)packet, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_MIN_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_FILE_SYSTEM_BANDWIDTH UNPACKING


/**
 * @brief Get field version from set_file_system_bandwidth message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_set_file_system_bandwidth_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field bandwidth_percent from set_file_system_bandwidth message
 *
 * @return The percent of the badndwidth available to the payload that should be made available to the FMS.
 */
static inline uint8_t mavlink_msg_set_file_system_bandwidth_get_bandwidth_percent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a set_file_system_bandwidth message into a struct
 *
 * @param msg The message to decode
 * @param set_file_system_bandwidth C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_file_system_bandwidth_decode(const mavlink_message_t* msg, mavlink_set_file_system_bandwidth_t* set_file_system_bandwidth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_file_system_bandwidth->version = mavlink_msg_set_file_system_bandwidth_get_version(msg);
    set_file_system_bandwidth->bandwidth_percent = mavlink_msg_set_file_system_bandwidth_get_bandwidth_percent(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN? msg->len : MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN;
        memset(set_file_system_bandwidth, 0, MAVLINK_MSG_ID_SET_FILE_SYSTEM_BANDWIDTH_LEN);
    memcpy(set_file_system_bandwidth, _MAV_PAYLOAD(msg), len);
#endif
}
