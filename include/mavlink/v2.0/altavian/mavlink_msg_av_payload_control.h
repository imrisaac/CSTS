#pragma once
// MESSAGE AV_PAYLOAD_CONTROL PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL 204

MAVPACKED(
typedef struct __mavlink_av_payload_control_t {
 int16_t pan; /*< Set horizontal CFOV look angle offset with respect to AV front in level flight. Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2. (range: -pi to pi; rad * 10000)*/
 int16_t tilt; /*< Set vertical CFOV look angle uplook with respect to AV in level flight.	Front-look tilt is about AV pitch axis; side-look, roll.	Positive up. Nominally the downlook angle of the payload, nominally negative.(range: -pi to pi; rad * 10000)*/
 uint8_t control_type; /*< (TODO)*/
 uint8_t control_flags; /*< see PAYLOAD_STATUS_FLAGS*/
 uint8_t zoom_index; /*< Select Zoom Level: 0 = Not Zoomed (i.e., fully zoomed out).*/
}) mavlink_av_payload_control_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN 7
#define MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN 7
#define MAVLINK_MSG_ID_204_LEN 7
#define MAVLINK_MSG_ID_204_MIN_LEN 7

#define MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC 149
#define MAVLINK_MSG_ID_204_CRC 149



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_CONTROL { \
    204, \
    "AV_PAYLOAD_CONTROL", \
    5, \
    {  { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_control_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_control_t, tilt) }, \
         { "control_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_payload_control_t, control_type) }, \
         { "control_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_av_payload_control_t, control_flags) }, \
         { "zoom_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_av_payload_control_t, zoom_index) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_CONTROL { \
    "AV_PAYLOAD_CONTROL", \
    5, \
    {  { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_control_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_control_t, tilt) }, \
         { "control_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_payload_control_t, control_type) }, \
         { "control_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_av_payload_control_t, control_flags) }, \
         { "zoom_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_av_payload_control_t, zoom_index) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param control_type (TODO)
 * @param control_flags see PAYLOAD_STATUS_FLAGS
 * @param zoom_index Select Zoom Level: 0 = Not Zoomed (i.e., fully zoomed out).
 * @param pan Set horizontal CFOV look angle offset with respect to AV front in level flight. Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2. (range: -pi to pi; rad * 10000)
 * @param tilt Set vertical CFOV look angle uplook with respect to AV in level flight.	Front-look tilt is about AV pitch axis; side-look, roll.	Positive up. Nominally the downlook angle of the payload, nominally negative.(range: -pi to pi; rad * 10000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t control_type, uint8_t control_flags, uint8_t zoom_index, int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);
    _mav_put_uint8_t(buf, 4, control_type);
    _mav_put_uint8_t(buf, 5, control_flags);
    _mav_put_uint8_t(buf, 6, zoom_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN);
#else
    mavlink_av_payload_control_t packet;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.control_type = control_type;
    packet.control_flags = control_flags;
    packet.zoom_index = zoom_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
}

