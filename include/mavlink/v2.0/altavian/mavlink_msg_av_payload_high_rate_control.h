#pragma once
// MESSAGE AV_PAYLOAD_HIGH_RATE_CONTROL PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL 205

MAVPACKED(
typedef struct __mavlink_av_payload_high_rate_control_t {
 int16_t commanded_rudder; /*< (radians * 10000)*/
 int16_t commanded_elevator; /*< (radians * 10000)*/
 int16_t commanded_throttle; /*< (percent * 10)*/
 int8_t joystick_x; /*< */
 int8_t joystick_y; /*< */
 uint8_t uplinked_throttle; /*< */
}) mavlink_av_payload_high_rate_control_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN 9
#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN 9
#define MAVLINK_MSG_ID_205_LEN 9
#define MAVLINK_MSG_ID_205_MIN_LEN 9

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC 242
#define MAVLINK_MSG_ID_205_CRC 242



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_CONTROL { \
    205, \
    "AV_PAYLOAD_HIGH_RATE_CONTROL", \
    6, \
    {  { "commanded_rudder", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_high_rate_control_t, commanded_rudder) }, \
         { "commanded_elevator", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_high_rate_control_t, commanded_elevator) }, \
         { "commanded_throttle", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_payload_high_rate_control_t, commanded_throttle) }, \
         { "joystick_x", NULL, MAVLINK_TYPE_INT8_T, 0, 6, offsetof(mavlink_av_payload_high_rate_control_t, joystick_x) }, \
         { "joystick_y", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_av_payload_high_rate_control_t, joystick_y) }, \
         { "uplinked_throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_av_payload_high_rate_control_t, uplinked_throttle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_CONTROL { \
    "AV_PAYLOAD_HIGH_RATE_CONTROL", \
    6, \
    {  { "commanded_rudder", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_high_rate_control_t, commanded_rudder) }, \
         { "commanded_elevator", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_high_rate_control_t, commanded_elevator) }, \
         { "commanded_throttle", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_payload_high_rate_control_t, commanded_throttle) }, \
         { "joystick_x", NULL, MAVLINK_TYPE_INT8_T, 0, 6, offsetof(mavlink_av_payload_high_rate_control_t, joystick_x) }, \
         { "joystick_y", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_av_payload_high_rate_control_t, joystick_y) }, \
         { "uplinked_throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_av_payload_high_rate_control_t, uplinked_throttle) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_high_rate_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param joystick_x 
 * @param joystick_y 
 * @param uplinked_throttle 
 * @param commanded_rudder (radians * 10000)
 * @param commanded_elevator (radians * 10000)
 * @param commanded_throttle (percent * 10)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t joystick_x, int8_t joystick_y, uint8_t uplinked_throttle, int16_t commanded_rudder, int16_t commanded_elevator, int16_t commanded_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, commanded_rudder);
    _mav_put_int16_t(buf, 2, commanded_elevator);
    _mav_put_int16_t(buf, 4, commanded_throttle);
    _mav_put_int8_t(buf, 6, joystick_x);
    _mav_put_int8_t(buf, 7, joystick_y);
    _mav_put_uint8_t(buf, 8, uplinked_throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN);
#else
    mavlink_av_payload_high_rate_control_t packet;
    packet.commanded_rudder = commanded_rudder;
    packet.commanded_elevator = commanded_elevator;
    packet.commanded_throttle = commanded_throttle;
    packet.joystick_x = joystick_x;
    packet.joystick_y = joystick_y;
    packet.uplinked_throttle = uplinked_throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
}

