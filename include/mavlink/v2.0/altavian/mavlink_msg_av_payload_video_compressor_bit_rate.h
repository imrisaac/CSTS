#pragma once
// MESSAGE AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE 207

MAVPACKED(
typedef struct __mavlink_av_payload_video_compressor_bit_rate_t {
 uint16_t output_bit_rate; /*< Output bit-rate in bits/second*1000*/
}) mavlink_av_payload_video_compressor_bit_rate_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN 2
#define MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN 2
#define MAVLINK_MSG_ID_207_LEN 2
#define MAVLINK_MSG_ID_207_MIN_LEN 2

#define MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC 173
#define MAVLINK_MSG_ID_207_CRC 173



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE { \
    207, \
    "AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE", \
    1, \
    {  { "output_bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_payload_video_compressor_bit_rate_t, output_bit_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE { \
    "AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE", \
    1, \
    {  { "output_bit_rate", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_payload_video_compressor_bit_rate_t, output_bit_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_video_compressor_bit_rate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param output_bit_rate Output bit-rate in bits/second*1000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_video_compressor_bit_rate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t output_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN];
    _mav_put_uint16_t(buf, 0, output_bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN);
#else
    mavlink_av_payload_video_compressor_bit_rate_t packet;
    packet.output_bit_rate = output_bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
}

/**
 * @brief Pack a av_payload_video_compressor_bit_rate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param output_bit_rate Output bit-rate in bits/second*1000
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_video_compressor_bit_rate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t output_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN];
    _mav_put_uint16_t(buf, 0, output_bit_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN);
#else
    mavlink_av_payload_video_compressor_bit_rate_t packet;
    packet.output_bit_rate = output_bit_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
}

/**
 * @brief Encode a av_payload_video_compressor_bit_rate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_video_compressor_bit_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_video_compressor_bit_rate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_video_compressor_bit_rate_t* av_payload_video_compressor_bit_rate)
{
    return mavlink_msg_av_payload_video_compressor_bit_rate_pack(system_id, component_id, msg, av_payload_video_compressor_bit_rate->output_bit_rate);
}

/**
 * @brief Encode a av_payload_video_compressor_bit_rate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_video_compressor_bit_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_video_compressor_bit_rate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_video_compressor_bit_rate_t* av_payload_video_compressor_bit_rate)
{
    return mavlink_msg_av_payload_video_compressor_bit_rate_pack_chan(system_id, component_id, chan, msg, av_payload_video_compressor_bit_rate->output_bit_rate);
}

/**
 * @brief Send a av_payload_video_compressor_bit_rate message
 * @param chan MAVLink channel to send the message
 *
 * @param output_bit_rate Output bit-rate in bits/second*1000
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_video_compressor_bit_rate_send(mavlink_channel_t chan, uint16_t output_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN];
    _mav_put_uint16_t(buf, 0, output_bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, buf, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
#else
    mavlink_av_payload_video_compressor_bit_rate_t packet;
    packet.output_bit_rate = output_bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
#endif
}

/**
 * @brief Send a av_payload_video_compressor_bit_rate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_video_compressor_bit_rate_send_struct(mavlink_channel_t chan, const mavlink_av_payload_video_compressor_bit_rate_t* av_payload_video_compressor_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_video_compressor_bit_rate_send(chan, av_payload_video_compressor_bit_rate->output_bit_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, (const char *)av_payload_video_compressor_bit_rate, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_video_compressor_bit_rate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t output_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, output_bit_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, buf, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
#else
    mavlink_av_payload_video_compressor_bit_rate_t *packet = (mavlink_av_payload_video_compressor_bit_rate_t *)msgbuf;
    packet->output_bit_rate = output_bit_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE UNPACKING


/**
 * @brief Get field output_bit_rate from av_payload_video_compressor_bit_rate message
 *
 * @return Output bit-rate in bits/second*1000
 */
static inline uint16_t mavlink_msg_av_payload_video_compressor_bit_rate_get_output_bit_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a av_payload_video_compressor_bit_rate message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_video_compressor_bit_rate C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_video_compressor_bit_rate_decode(const mavlink_message_t* msg, mavlink_av_payload_video_compressor_bit_rate_t* av_payload_video_compressor_bit_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_video_compressor_bit_rate->output_bit_rate = mavlink_msg_av_payload_video_compressor_bit_rate_get_output_bit_rate(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN;
        memset(av_payload_video_compressor_bit_rate, 0, MAVLINK_MSG_ID_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE_LEN);
    memcpy(av_payload_video_compressor_bit_rate, _MAV_PAYLOAD(msg), len);
#endif
}
