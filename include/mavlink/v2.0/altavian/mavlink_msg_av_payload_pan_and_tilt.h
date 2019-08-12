#pragma once
// MESSAGE AV_PAYLOAD_PAN_AND_TILT PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT 203

MAVPACKED(
typedef struct __mavlink_av_payload_pan_and_tilt_t {
 int16_t pan; /*< Set horizontal CFOV look angle offset with respect to center of camera focal plane. Positive right. Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000) */
 int16_t tilt; /*< Set horizontal CFOV look angle offset with respect to center of camera focal plane.	Positive right.	Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000)*/
}) mavlink_av_payload_pan_and_tilt_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN 4
#define MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN 4
#define MAVLINK_MSG_ID_203_LEN 4
#define MAVLINK_MSG_ID_203_MIN_LEN 4

#define MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC 136
#define MAVLINK_MSG_ID_203_CRC 136



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_PAN_AND_TILT { \
    203, \
    "AV_PAYLOAD_PAN_AND_TILT", \
    2, \
    {  { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_pan_and_tilt_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_pan_and_tilt_t, tilt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_PAN_AND_TILT { \
    "AV_PAYLOAD_PAN_AND_TILT", \
    2, \
    {  { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_pan_and_tilt_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_pan_and_tilt_t, tilt) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_pan_and_tilt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pan Set horizontal CFOV look angle offset with respect to center of camera focal plane. Positive right. Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000) 
 * @param tilt Set horizontal CFOV look angle offset with respect to center of camera focal plane.	Positive right.	Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_pan_and_tilt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN);
#else
    mavlink_av_payload_pan_and_tilt_t packet;
    packet.pan = pan;
    packet.tilt = tilt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
}

/**
 * @brief Pack a av_payload_pan_and_tilt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pan Set horizontal CFOV look angle offset with respect to center of camera focal plane. Positive right. Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000) 
 * @param tilt Set horizontal CFOV look angle offset with respect to center of camera focal plane.	Positive right.	Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_pan_and_tilt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t pan,int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN);
#else
    mavlink_av_payload_pan_and_tilt_t packet;
    packet.pan = pan;
    packet.tilt = tilt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
}

/**
 * @brief Encode a av_payload_pan_and_tilt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_pan_and_tilt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_pan_and_tilt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_pan_and_tilt_t* av_payload_pan_and_tilt)
{
    return mavlink_msg_av_payload_pan_and_tilt_pack(system_id, component_id, msg, av_payload_pan_and_tilt->pan, av_payload_pan_and_tilt->tilt);
}

/**
 * @brief Encode a av_payload_pan_and_tilt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_pan_and_tilt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_pan_and_tilt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_pan_and_tilt_t* av_payload_pan_and_tilt)
{
    return mavlink_msg_av_payload_pan_and_tilt_pack_chan(system_id, component_id, chan, msg, av_payload_pan_and_tilt->pan, av_payload_pan_and_tilt->tilt);
}

/**
 * @brief Send a av_payload_pan_and_tilt message
 * @param chan MAVLink channel to send the message
 *
 * @param pan Set horizontal CFOV look angle offset with respect to center of camera focal plane. Positive right. Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000) 
 * @param tilt Set horizontal CFOV look angle offset with respect to center of camera focal plane.	Positive right.	Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_pan_and_tilt_send(mavlink_channel_t chan, int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT, buf, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
#else
    mavlink_av_payload_pan_and_tilt_t packet;
    packet.pan = pan;
    packet.tilt = tilt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
#endif
}

/**
 * @brief Send a av_payload_pan_and_tilt message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_pan_and_tilt_send_struct(mavlink_channel_t chan, const mavlink_av_payload_pan_and_tilt_t* av_payload_pan_and_tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_pan_and_tilt_send(chan, av_payload_pan_and_tilt->pan, av_payload_pan_and_tilt->tilt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT, (const char *)av_payload_pan_and_tilt, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_pan_and_tilt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT, buf, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
#else
    mavlink_av_payload_pan_and_tilt_t *packet = (mavlink_av_payload_pan_and_tilt_t *)msgbuf;
    packet->pan = pan;
    packet->tilt = tilt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_PAN_AND_TILT UNPACKING


/**
 * @brief Get field pan from av_payload_pan_and_tilt message
 *
 * @return Set horizontal CFOV look angle offset with respect to center of camera focal plane. Positive right. Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000) 
 */
static inline int16_t mavlink_msg_av_payload_pan_and_tilt_get_pan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field tilt from av_payload_pan_and_tilt message
 *
 * @return Set horizontal CFOV look angle offset with respect to center of camera focal plane.	Positive right.	Must be biased by -pi/2 (-90 deg). Uncorrected for spherical-to-flat projection. (range: -pi/2 to pi/2; rad * 10000)
 */
static inline int16_t mavlink_msg_av_payload_pan_and_tilt_get_tilt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a av_payload_pan_and_tilt message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_pan_and_tilt C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_pan_and_tilt_decode(const mavlink_message_t* msg, mavlink_av_payload_pan_and_tilt_t* av_payload_pan_and_tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_pan_and_tilt->pan = mavlink_msg_av_payload_pan_and_tilt_get_pan(msg);
    av_payload_pan_and_tilt->tilt = mavlink_msg_av_payload_pan_and_tilt_get_tilt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN;
        memset(av_payload_pan_and_tilt, 0, MAVLINK_MSG_ID_AV_PAYLOAD_PAN_AND_TILT_LEN);
    memcpy(av_payload_pan_and_tilt, _MAV_PAYLOAD(msg), len);
#endif
}
