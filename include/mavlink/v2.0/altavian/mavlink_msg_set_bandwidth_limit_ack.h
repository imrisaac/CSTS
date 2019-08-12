#pragma once
// MESSAGE SET_BANDWIDTH_LIMIT_ACK PACKING

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK 238

MAVPACKED(
typedef struct __mavlink_set_bandwidth_limit_ack_t {
 uint16_t bit_rate; /*< Commanded bitrate of generated video (Kbps)*/
}) mavlink_set_bandwidth_limit_ack_t;

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN 2
#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN 2
#define MAVLINK_MSG_ID_238_LEN 2
#define MAVLINK_MSG_ID_238_MIN_LEN 2

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC 183
#define MAVLINK_MSG_ID_238_CRC 183



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT_ACK { \
    238, \
    "SET_BANDWIDTH_LIMIT_ACK", \
    1, \
    {  { "bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_set_bandwidth_limit_ack_t, bit_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT_ACK { \
    "SET_BANDWIDTH_LIMIT_ACK", \
    1, \
    {  { "bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_set_bandwidth_limit_ack_t, bit_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a set_bandwidth_limit_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN);
#else
    mavlink_set_bandwidth_limit_ack_t packet;
    packet.bit_rate = bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
}

/**
 * @brief Pack a set_bandwidth_limit_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN);
#else
    mavlink_set_bandwidth_limit_ack_t packet;
    packet.bit_rate = bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
}

/**
 * @brief Encode a set_bandwidth_limit_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_bandwidth_limit_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_bandwidth_limit_ack_t* set_bandwidth_limit_ack)
{
    return mavlink_msg_set_bandwidth_limit_ack_pack(system_id, component_id, msg, set_bandwidth_limit_ack->bit_rate);
}

/**
 * @brief Encode a set_bandwidth_limit_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_bandwidth_limit_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_bandwidth_limit_ack_t* set_bandwidth_limit_ack)
{
    return mavlink_msg_set_bandwidth_limit_ack_pack_chan(system_id, component_id, chan, msg, set_bandwidth_limit_ack->bit_rate);
}

/**
 * @brief Send a set_bandwidth_limit_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_bandwidth_limit_ack_send(mavlink_channel_t chan, uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK, buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
#else
    mavlink_set_bandwidth_limit_ack_t packet;
    packet.bit_rate = bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK, (const char *)&packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
#endif
}

/**
 * @brief Send a set_bandwidth_limit_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_bandwidth_limit_ack_send_struct(mavlink_channel_t chan, const mavlink_set_bandwidth_limit_ack_t* set_bandwidth_limit_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_bandwidth_limit_ack_send(chan, set_bandwidth_limit_ack->bit_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK, (const char *)set_bandwidth_limit_ack, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_bandwidth_limit_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK, buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
#else
    mavlink_set_bandwidth_limit_ack_t *packet = (mavlink_set_bandwidth_limit_ack_t *)msgbuf;
    packet->bit_rate = bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK, (const char *)packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_BANDWIDTH_LIMIT_ACK UNPACKING


/**
 * @brief Get field bit_rate from set_bandwidth_limit_ack message
 *
 * @return Commanded bitrate of generated video (Kbps)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_ack_get_bit_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a set_bandwidth_limit_ack message into a struct
 *
 * @param msg The message to decode
 * @param set_bandwidth_limit_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_bandwidth_limit_ack_decode(const mavlink_message_t* msg, mavlink_set_bandwidth_limit_ack_t* set_bandwidth_limit_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_bandwidth_limit_ack->bit_rate = mavlink_msg_set_bandwidth_limit_ack_get_bit_rate(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN? msg->len : MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN;
        memset(set_bandwidth_limit_ack, 0, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_ACK_LEN);
    memcpy(set_bandwidth_limit_ack, _MAV_PAYLOAD(msg), len);
#endif
}
