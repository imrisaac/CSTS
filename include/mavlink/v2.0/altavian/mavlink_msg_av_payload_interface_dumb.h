#pragma once
// MESSAGE AV_PAYLOAD_INTERFACE_DUMB PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB 208

MAVPACKED(
typedef struct __mavlink_av_payload_interface_dumb_t {
 uint8_t command_type; /*< */
 uint8_t payload_command; /*< See PAYLOAD_COMMANDS enum.*/
}) mavlink_av_payload_interface_dumb_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN 2
#define MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN 2
#define MAVLINK_MSG_ID_208_LEN 2
#define MAVLINK_MSG_ID_208_MIN_LEN 2

#define MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC 91
#define MAVLINK_MSG_ID_208_CRC 91



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_INTERFACE_DUMB { \
    208, \
    "AV_PAYLOAD_INTERFACE_DUMB", \
    2, \
    {  { "command_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_payload_interface_dumb_t, command_type) }, \
         { "payload_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_payload_interface_dumb_t, payload_command) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_INTERFACE_DUMB { \
    "AV_PAYLOAD_INTERFACE_DUMB", \
    2, \
    {  { "command_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_payload_interface_dumb_t, command_type) }, \
         { "payload_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_payload_interface_dumb_t, payload_command) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_interface_dumb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_type 
 * @param payload_command See PAYLOAD_COMMANDS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_interface_dumb_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t command_type, uint8_t payload_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN];
    _mav_put_uint8_t(buf, 0, command_type);
    _mav_put_uint8_t(buf, 1, payload_command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN);
#else
    mavlink_av_payload_interface_dumb_t packet;
    packet.command_type = command_type;
    packet.payload_command = payload_command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
}

/**
 * @brief Pack a av_payload_interface_dumb message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_type 
 * @param payload_command See PAYLOAD_COMMANDS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_interface_dumb_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t command_type,uint8_t payload_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN];
    _mav_put_uint8_t(buf, 0, command_type);
    _mav_put_uint8_t(buf, 1, payload_command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN);
#else
    mavlink_av_payload_interface_dumb_t packet;
    packet.command_type = command_type;
    packet.payload_command = payload_command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
}

/**
 * @brief Encode a av_payload_interface_dumb struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_interface_dumb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_interface_dumb_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_interface_dumb_t* av_payload_interface_dumb)
{
    return mavlink_msg_av_payload_interface_dumb_pack(system_id, component_id, msg, av_payload_interface_dumb->command_type, av_payload_interface_dumb->payload_command);
}

/**
 * @brief Encode a av_payload_interface_dumb struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_interface_dumb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_interface_dumb_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_interface_dumb_t* av_payload_interface_dumb)
{
    return mavlink_msg_av_payload_interface_dumb_pack_chan(system_id, component_id, chan, msg, av_payload_interface_dumb->command_type, av_payload_interface_dumb->payload_command);
}

/**
 * @brief Send a av_payload_interface_dumb message
 * @param chan MAVLink channel to send the message
 *
 * @param command_type 
 * @param payload_command See PAYLOAD_COMMANDS enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_interface_dumb_send(mavlink_channel_t chan, uint8_t command_type, uint8_t payload_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN];
    _mav_put_uint8_t(buf, 0, command_type);
    _mav_put_uint8_t(buf, 1, payload_command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB, buf, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
#else
    mavlink_av_payload_interface_dumb_t packet;
    packet.command_type = command_type;
    packet.payload_command = payload_command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
#endif
}

/**
 * @brief Send a av_payload_interface_dumb message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_interface_dumb_send_struct(mavlink_channel_t chan, const mavlink_av_payload_interface_dumb_t* av_payload_interface_dumb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_interface_dumb_send(chan, av_payload_interface_dumb->command_type, av_payload_interface_dumb->payload_command);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB, (const char *)av_payload_interface_dumb, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_interface_dumb_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t command_type, uint8_t payload_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, command_type);
    _mav_put_uint8_t(buf, 1, payload_command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB, buf, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
#else
    mavlink_av_payload_interface_dumb_t *packet = (mavlink_av_payload_interface_dumb_t *)msgbuf;
    packet->command_type = command_type;
    packet->payload_command = payload_command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_INTERFACE_DUMB UNPACKING


/**
 * @brief Get field command_type from av_payload_interface_dumb message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_av_payload_interface_dumb_get_command_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field payload_command from av_payload_interface_dumb message
 *
 * @return See PAYLOAD_COMMANDS enum.
 */
static inline uint8_t mavlink_msg_av_payload_interface_dumb_get_payload_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a av_payload_interface_dumb message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_interface_dumb C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_interface_dumb_decode(const mavlink_message_t* msg, mavlink_av_payload_interface_dumb_t* av_payload_interface_dumb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_interface_dumb->command_type = mavlink_msg_av_payload_interface_dumb_get_command_type(msg);
    av_payload_interface_dumb->payload_command = mavlink_msg_av_payload_interface_dumb_get_payload_command(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN;
        memset(av_payload_interface_dumb, 0, MAVLINK_MSG_ID_AV_PAYLOAD_INTERFACE_DUMB_LEN);
    memcpy(av_payload_interface_dumb, _MAV_PAYLOAD(msg), len);
#endif
}
