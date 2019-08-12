#pragma once
// MESSAGE PAYLOAD_ACK PACKING

#define MAVLINK_MSG_ID_PAYLOAD_ACK 219

MAVPACKED(
typedef struct __mavlink_payload_ack_t {
 uint16_t command; /*< Command ID (of acknowledged command).*/
 uint8_t result; /*< Result of command.*/
}) mavlink_payload_ack_t;

#define MAVLINK_MSG_ID_PAYLOAD_ACK_LEN 3
#define MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN 3
#define MAVLINK_MSG_ID_219_LEN 3
#define MAVLINK_MSG_ID_219_MIN_LEN 3

#define MAVLINK_MSG_ID_PAYLOAD_ACK_CRC 205
#define MAVLINK_MSG_ID_219_CRC 205



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_ACK { \
    219, \
    "PAYLOAD_ACK", \
    2, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_ack_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_ack_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_ACK { \
    "PAYLOAD_ACK", \
    2, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_ack_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_ack_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command Command ID (of acknowledged command).
 * @param result Result of command.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN);
#else
    mavlink_payload_ack_t packet;
    packet.command = command;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
}

/**
 * @brief Pack a payload_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command Command ID (of acknowledged command).
 * @param result Result of command.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN);
#else
    mavlink_payload_ack_t packet;
    packet.command = command;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
}

/**
 * @brief Encode a payload_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_ack_t* payload_ack)
{
    return mavlink_msg_payload_ack_pack(system_id, component_id, msg, payload_ack->command, payload_ack->result);
}

/**
 * @brief Encode a payload_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_ack_t* payload_ack)
{
    return mavlink_msg_payload_ack_pack_chan(system_id, component_id, chan, msg, payload_ack->command, payload_ack->result);
}

/**
 * @brief Send a payload_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param command Command ID (of acknowledged command).
 * @param result Result of command.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_ack_send(mavlink_channel_t chan, uint16_t command, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_ACK_LEN];
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_ACK, buf, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
#else
    mavlink_payload_ack_t packet;
    packet.command = command;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_ACK, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
#endif
}

/**
 * @brief Send a payload_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_ack_send_struct(mavlink_channel_t chan, const mavlink_payload_ack_t* payload_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_ack_send(chan, payload_ack->command, payload_ack->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_ACK, (const char *)payload_ack, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, command);
    _mav_put_uint8_t(buf, 2, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_ACK, buf, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
#else
    mavlink_payload_ack_t *packet = (mavlink_payload_ack_t *)msgbuf;
    packet->command = command;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_ACK, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_ACK_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN, MAVLINK_MSG_ID_PAYLOAD_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_ACK UNPACKING


/**
 * @brief Get field command from payload_ack message
 *
 * @return Command ID (of acknowledged command).
 */
static inline uint16_t mavlink_msg_payload_ack_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field result from payload_ack message
 *
 * @return Result of command.
 */
static inline uint8_t mavlink_msg_payload_ack_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a payload_ack message into a struct
 *
 * @param msg The message to decode
 * @param payload_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_ack_decode(const mavlink_message_t* msg, mavlink_payload_ack_t* payload_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_ack->command = mavlink_msg_payload_ack_get_command(msg);
    payload_ack->result = mavlink_msg_payload_ack_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_ACK_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_ACK_LEN;
        memset(payload_ack, 0, MAVLINK_MSG_ID_PAYLOAD_ACK_LEN);
    memcpy(payload_ack, _MAV_PAYLOAD(msg), len);
#endif
}
