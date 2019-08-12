#pragma once
// MESSAGE PAYLOAD_LOW PACKING

#define MAVLINK_MSG_ID_PAYLOAD_LOW 218

MAVPACKED(
typedef struct __mavlink_payload_low_t {
 uint32_t param1; /*< Parameter 1 (for the specific command).*/
 uint32_t param2; /*< Parameter 2 (for the specific command).*/
 uint32_t param3; /*< Parameter 3 (for the specific command).*/
 float param4; /*< Parameter 4 (for the specific command).*/
 float param5; /*< Parameter 5 (for the specific command).*/
 float param6; /*< Parameter 6 (for the specific command).*/
 float param7; /*< Parameter 7 (for the specific command).*/
 uint16_t command; /*< Command ID (of command to send).*/
}) mavlink_payload_low_t;

#define MAVLINK_MSG_ID_PAYLOAD_LOW_LEN 30
#define MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN 30
#define MAVLINK_MSG_ID_218_LEN 30
#define MAVLINK_MSG_ID_218_MIN_LEN 30

#define MAVLINK_MSG_ID_PAYLOAD_LOW_CRC 247
#define MAVLINK_MSG_ID_218_CRC 247



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_LOW { \
    218, \
    "PAYLOAD_LOW", \
    8, \
    {  { "param1", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_payload_low_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_payload_low_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_payload_low_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_payload_low_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_payload_low_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_payload_low_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_payload_low_t, param7) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_payload_low_t, command) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_LOW { \
    "PAYLOAD_LOW", \
    8, \
    {  { "param1", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_payload_low_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_payload_low_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_payload_low_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_payload_low_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_payload_low_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_payload_low_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_payload_low_t, param7) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_payload_low_t, command) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_low message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 * @param param5 Parameter 5 (for the specific command).
 * @param param6 Parameter 6 (for the specific command).
 * @param param7 Parameter 7 (for the specific command).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_low_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint32_t param1, uint32_t param2, uint32_t param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_LOW_LEN];
    _mav_put_uint32_t(buf, 0, param1);
    _mav_put_uint32_t(buf, 4, param2);
    _mav_put_uint32_t(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN);
#else
    mavlink_payload_low_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_LOW;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
}

/**
 * @brief Pack a payload_low message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 * @param param5 Parameter 5 (for the specific command).
 * @param param6 Parameter 6 (for the specific command).
 * @param param7 Parameter 7 (for the specific command).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_low_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint32_t param1,uint32_t param2,uint32_t param3,float param4,float param5,float param6,float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_LOW_LEN];
    _mav_put_uint32_t(buf, 0, param1);
    _mav_put_uint32_t(buf, 4, param2);
    _mav_put_uint32_t(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN);
#else
    mavlink_payload_low_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_LOW;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
}

/**
 * @brief Encode a payload_low struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_low C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_low_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_low_t* payload_low)
{
    return mavlink_msg_payload_low_pack(system_id, component_id, msg, payload_low->command, payload_low->param1, payload_low->param2, payload_low->param3, payload_low->param4, payload_low->param5, payload_low->param6, payload_low->param7);
}

/**
 * @brief Encode a payload_low struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_low C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_low_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_low_t* payload_low)
{
    return mavlink_msg_payload_low_pack_chan(system_id, component_id, chan, msg, payload_low->command, payload_low->param1, payload_low->param2, payload_low->param3, payload_low->param4, payload_low->param5, payload_low->param6, payload_low->param7);
}

/**
 * @brief Send a payload_low message
 * @param chan MAVLink channel to send the message
 *
 * @param command Command ID (of command to send).
 * @param param1 Parameter 1 (for the specific command).
 * @param param2 Parameter 2 (for the specific command).
 * @param param3 Parameter 3 (for the specific command).
 * @param param4 Parameter 4 (for the specific command).
 * @param param5 Parameter 5 (for the specific command).
 * @param param6 Parameter 6 (for the specific command).
 * @param param7 Parameter 7 (for the specific command).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_low_send(mavlink_channel_t chan, uint16_t command, uint32_t param1, uint32_t param2, uint32_t param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_LOW_LEN];
    _mav_put_uint32_t(buf, 0, param1);
    _mav_put_uint32_t(buf, 4, param2);
    _mav_put_uint32_t(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_LOW, buf, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
#else
    mavlink_payload_low_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_LOW, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
#endif
}

/**
 * @brief Send a payload_low message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_low_send_struct(mavlink_channel_t chan, const mavlink_payload_low_t* payload_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_low_send(chan, payload_low->command, payload_low->param1, payload_low->param2, payload_low->param3, payload_low->param4, payload_low->param5, payload_low->param6, payload_low->param7);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_LOW, (const char *)payload_low, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_LOW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_low_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint32_t param1, uint32_t param2, uint32_t param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, param1);
    _mav_put_uint32_t(buf, 4, param2);
    _mav_put_uint32_t(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint16_t(buf, 28, command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_LOW, buf, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
#else
    mavlink_payload_low_t *packet = (mavlink_payload_low_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->command = command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_LOW, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_LOW_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN, MAVLINK_MSG_ID_PAYLOAD_LOW_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_LOW UNPACKING


/**
 * @brief Get field command from payload_low message
 *
 * @return Command ID (of command to send).
 */
static inline uint16_t mavlink_msg_payload_low_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field param1 from payload_low message
 *
 * @return Parameter 1 (for the specific command).
 */
static inline uint32_t mavlink_msg_payload_low_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field param2 from payload_low message
 *
 * @return Parameter 2 (for the specific command).
 */
static inline uint32_t mavlink_msg_payload_low_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field param3 from payload_low message
 *
 * @return Parameter 3 (for the specific command).
 */
static inline uint32_t mavlink_msg_payload_low_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field param4 from payload_low message
 *
 * @return Parameter 4 (for the specific command).
 */
static inline float mavlink_msg_payload_low_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param5 from payload_low message
 *
 * @return Parameter 5 (for the specific command).
 */
static inline float mavlink_msg_payload_low_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param6 from payload_low message
 *
 * @return Parameter 6 (for the specific command).
 */
static inline float mavlink_msg_payload_low_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field param7 from payload_low message
 *
 * @return Parameter 7 (for the specific command).
 */
static inline float mavlink_msg_payload_low_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a payload_low message into a struct
 *
 * @param msg The message to decode
 * @param payload_low C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_low_decode(const mavlink_message_t* msg, mavlink_payload_low_t* payload_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_low->param1 = mavlink_msg_payload_low_get_param1(msg);
    payload_low->param2 = mavlink_msg_payload_low_get_param2(msg);
    payload_low->param3 = mavlink_msg_payload_low_get_param3(msg);
    payload_low->param4 = mavlink_msg_payload_low_get_param4(msg);
    payload_low->param5 = mavlink_msg_payload_low_get_param5(msg);
    payload_low->param6 = mavlink_msg_payload_low_get_param6(msg);
    payload_low->param7 = mavlink_msg_payload_low_get_param7(msg);
    payload_low->command = mavlink_msg_payload_low_get_command(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_LOW_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_LOW_LEN;
        memset(payload_low, 0, MAVLINK_MSG_ID_PAYLOAD_LOW_LEN);
    memcpy(payload_low, _MAV_PAYLOAD(msg), len);
#endif
}
