#pragma once
// MESSAGE FEED_FORWARD_TURN_RATES PACKING

#define MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES 235

MAVPACKED(
typedef struct __mavlink_feed_forward_turn_rates_t {
 int16_t turn_rate; /*< Commanded turn rate of AV (rad/s * 1000)*/
 int16_t tilt; /*< Commanded bank angle of AV (rad/s * 1000)*/
}) mavlink_feed_forward_turn_rates_t;

#define MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN 4
#define MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN 4
#define MAVLINK_MSG_ID_235_LEN 4
#define MAVLINK_MSG_ID_235_MIN_LEN 4

#define MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC 247
#define MAVLINK_MSG_ID_235_CRC 247



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FEED_FORWARD_TURN_RATES { \
    235, \
    "FEED_FORWARD_TURN_RATES", \
    2, \
    {  { "turn_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_feed_forward_turn_rates_t, turn_rate) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_feed_forward_turn_rates_t, tilt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FEED_FORWARD_TURN_RATES { \
    "FEED_FORWARD_TURN_RATES", \
    2, \
    {  { "turn_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_feed_forward_turn_rates_t, turn_rate) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_feed_forward_turn_rates_t, tilt) }, \
         } \
}
#endif

/**
 * @brief Pack a feed_forward_turn_rates message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param turn_rate Commanded turn rate of AV (rad/s * 1000)
 * @param tilt Commanded bank angle of AV (rad/s * 1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_feed_forward_turn_rates_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t turn_rate, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN];
    _mav_put_int16_t(buf, 0, turn_rate);
    _mav_put_int16_t(buf, 2, tilt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN);
#else
    mavlink_feed_forward_turn_rates_t packet;
    packet.turn_rate = turn_rate;
    packet.tilt = tilt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
}

/**
 * @brief Pack a feed_forward_turn_rates message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param turn_rate Commanded turn rate of AV (rad/s * 1000)
 * @param tilt Commanded bank angle of AV (rad/s * 1000)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_feed_forward_turn_rates_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t turn_rate,int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN];
    _mav_put_int16_t(buf, 0, turn_rate);
    _mav_put_int16_t(buf, 2, tilt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN);
#else
    mavlink_feed_forward_turn_rates_t packet;
    packet.turn_rate = turn_rate;
    packet.tilt = tilt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
}

/**
 * @brief Encode a feed_forward_turn_rates struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param feed_forward_turn_rates C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_feed_forward_turn_rates_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_feed_forward_turn_rates_t* feed_forward_turn_rates)
{
    return mavlink_msg_feed_forward_turn_rates_pack(system_id, component_id, msg, feed_forward_turn_rates->turn_rate, feed_forward_turn_rates->tilt);
}

/**
 * @brief Encode a feed_forward_turn_rates struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param feed_forward_turn_rates C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_feed_forward_turn_rates_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_feed_forward_turn_rates_t* feed_forward_turn_rates)
{
    return mavlink_msg_feed_forward_turn_rates_pack_chan(system_id, component_id, chan, msg, feed_forward_turn_rates->turn_rate, feed_forward_turn_rates->tilt);
}

/**
 * @brief Send a feed_forward_turn_rates message
 * @param chan MAVLink channel to send the message
 *
 * @param turn_rate Commanded turn rate of AV (rad/s * 1000)
 * @param tilt Commanded bank angle of AV (rad/s * 1000)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_feed_forward_turn_rates_send(mavlink_channel_t chan, int16_t turn_rate, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN];
    _mav_put_int16_t(buf, 0, turn_rate);
    _mav_put_int16_t(buf, 2, tilt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES, buf, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
#else
    mavlink_feed_forward_turn_rates_t packet;
    packet.turn_rate = turn_rate;
    packet.tilt = tilt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES, (const char *)&packet, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
#endif
}

/**
 * @brief Send a feed_forward_turn_rates message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_feed_forward_turn_rates_send_struct(mavlink_channel_t chan, const mavlink_feed_forward_turn_rates_t* feed_forward_turn_rates)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_feed_forward_turn_rates_send(chan, feed_forward_turn_rates->turn_rate, feed_forward_turn_rates->tilt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES, (const char *)feed_forward_turn_rates, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
#endif
}

#if MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_feed_forward_turn_rates_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t turn_rate, int16_t tilt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, turn_rate);
    _mav_put_int16_t(buf, 2, tilt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES, buf, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
#else
    mavlink_feed_forward_turn_rates_t *packet = (mavlink_feed_forward_turn_rates_t *)msgbuf;
    packet->turn_rate = turn_rate;
    packet->tilt = tilt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES, (const char *)packet, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_MIN_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_CRC);
#endif
}
#endif

#endif

// MESSAGE FEED_FORWARD_TURN_RATES UNPACKING


/**
 * @brief Get field turn_rate from feed_forward_turn_rates message
 *
 * @return Commanded turn rate of AV (rad/s * 1000)
 */
static inline int16_t mavlink_msg_feed_forward_turn_rates_get_turn_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field tilt from feed_forward_turn_rates message
 *
 * @return Commanded bank angle of AV (rad/s * 1000)
 */
static inline int16_t mavlink_msg_feed_forward_turn_rates_get_tilt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a feed_forward_turn_rates message into a struct
 *
 * @param msg The message to decode
 * @param feed_forward_turn_rates C-struct to decode the message contents into
 */
static inline void mavlink_msg_feed_forward_turn_rates_decode(const mavlink_message_t* msg, mavlink_feed_forward_turn_rates_t* feed_forward_turn_rates)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    feed_forward_turn_rates->turn_rate = mavlink_msg_feed_forward_turn_rates_get_turn_rate(msg);
    feed_forward_turn_rates->tilt = mavlink_msg_feed_forward_turn_rates_get_tilt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN? msg->len : MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN;
        memset(feed_forward_turn_rates, 0, MAVLINK_MSG_ID_FEED_FORWARD_TURN_RATES_LEN);
    memcpy(feed_forward_turn_rates, _MAV_PAYLOAD(msg), len);
#endif
}