/**
 * @brief Pack a av_payload_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param control_type (TODO)
 * @param control_flags see PAYLOAD_STATUS_FLAGS
 * @param zoom_index Select Zoom Level: 0 = Not Zoomed (i.e., fully zoomed out).
 * @param pan Set horizontal CFOV look angle offset with respect to AV front in level flight. Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2. (range: -pi to pi; rad * 10000)
 * @param tilt Set vertical CFOV look angle uplook with respect to AV in level flight.	Front-look tilt is about AV pitch axis; side-look, roll.	Positive up. Nominally the downlook angle of the payload, nominally negative.(range: -pi to pi; rad * 10000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t control_type,uint8_t control_flags,uint8_t zoom_index,int16_t pan,int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);
    _mav_put_uint8_t(buf, 4, control_type);
    _mav_put_uint8_t(buf, 5, control_flags);
    _mav_put_uint8_t(buf, 6, zoom_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN);
#else
    mavlink_av_payload_control_t packet;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.control_type = control_type;
    packet.control_flags = control_flags;
    packet.zoom_index = zoom_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
}

/**
 * @brief Encode a av_payload_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_control_t* av_payload_control)
{
    return mavlink_msg_av_payload_control_pack(system_id, component_id, msg, av_payload_control->control_type, av_payload_control->control_flags, av_payload_control->zoom_index, av_payload_control->pan, av_payload_control->tilt);
}

/**
 * @brief Encode a av_payload_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_control_t* av_payload_control)
{
    return mavlink_msg_av_payload_control_pack_chan(system_id, component_id, chan, msg, av_payload_control->control_type, av_payload_control->control_flags, av_payload_control->zoom_index, av_payload_control->pan, av_payload_control->tilt);
}

/**
 * @brief Send a av_payload_control message
 * @param chan MAVLink channel to send the message
 *
 * @param control_type (TODO)
 * @param control_flags see PAYLOAD_STATUS_FLAGS
 * @param zoom_index Select Zoom Level: 0 = Not Zoomed (i.e., fully zoomed out).
 * @param pan Set horizontal CFOV look angle offset with respect to AV front in level flight. Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2. (range: -pi to pi; rad * 10000)
 * @param tilt Set vertical CFOV look angle uplook with respect to AV in level flight.	Front-look tilt is about AV pitch axis; side-look, roll.	Positive up. Nominally the downlook angle of the payload, nominally negative.(range: -pi to pi; rad * 10000)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_control_send(mavlink_channel_t chan, uint8_t control_type, uint8_t control_flags, uint8_t zoom_index, int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);
    _mav_put_uint8_t(buf, 4, control_type);
    _mav_put_uint8_t(buf, 5, control_flags);
    _mav_put_uint8_t(buf, 6, zoom_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL, buf, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
#else
    mavlink_av_payload_control_t packet;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.control_type = control_type;
    packet.control_flags = control_flags;
    packet.zoom_index = zoom_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
#endif
}

/**
 * @brief Send a av_payload_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_control_send_struct(mavlink_channel_t chan, const mavlink_av_payload_control_t* av_payload_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_control_send(chan, av_payload_control->control_type, av_payload_control->control_flags, av_payload_control->zoom_index, av_payload_control->pan, av_payload_control->tilt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL, (const char *)av_payload_control, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t control_type, uint8_t control_flags, uint8_t zoom_index, int16_t pan, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, pan);
    _mav_put_int16_t(buf, 2, tilt);
    _mav_put_uint8_t(buf, 4, control_type);
    _mav_put_uint8_t(buf, 5, control_flags);
    _mav_put_uint8_t(buf, 6, zoom_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL, buf, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
#else
    mavlink_av_payload_control_t *packet = (mavlink_av_payload_control_t *)msgbuf;
    packet->pan = pan;
    packet->tilt = tilt;
    packet->control_type = control_type;
    packet->control_flags = control_flags;
    packet->zoom_index = zoom_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_CONTROL UNPACKING


/**
 * @brief Get field control_type from av_payload_control message
 *
 * @return (TODO)
 */
static inline uint8_t mavlink_msg_av_payload_control_get_control_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field control_flags from av_payload_control message
 *
 * @return see PAYLOAD_STATUS_FLAGS
 */
static inline uint8_t mavlink_msg_av_payload_control_get_control_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field zoom_index from av_payload_control message
 *
 * @return Select Zoom Level: 0 = Not Zoomed (i.e., fully zoomed out).
 */
static inline uint8_t mavlink_msg_av_payload_control_get_zoom_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field pan from av_payload_control message
 *
 * @return Set horizontal CFOV look angle offset with respect to AV front in level flight. Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2. (range: -pi to pi; rad * 10000)
 */
static inline int16_t mavlink_msg_av_payload_control_get_pan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field tilt from av_payload_control message
 *
 * @return Set vertical CFOV look angle uplook with respect to AV in level flight.	Front-look tilt is about AV pitch axis; side-look, roll.	Positive up. Nominally the downlook angle of the payload, nominally negative.(range: -pi to pi; rad * 10000)
 */
static inline int16_t mavlink_msg_av_payload_control_get_tilt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a av_payload_control message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_control_decode(const mavlink_message_t* msg, mavlink_av_payload_control_t* av_payload_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_control->pan = mavlink_msg_av_payload_control_get_pan(msg);
    av_payload_control->tilt = mavlink_msg_av_payload_control_get_tilt(msg);
    av_payload_control->control_type = mavlink_msg_av_payload_control_get_control_type(msg);
    av_payload_control->control_flags = mavlink_msg_av_payload_control_get_control_flags(msg);
    av_payload_control->zoom_index = mavlink_msg_av_payload_control_get_zoom_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN;
        memset(av_payload_control, 0, MAVLINK_MSG_ID_AV_PAYLOAD_CONTROL_LEN);
    memcpy(av_payload_control, _MAV_PAYLOAD(msg), len);
#endif
}
