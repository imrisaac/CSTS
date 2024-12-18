#pragma once
// MESSAGE AV_PAYLOAD_KLV_STREAM PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM 206

MAVPACKED(
typedef struct __mavlink_av_payload_klv_stream_t {
 uint8_t length; /*< number of actual bytes in KLV data field*/
 uint8_t klv_type; /*< */
 uint8_t klv_data[224]; /*< number of actual bytes in KLV data field*/
}) mavlink_av_payload_klv_stream_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN 226
#define MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN 226
#define MAVLINK_MSG_ID_206_LEN 226
#define MAVLINK_MSG_ID_206_MIN_LEN 226

#define MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC 194
#define MAVLINK_MSG_ID_206_CRC 194

#define MAVLINK_MSG_AV_PAYLOAD_KLV_STREAM_FIELD_KLV_DATA_LEN 224

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_KLV_STREAM { \
    206, \
    "AV_PAYLOAD_KLV_STREAM", \
    3, \
    {  { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_payload_klv_stream_t, length) }, \
         { "klv_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_payload_klv_stream_t, klv_type) }, \
         { "klv_data", NULL, MAVLINK_TYPE_UINT8_T, 224, 2, offsetof(mavlink_av_payload_klv_stream_t, klv_data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_KLV_STREAM { \
    "AV_PAYLOAD_KLV_STREAM", \
    3, \
    {  { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_payload_klv_stream_t, length) }, \
         { "klv_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_payload_klv_stream_t, klv_type) }, \
         { "klv_data", NULL, MAVLINK_TYPE_UINT8_T, 224, 2, offsetof(mavlink_av_payload_klv_stream_t, klv_data) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_klv_stream message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param length number of actual bytes in KLV data field
 * @param klv_type 
 * @param klv_data number of actual bytes in KLV data field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_klv_stream_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t length, uint8_t klv_type, const uint8_t *klv_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, length);
    _mav_put_uint8_t(buf, 1, klv_type);
    _mav_put_uint8_t_array(buf, 2, klv_data, 224);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN);
#else
    mavlink_av_payload_klv_stream_t packet;
    packet.length = length;
    packet.klv_type = klv_type;
    mav_array_memcpy(packet.klv_data, klv_data, sizeof(uint8_t)*224);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
}

/**
 * @brief Pack a av_payload_klv_stream message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param length number of actual bytes in KLV data field
 * @param klv_type 
 * @param klv_data number of actual bytes in KLV data field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_klv_stream_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t length,uint8_t klv_type,const uint8_t *klv_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, length);
    _mav_put_uint8_t(buf, 1, klv_type);
    _mav_put_uint8_t_array(buf, 2, klv_data, 224);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN);
#else
    mavlink_av_payload_klv_stream_t packet;
    packet.length = length;
    packet.klv_type = klv_type;
    mav_array_memcpy(packet.klv_data, klv_data, sizeof(uint8_t)*224);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
}

/**
 * @brief Encode a av_payload_klv_stream struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_klv_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_klv_stream_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_klv_stream_t* av_payload_klv_stream)
{
    return mavlink_msg_av_payload_klv_stream_pack(system_id, component_id, msg, av_payload_klv_stream->length, av_payload_klv_stream->klv_type, av_payload_klv_stream->klv_data);
}

/**
 * @brief Encode a av_payload_klv_stream struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_klv_stream C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_klv_stream_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_klv_stream_t* av_payload_klv_stream)
{
    return mavlink_msg_av_payload_klv_stream_pack_chan(system_id, component_id, chan, msg, av_payload_klv_stream->length, av_payload_klv_stream->klv_type, av_payload_klv_stream->klv_data);
}

/**
 * @brief Send a av_payload_klv_stream message
 * @param chan MAVLink channel to send the message
 *
 * @param length number of actual bytes in KLV data field
 * @param klv_type 
 * @param klv_data number of actual bytes in KLV data field
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_klv_stream_send(mavlink_channel_t chan, uint8_t length, uint8_t klv_type, const uint8_t *klv_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN];
    _mav_put_uint8_t(buf, 0, length);
    _mav_put_uint8_t(buf, 1, klv_type);
    _mav_put_uint8_t_array(buf, 2, klv_data, 224);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM, buf, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
#else
    mavlink_av_payload_klv_stream_t packet;
    packet.length = length;
    packet.klv_type = klv_type;
    mav_array_memcpy(packet.klv_data, klv_data, sizeof(uint8_t)*224);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
#endif
}

/**
 * @brief Send a av_payload_klv_stream message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_klv_stream_send_struct(mavlink_channel_t chan, const mavlink_av_payload_klv_stream_t* av_payload_klv_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_klv_stream_send(chan, av_payload_klv_stream->length, av_payload_klv_stream->klv_type, av_payload_klv_stream->klv_data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM, (const char *)av_payload_klv_stream, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_klv_stream_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t length, uint8_t klv_type, const uint8_t *klv_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, length);
    _mav_put_uint8_t(buf, 1, klv_type);
    _mav_put_uint8_t_array(buf, 2, klv_data, 224);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM, buf, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
#else
    mavlink_av_payload_klv_stream_t *packet = (mavlink_av_payload_klv_stream_t *)msgbuf;
    packet->length = length;
    packet->klv_type = klv_type;
    mav_array_memcpy(packet->klv_data, klv_data, sizeof(uint8_t)*224);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_KLV_STREAM UNPACKING


/**
 * @brief Get field length from av_payload_klv_stream message
 *
 * @return number of actual bytes in KLV data field
 */
static inline uint8_t mavlink_msg_av_payload_klv_stream_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field klv_type from av_payload_klv_stream message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_av_payload_klv_stream_get_klv_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field klv_data from av_payload_klv_stream message
 *
 * @return number of actual bytes in KLV data field
 */
static inline uint16_t mavlink_msg_av_payload_klv_stream_get_klv_data(const mavlink_message_t* msg, uint8_t *klv_data)
{
    return _MAV_RETURN_uint8_t_array(msg, klv_data, 224,  2);
}

/**
 * @brief Decode a av_payload_klv_stream message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_klv_stream C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_klv_stream_decode(const mavlink_message_t* msg, mavlink_av_payload_klv_stream_t* av_payload_klv_stream)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_klv_stream->length = mavlink_msg_av_payload_klv_stream_get_length(msg);
    av_payload_klv_stream->klv_type = mavlink_msg_av_payload_klv_stream_get_klv_type(msg);
    mavlink_msg_av_payload_klv_stream_get_klv_data(msg, av_payload_klv_stream->klv_data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN;
        memset(av_payload_klv_stream, 0, MAVLINK_MSG_ID_AV_PAYLOAD_KLV_STREAM_LEN);
    memcpy(av_payload_klv_stream, _MAV_PAYLOAD(msg), len);
#endif
}
