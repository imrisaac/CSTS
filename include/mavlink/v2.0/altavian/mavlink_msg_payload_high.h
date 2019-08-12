#pragma once
// MESSAGE PAYLOAD_HIGH PACKING

#define MAVLINK_MSG_ID_PAYLOAD_HIGH 217

MAVPACKED(
typedef struct __mavlink_payload_high_t {
 uint16_t command; /*< Command ID (of command to send).*/
 uint8_t param1; /*< Parameter 1 (for the specific command).*/
 uint8_t param2; /*< Parameter 2 (for the specific command).*/
 uint8_t param3; /*< Parameter 3 (for the specific command).*/
 uint8_t param4; /*< Parameter 4 (for the specific command).*/
}) mavlink_payload_high_t;

#define MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN 6
#define MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN 6
#define MAVLINK_MSG_ID_217_LEN 6
#define MAVLINK_MSG_ID_217_MIN_LEN 6

#define MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC 181
#define MAVLINK_MSG_ID_217_CRC 181



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_HIGH { \
    217, \
    "PAYLOAD_HIGH", \
    5, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_high_t, command) }, \
         { "param1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_high_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_payload_high_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_payload_high_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_payload_high_t, param4) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_HIGH { \
    "PAYLOAD_HIGH", \
    5, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_high_t, command) }, \
         { "param1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_high_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_payload_high_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_payload_high_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_payload_high_t, param4) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_high message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_high_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint8_t param1, uint8_t param2, uint8_t param3, uint8_t param4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, param1);
    _mav_put_uint8_t(buf, 3, param2);
    _mav_put_uint8_t(buf, 4, param3);
    _mav_put_uint8_t(buf, 5, param4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN);
#else
    mavlink_payload_high_t packet;
    packet.command = command;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_HIGH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
}

/**
 * @brief Pack a payload_high message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_high_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint8_t param1,uint8_t param2,uint8_t param3,uint8_t param4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, param1);
    _mav_put_uint8_t(buf, 3, param2);
    _mav_put_uint8_t(buf, 4, param3);
    _mav_put_uint8_t(buf, 5, param4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN);
#else
    mavlink_payload_high_t packet;
    packet.command = command;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_HIGH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
}

/**
 * @brief Encode a payload_high struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_high C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_high_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_high_t* payload_high)
{
    return mavlink_msg_payload_high_pack(system_id, component_id, msg, payload_high->command, payload_high->param1, payload_high->param2, payload_high->param3, payload_high->param4);
}

/**
 * @brief Encode a payload_high struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_high C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_high_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_high_t* payload_high)
{
    return mavlink_msg_payload_high_pack_chan(system_id, component_id, chan, msg, payload_high->command, payload_high->param1, payload_high->param2, payload_high->param3, payload_high->param4);
}

/**
 * @brief Send a payload_high message
 * @param chan MAVLink channel to send the message
 *
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_high_send(mavlink_channel_t chan, uint16_t command, uint8_t param1, uint8_t param2, uint8_t param3, uint8_t param4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, param1);
    _mav_put_uint8_t(buf, 3, param2);
    _mav_put_uint8_t(buf, 4, param3);
    _mav_put_uint8_t(buf, 5, param4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_HIGH, buf, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
#else
    mavlink_payload_high_t packet;
    packet.command = command;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_HIGH, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
#endif
}

/**
 * @brief Send a payload_high message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_high_send_struct(mavlink_channel_t chan, const mavlink_payload_high_t* payload_high)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_high_send(chan, payload_high->command, payload_high->param1, payload_high->param2, payload_high->param3, payload_high->param4);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_HIGH, (const char *)payload_high, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_high_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint8_t param1, uint8_t param2, uint8_t param3, uint8_t param4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, param1);
    _mav_put_uint8_t(buf, 3, param2);
    _mav_put_uint8_t(buf, 4, param3);
    _mav_put_uint8_t(buf, 5, param4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_HIGH, buf, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
#else
    mavlink_payload_high_t *packet = (mavlink_payload_high_t *)msgbuf;
    packet->command = command;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_HIGH, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_HIGH_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN, MAVLINK_MSG_ID_PAYLOAD_HIGH_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_HIGH UNPACKING


/**
 * @brief Get field command from payload_high message
 *
 * @return Command ID (of command to send).
 */
static inline uint16_t mavlink_msg_payload_high_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field param1 from payload_high message
 *
 * @return Parameter 1 (for the specific command).
 */
static inline uint8_t mavlink_msg_payload_high_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field param2 from payload_high message
 *
 * @return Parameter 2 (for the specific command).
 */
static inline uint8_t mavlink_msg_payload_high_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field param3 from payload_high message
 *
 * @return Parameter 3 (for the specific command).
 */
static inline uint8_t mavlink_msg_payload_high_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field param4 from payload_high message
 *
 * @return Parameter 4 (for the specific command).
 */
static inline uint8_t mavlink_msg_payload_high_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a payload_high message into a struct
 *
 * @param msg The message to decode
 * @param payload_high C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_high_decode(const mavlink_message_t* msg, mavlink_payload_high_t* payload_high)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_high->command = mavlink_msg_payload_high_get_command(msg);
    payload_high->param1 = mavlink_msg_payload_high_get_param1(msg);
    payload_high->param2 = mavlink_msg_payload_high_get_param2(msg);
    payload_high->param3 = mavlink_msg_payload_high_get_param3(msg);
    payload_high->param4 = mavlink_msg_payload_high_get_param4(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN;
        memset(payload_high, 0, MAVLINK_MSG_ID_PAYLOAD_HIGH_LEN);
    memcpy(payload_high, _MAV_PAYLOAD(msg), len);
#endif
}
