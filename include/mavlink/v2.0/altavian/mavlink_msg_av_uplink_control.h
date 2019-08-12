#pragma once
// MESSAGE AV_UPLINK_CONTROL PACKING

#define MAVLINK_MSG_ID_AV_UPLINK_CONTROL 159

MAVPACKED(
typedef struct __mavlink_av_uplink_control_t {
 int16_t rudder; /*< Rudder (range: -127 to 127)*/
 int16_t elevator; /*< Elevator (range: -127 to 127)*/
 uint8_t throttle; /*< Throttle (range: 0 to 100, %)*/
}) mavlink_av_uplink_control_t;

#define MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN 5
#define MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN 5
#define MAVLINK_MSG_ID_159_LEN 5
#define MAVLINK_MSG_ID_159_MIN_LEN 5

#define MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC 222
#define MAVLINK_MSG_ID_159_CRC 222



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_UPLINK_CONTROL { \
    159, \
    "AV_UPLINK_CONTROL", \
    3, \
    {  { "rudder", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_uplink_control_t, rudder) }, \
         { "elevator", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_uplink_control_t, elevator) }, \
         { "throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_uplink_control_t, throttle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_UPLINK_CONTROL { \
    "AV_UPLINK_CONTROL", \
    3, \
    {  { "rudder", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_uplink_control_t, rudder) }, \
         { "elevator", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_uplink_control_t, elevator) }, \
         { "throttle", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_uplink_control_t, throttle) }, \
         } \
}
#endif

/**
 * @brief Pack a av_uplink_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param throttle Throttle (range: 0 to 100, %)
 * @param rudder Rudder (range: -127 to 127)
 * @param elevator Elevator (range: -127 to 127)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_uplink_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t throttle, int16_t rudder, int16_t elevator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, rudder);
    _mav_put_int16_t(buf, 2, elevator);
    _mav_put_uint8_t(buf, 4, throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN);
#else
    mavlink_av_uplink_control_t packet;
    packet.rudder = rudder;
    packet.elevator = elevator;
    packet.throttle = throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_UPLINK_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
}

/**
 * @brief Pack a av_uplink_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param throttle Throttle (range: 0 to 100, %)
 * @param rudder Rudder (range: -127 to 127)
 * @param elevator Elevator (range: -127 to 127)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_uplink_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t throttle,int16_t rudder,int16_t elevator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, rudder);
    _mav_put_int16_t(buf, 2, elevator);
    _mav_put_uint8_t(buf, 4, throttle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN);
#else
    mavlink_av_uplink_control_t packet;
    packet.rudder = rudder;
    packet.elevator = elevator;
    packet.throttle = throttle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_UPLINK_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
}

/**
 * @brief Encode a av_uplink_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_uplink_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_uplink_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_uplink_control_t* av_uplink_control)
{
    return mavlink_msg_av_uplink_control_pack(system_id, component_id, msg, av_uplink_control->throttle, av_uplink_control->rudder, av_uplink_control->elevator);
}

/**
 * @brief Encode a av_uplink_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_uplink_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_uplink_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_uplink_control_t* av_uplink_control)
{
    return mavlink_msg_av_uplink_control_pack_chan(system_id, component_id, chan, msg, av_uplink_control->throttle, av_uplink_control->rudder, av_uplink_control->elevator);
}

/**
 * @brief Send a av_uplink_control message
 * @param chan MAVLink channel to send the message
 *
 * @param throttle Throttle (range: 0 to 100, %)
 * @param rudder Rudder (range: -127 to 127)
 * @param elevator Elevator (range: -127 to 127)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_uplink_control_send(mavlink_channel_t chan, uint8_t throttle, int16_t rudder, int16_t elevator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN];
    _mav_put_int16_t(buf, 0, rudder);
    _mav_put_int16_t(buf, 2, elevator);
    _mav_put_uint8_t(buf, 4, throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL, buf, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
#else
    mavlink_av_uplink_control_t packet;
    packet.rudder = rudder;
    packet.elevator = elevator;
    packet.throttle = throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
#endif
}

/**
 * @brief Send a av_uplink_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_uplink_control_send_struct(mavlink_channel_t chan, const mavlink_av_uplink_control_t* av_uplink_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_uplink_control_send(chan, av_uplink_control->throttle, av_uplink_control->rudder, av_uplink_control->elevator);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL, (const char *)av_uplink_control, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_uplink_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t throttle, int16_t rudder, int16_t elevator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, rudder);
    _mav_put_int16_t(buf, 2, elevator);
    _mav_put_uint8_t(buf, 4, throttle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL, buf, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
#else
    mavlink_av_uplink_control_t *packet = (mavlink_av_uplink_control_t *)msgbuf;
    packet->rudder = rudder;
    packet->elevator = elevator;
    packet->throttle = throttle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_UPLINK_CONTROL, (const char *)packet, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_UPLINK_CONTROL UNPACKING


/**
 * @brief Get field throttle from av_uplink_control message
 *
 * @return Throttle (range: 0 to 100, %)
 */
static inline uint8_t mavlink_msg_av_uplink_control_get_throttle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rudder from av_uplink_control message
 *
 * @return Rudder (range: -127 to 127)
 */
static inline int16_t mavlink_msg_av_uplink_control_get_rudder(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field elevator from av_uplink_control message
 *
 * @return Elevator (range: -127 to 127)
 */
static inline int16_t mavlink_msg_av_uplink_control_get_elevator(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a av_uplink_control message into a struct
 *
 * @param msg The message to decode
 * @param av_uplink_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_uplink_control_decode(const mavlink_message_t* msg, mavlink_av_uplink_control_t* av_uplink_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_uplink_control->rudder = mavlink_msg_av_uplink_control_get_rudder(msg);
    av_uplink_control->elevator = mavlink_msg_av_uplink_control_get_elevator(msg);
    av_uplink_control->throttle = mavlink_msg_av_uplink_control_get_throttle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN;
        memset(av_uplink_control, 0, MAVLINK_MSG_ID_AV_UPLINK_CONTROL_LEN);
    memcpy(av_uplink_control, _MAV_PAYLOAD(msg), len);
#endif
}
