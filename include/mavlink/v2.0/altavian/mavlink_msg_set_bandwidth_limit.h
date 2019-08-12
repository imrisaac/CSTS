#pragma once
// MESSAGE SET_BANDWIDTH_LIMIT PACKING

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT 237

MAVPACKED(
typedef struct __mavlink_set_bandwidth_limit_t {
 uint16_t bit_rate; /*< Commanded bitrate of generated video (Kbps)*/
}) mavlink_set_bandwidth_limit_t;

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN 2
#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN 2
#define MAVLINK_MSG_ID_237_LEN 2
#define MAVLINK_MSG_ID_237_MIN_LEN 2

#define MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC 22
#define MAVLINK_MSG_ID_237_CRC 22



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT { \
    237, \
    "SET_BANDWIDTH_LIMIT", \
    1, \
    {  { "bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_set_bandwidth_limit_t, bit_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT { \
    "SET_BANDWIDTH_LIMIT", \
    1, \
    {  { "bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_set_bandwidth_limit_t, bit_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a set_bandwidth_limit message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN);
#else
    mavlink_set_bandwidth_limit_t packet;
    packet.bit_rate = bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
}

/**
 * @brief Pack a set_bandwidth_limit message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN);
#else
    mavlink_set_bandwidth_limit_t packet;
    packet.bit_rate = bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
}

/**
 * @brief Encode a set_bandwidth_limit struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_bandwidth_limit C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_bandwidth_limit_t* set_bandwidth_limit)
{
    return mavlink_msg_set_bandwidth_limit_pack(system_id, component_id, msg, set_bandwidth_limit->bit_rate);
}

/**
 * @brief Encode a set_bandwidth_limit struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_bandwidth_limit C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_bandwidth_limit_t* set_bandwidth_limit)
{
    return mavlink_msg_set_bandwidth_limit_pack_chan(system_id, component_id, chan, msg, set_bandwidth_limit->bit_rate);
}

/**
 * @brief Send a set_bandwidth_limit message
 * @param chan MAVLink channel to send the message
 *
 * @param bit_rate Commanded bitrate of generated video (Kbps)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_bandwidth_limit_send(mavlink_channel_t chan, uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN];
    _mav_put_uint16_t(buf, 0, bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT, buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
#else
    mavlink_set_bandwidth_limit_t packet;
    packet.bit_rate = bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT, (const char *)&packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
#endif
}

/**
 * @brief Send a set_bandwidth_limit message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_bandwidth_limit_send_struct(mavlink_channel_t chan, const mavlink_set_bandwidth_limit_t* set_bandwidth_limit)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_bandwidth_limit_send(chan, set_bandwidth_limit->bit_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT, (const char *)set_bandwidth_limit, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_bandwidth_limit_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT, buf, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
#else
    mavlink_set_bandwidth_limit_t *packet = (mavlink_set_bandwidth_limit_t *)msgbuf;
    packet->bit_rate = bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT, (const char *)packet, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_MIN_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_BANDWIDTH_LIMIT UNPACKING


/**
 * @brief Get field bit_rate from set_bandwidth_limit message
 *
 * @return Commanded bitrate of generated video (Kbps)
 */
static inline uint16_t mavlink_msg_set_bandwidth_limit_get_bit_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a set_bandwidth_limit message into a struct
 *
 * @param msg The message to decode
 * @param set_bandwidth_limit C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_bandwidth_limit_decode(const mavlink_message_t* msg, mavlink_set_bandwidth_limit_t* set_bandwidth_limit)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_bandwidth_limit->bit_rate = mavlink_msg_set_bandwidth_limit_get_bit_rate(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN? msg->len : MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN;
        memset(set_bandwidth_limit, 0, MAVLINK_MSG_ID_SET_BANDWIDTH_LIMIT_LEN);
    memcpy(set_bandwidth_limit, _MAV_PAYLOAD(msg), len);
#endif
}
