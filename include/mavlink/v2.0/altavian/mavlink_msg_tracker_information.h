#pragma once
// MESSAGE TRACKER_INFORMATION PACKING

#define MAVLINK_MSG_ID_TRACKER_INFORMATION 213

MAVPACKED(
typedef struct __mavlink_tracker_information_t {
 uint8_t status; /*< */
 int8_t offset_x; /*< */
 int8_t offset_y; /*< */
}) mavlink_tracker_information_t;

#define MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN 3
#define MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN 3
#define MAVLINK_MSG_ID_213_LEN 3
#define MAVLINK_MSG_ID_213_MIN_LEN 3

#define MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC 127
#define MAVLINK_MSG_ID_213_CRC 127



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TRACKER_INFORMATION { \
    213, \
    "TRACKER_INFORMATION", \
    3, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_tracker_information_t, status) }, \
         { "offset_x", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_tracker_information_t, offset_x) }, \
         { "offset_y", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_tracker_information_t, offset_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TRACKER_INFORMATION { \
    "TRACKER_INFORMATION", \
    3, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_tracker_information_t, status) }, \
         { "offset_x", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_tracker_information_t, offset_x) }, \
         { "offset_y", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_tracker_information_t, offset_y) }, \
         } \
}
#endif

/**
 * @brief Pack a tracker_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status 
 * @param offset_x 
 * @param offset_y 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tracker_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, int8_t offset_x, int8_t offset_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_int8_t(buf, 1, offset_x);
    _mav_put_int8_t(buf, 2, offset_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN);
#else
    mavlink_tracker_information_t packet;
    packet.status = status;
    packet.offset_x = offset_x;
    packet.offset_y = offset_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TRACKER_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
}

/**
 * @brief Pack a tracker_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status 
 * @param offset_x 
 * @param offset_y 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tracker_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,int8_t offset_x,int8_t offset_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_int8_t(buf, 1, offset_x);
    _mav_put_int8_t(buf, 2, offset_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN);
#else
    mavlink_tracker_information_t packet;
    packet.status = status;
    packet.offset_x = offset_x;
    packet.offset_y = offset_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TRACKER_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
}

/**
 * @brief Encode a tracker_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tracker_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tracker_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tracker_information_t* tracker_information)
{
    return mavlink_msg_tracker_information_pack(system_id, component_id, msg, tracker_information->status, tracker_information->offset_x, tracker_information->offset_y);
}

/**
 * @brief Encode a tracker_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tracker_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tracker_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tracker_information_t* tracker_information)
{
    return mavlink_msg_tracker_information_pack_chan(system_id, component_id, chan, msg, tracker_information->status, tracker_information->offset_x, tracker_information->offset_y);
}

/**
 * @brief Send a tracker_information message
 * @param chan MAVLink channel to send the message
 *
 * @param status 
 * @param offset_x 
 * @param offset_y 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tracker_information_send(mavlink_channel_t chan, uint8_t status, int8_t offset_x, int8_t offset_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_int8_t(buf, 1, offset_x);
    _mav_put_int8_t(buf, 2, offset_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKER_INFORMATION, buf, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
#else
    mavlink_tracker_information_t packet;
    packet.status = status;
    packet.offset_x = offset_x;
    packet.offset_y = offset_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKER_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a tracker_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_tracker_information_send_struct(mavlink_channel_t chan, const mavlink_tracker_information_t* tracker_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_tracker_information_send(chan, tracker_information->status, tracker_information->offset_x, tracker_information->offset_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKER_INFORMATION, (const char *)tracker_information, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tracker_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, int8_t offset_x, int8_t offset_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_int8_t(buf, 1, offset_x);
    _mav_put_int8_t(buf, 2, offset_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKER_INFORMATION, buf, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
#else
    mavlink_tracker_information_t *packet = (mavlink_tracker_information_t *)msgbuf;
    packet->status = status;
    packet->offset_x = offset_x;
    packet->offset_y = offset_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKER_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_TRACKER_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN, MAVLINK_MSG_ID_TRACKER_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE TRACKER_INFORMATION UNPACKING


/**
 * @brief Get field status from tracker_information message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_tracker_information_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field offset_x from tracker_information message
 *
 * @return 
 */
static inline int8_t mavlink_msg_tracker_information_get_offset_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field offset_y from tracker_information message
 *
 * @return 
 */
static inline int8_t mavlink_msg_tracker_information_get_offset_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Decode a tracker_information message into a struct
 *
 * @param msg The message to decode
 * @param tracker_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_tracker_information_decode(const mavlink_message_t* msg, mavlink_tracker_information_t* tracker_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    tracker_information->status = mavlink_msg_tracker_information_get_status(msg);
    tracker_information->offset_x = mavlink_msg_tracker_information_get_offset_x(msg);
    tracker_information->offset_y = mavlink_msg_tracker_information_get_offset_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN;
        memset(tracker_information, 0, MAVLINK_MSG_ID_TRACKER_INFORMATION_LEN);
    memcpy(tracker_information, _MAV_PAYLOAD(msg), len);
#endif
}
