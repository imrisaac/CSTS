#pragma once
// MESSAGE FEED_FORWARD_JOYSTICK_POSITIONS PACKING

#define MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS 236

MAVPACKED(
typedef struct __mavlink_feed_forward_joystick_positions_t {
 int8_t x_position; /*< Lateral stick position.*/
 int8_t y_position; /*< Longitudinal stick position.*/
}) mavlink_feed_forward_joystick_positions_t;

#define MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN 2
#define MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN 2
#define MAVLINK_MSG_ID_236_LEN 2
#define MAVLINK_MSG_ID_236_MIN_LEN 2

#define MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC 125
#define MAVLINK_MSG_ID_236_CRC 125



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FEED_FORWARD_JOYSTICK_POSITIONS { \
    236, \
    "FEED_FORWARD_JOYSTICK_POSITIONS", \
    2, \
    {  { "x_position", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_feed_forward_joystick_positions_t, x_position) }, \
         { "y_position", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_feed_forward_joystick_positions_t, y_position) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FEED_FORWARD_JOYSTICK_POSITIONS { \
    "FEED_FORWARD_JOYSTICK_POSITIONS", \
    2, \
    {  { "x_position", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_feed_forward_joystick_positions_t, x_position) }, \
         { "y_position", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_feed_forward_joystick_positions_t, y_position) }, \
         } \
}
#endif

/**
 * @brief Pack a feed_forward_joystick_positions message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x_position Lateral stick position.
 * @param y_position Longitudinal stick position.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_feed_forward_joystick_positions_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t x_position, int8_t y_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN];
    _mav_put_int8_t(buf, 0, x_position);
    _mav_put_int8_t(buf, 1, y_position);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN);
#else
    mavlink_feed_forward_joystick_positions_t packet;
    packet.x_position = x_position;
    packet.y_position = y_position;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
}

/**
 * @brief Pack a feed_forward_joystick_positions message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x_position Lateral stick position.
 * @param y_position Longitudinal stick position.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_feed_forward_joystick_positions_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t x_position,int8_t y_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN];
    _mav_put_int8_t(buf, 0, x_position);
    _mav_put_int8_t(buf, 1, y_position);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN);
#else
    mavlink_feed_forward_joystick_positions_t packet;
    packet.x_position = x_position;
    packet.y_position = y_position;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
}

/**
 * @brief Encode a feed_forward_joystick_positions struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param feed_forward_joystick_positions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_feed_forward_joystick_positions_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_feed_forward_joystick_positions_t* feed_forward_joystick_positions)
{
    return mavlink_msg_feed_forward_joystick_positions_pack(system_id, component_id, msg, feed_forward_joystick_positions->x_position, feed_forward_joystick_positions->y_position);
}

/**
 * @brief Encode a feed_forward_joystick_positions struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param feed_forward_joystick_positions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_feed_forward_joystick_positions_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_feed_forward_joystick_positions_t* feed_forward_joystick_positions)
{
    return mavlink_msg_feed_forward_joystick_positions_pack_chan(system_id, component_id, chan, msg, feed_forward_joystick_positions->x_position, feed_forward_joystick_positions->y_position);
}

/**
 * @brief Send a feed_forward_joystick_positions message
 * @param chan MAVLink channel to send the message
 *
 * @param x_position Lateral stick position.
 * @param y_position Longitudinal stick position.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_feed_forward_joystick_positions_send(mavlink_channel_t chan, int8_t x_position, int8_t y_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN];
    _mav_put_int8_t(buf, 0, x_position);
    _mav_put_int8_t(buf, 1, y_position);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS, buf, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
#else
    mavlink_feed_forward_joystick_positions_t packet;
    packet.x_position = x_position;
    packet.y_position = y_position;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS, (const char *)&packet, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
#endif
}

/**
 * @brief Send a feed_forward_joystick_positions message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_feed_forward_joystick_positions_send_struct(mavlink_channel_t chan, const mavlink_feed_forward_joystick_positions_t* feed_forward_joystick_positions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_feed_forward_joystick_positions_send(chan, feed_forward_joystick_positions->x_position, feed_forward_joystick_positions->y_position);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS, (const char *)feed_forward_joystick_positions, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_feed_forward_joystick_positions_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t x_position, int8_t y_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, x_position);
    _mav_put_int8_t(buf, 1, y_position);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS, buf, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
#else
    mavlink_feed_forward_joystick_positions_t *packet = (mavlink_feed_forward_joystick_positions_t *)msgbuf;
    packet->x_position = x_position;
    packet->y_position = y_position;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS, (const char *)packet, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_CRC);
#endif
}
#endif

#endif

// MESSAGE FEED_FORWARD_JOYSTICK_POSITIONS UNPACKING


/**
 * @brief Get field x_position from feed_forward_joystick_positions message
 *
 * @return Lateral stick position.
 */
static inline int8_t mavlink_msg_feed_forward_joystick_positions_get_x_position(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field y_position from feed_forward_joystick_positions message
 *
 * @return Longitudinal stick position.
 */
static inline int8_t mavlink_msg_feed_forward_joystick_positions_get_y_position(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a feed_forward_joystick_positions message into a struct
 *
 * @param msg The message to decode
 * @param feed_forward_joystick_positions C-struct to decode the message contents into
 */
static inline void mavlink_msg_feed_forward_joystick_positions_decode(const mavlink_message_t* msg, mavlink_feed_forward_joystick_positions_t* feed_forward_joystick_positions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    feed_forward_joystick_positions->x_position = mavlink_msg_feed_forward_joystick_positions_get_x_position(msg);
    feed_forward_joystick_positions->y_position = mavlink_msg_feed_forward_joystick_positions_get_y_position(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN? msg->len : MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN;
        memset(feed_forward_joystick_positions, 0, MAVLINK_MSG_ID_FEED_FORWARD_JOYSTICK_POSITIONS_LEN);
    memcpy(feed_forward_joystick_positions, _MAV_PAYLOAD(msg), len);
#endif
}