/**
 * @brief Pack a av_payload_high_rate_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param joystick_x 
 * @param joystick_y 
 * @param uplinked_throttle 
 * @param commanded_rudder (radians * 10000)
 * @param commanded_elevator (radians * 10000)
 * @param commanded_throttle (percent * 10)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t joystick_x,int8_t joystick_y,uint8_t uplinked_throttle,int16_t commanded_rudder,int16_t commanded_elevator,int16_t commanded_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, commanded_rudder);
    _mav_put_int16_t(buf, 2, commanded_elevator);
    _mav_put_int16_t(buf, 4, commanded_throttle);
    _mav_put_int8_t(buf, 6, joystick_x);
    _mav_put_int8_t(buf, 7, joystick_y);
    _mav_put_uint8_t(buf, 8, uplinked_throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN);
#else
    mavlink_av_payload_high_rate_control_t packet;
    packet.commanded_rudder = commanded_rudder;
    packet.commanded_elevator = commanded_elevator;
    packet.commanded_throttle = commanded_throttle;
    packet.joystick_x = joystick_x;
    packet.joystick_y = joystick_y;
    packet.uplinked_throttle = uplinked_throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
}

/**
 * @brief Encode a av_payload_high_rate_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_high_rate_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_high_rate_control_t* av_payload_high_rate_control)
{
    return mavlink_msg_av_payload_high_rate_control_pack(system_id, component_id, msg, av_payload_high_rate_control->joystick_x, av_payload_high_rate_control->joystick_y, av_payload_high_rate_control->uplinked_throttle, av_payload_high_rate_control->commanded_rudder, av_payload_high_rate_control->commanded_elevator, av_payload_high_rate_control->commanded_throttle);
}

/**
 * @brief Encode a av_payload_high_rate_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_high_rate_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_high_rate_control_t* av_payload_high_rate_control)
{
    return mavlink_msg_av_payload_high_rate_control_pack_chan(system_id, component_id, chan, msg, av_payload_high_rate_control->joystick_x, av_payload_high_rate_control->joystick_y, av_payload_high_rate_control->uplinked_throttle, av_payload_high_rate_control->commanded_rudder, av_payload_high_rate_control->commanded_elevator, av_payload_high_rate_control->commanded_throttle);
}

/**
 * @brief Send a av_payload_high_rate_control message
 * @param chan MAVLink channel to send the message
 *
 * @param joystick_x 
 * @param joystick_y 
 * @param uplinked_throttle 
 * @param commanded_rudder (radians * 10000)
 * @param commanded_elevator (radians * 10000)
 * @param commanded_throttle (percent * 10)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_high_rate_control_send(mavlink_channel_t chan, int8_t joystick_x, int8_t joystick_y, uint8_t uplinked_throttle, int16_t commanded_rudder, int16_t commanded_elevator, int16_t commanded_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, commanded_rudder);
    _mav_put_int16_t(buf, 2, commanded_elevator);
    _mav_put_int16_t(buf, 4, commanded_throttle);
    _mav_put_int8_t(buf, 6, joystick_x);
    _mav_put_int8_t(buf, 7, joystick_y);
    _mav_put_uint8_t(buf, 8, uplinked_throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL, buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
#else
    mavlink_av_payload_high_rate_control_t packet;
    packet.commanded_rudder = commanded_rudder;
    packet.commanded_elevator = commanded_elevator;
    packet.commanded_throttle = commanded_throttle;
    packet.joystick_x = joystick_x;
    packet.joystick_y = joystick_y;
    packet.uplinked_throttle = uplinked_throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
#endif
}

/**
 * @brief Send a av_payload_high_rate_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_high_rate_control_send_struct(mavlink_channel_t chan, const mavlink_av_payload_high_rate_control_t* av_payload_high_rate_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_high_rate_control_send(chan, av_payload_high_rate_control->joystick_x, av_payload_high_rate_control->joystick_y, av_payload_high_rate_control->uplinked_throttle, av_payload_high_rate_control->commanded_rudder, av_payload_high_rate_control->commanded_elevator, av_payload_high_rate_control->commanded_throttle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL, (const char *)av_payload_high_rate_control, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_high_rate_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t joystick_x, int8_t joystick_y, uint8_t uplinked_throttle, int16_t commanded_rudder, int16_t commanded_elevator, int16_t commanded_throttle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, commanded_rudder);
    _mav_put_int16_t(buf, 2, commanded_elevator);
    _mav_put_int16_t(buf, 4, commanded_throttle);
    _mav_put_int8_t(buf, 6, joystick_x);
    _mav_put_int8_t(buf, 7, joystick_y);
    _mav_put_uint8_t(buf, 8, uplinked_throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL, buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
#else
    mavlink_av_payload_high_rate_control_t *packet = (mavlink_av_payload_high_rate_control_t *)msgbuf;
    packet->commanded_rudder = commanded_rudder;
    packet->commanded_elevator = commanded_elevator;
    packet->commanded_throttle = commanded_throttle;
    packet->joystick_x = joystick_x;
    packet->joystick_y = joystick_y;
    packet->uplinked_throttle = uplinked_throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_HIGH_RATE_CONTROL UNPACKING


/**
 * @brief Get field joystick_x from av_payload_high_rate_control message
 *
 * @return 
 */
static inline int8_t mavlink_msg_av_payload_high_rate_control_get_joystick_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  6);
}

/**
 * @brief Get field joystick_y from av_payload_high_rate_control message
 *
 * @return 
 */
static inline int8_t mavlink_msg_av_payload_high_rate_control_get_joystick_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Get field uplinked_throttle from av_payload_high_rate_control message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_av_payload_high_rate_control_get_uplinked_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field commanded_rudder from av_payload_high_rate_control message
 *
 * @return (radians * 10000)
 */
static inline int16_t mavlink_msg_av_payload_high_rate_control_get_commanded_rudder(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field commanded_elevator from av_payload_high_rate_control message
 *
 * @return (radians * 10000)
 */
static inline int16_t mavlink_msg_av_payload_high_rate_control_get_commanded_elevator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field commanded_throttle from av_payload_high_rate_control message
 *
 * @return (percent * 10)
 */
static inline int16_t mavlink_msg_av_payload_high_rate_control_get_commanded_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a av_payload_high_rate_control message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_high_rate_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_high_rate_control_decode(const mavlink_message_t* msg, mavlink_av_payload_high_rate_control_t* av_payload_high_rate_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_high_rate_control->commanded_rudder = mavlink_msg_av_payload_high_rate_control_get_commanded_rudder(msg);
    av_payload_high_rate_control->commanded_elevator = mavlink_msg_av_payload_high_rate_control_get_commanded_elevator(msg);
    av_payload_high_rate_control->commanded_throttle = mavlink_msg_av_payload_high_rate_control_get_commanded_throttle(msg);
    av_payload_high_rate_control->joystick_x = mavlink_msg_av_payload_high_rate_control_get_joystick_x(msg);
    av_payload_high_rate_control->joystick_y = mavlink_msg_av_payload_high_rate_control_get_joystick_y(msg);
    av_payload_high_rate_control->uplinked_throttle = mavlink_msg_av_payload_high_rate_control_get_uplinked_throttle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN;
        memset(av_payload_high_rate_control, 0, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_CONTROL_LEN);
    memcpy(av_payload_high_rate_control, _MAV_PAYLOAD(msg), len);
#endif
}
