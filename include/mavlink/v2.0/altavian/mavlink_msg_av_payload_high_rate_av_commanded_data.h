#pragma once
// MESSAGE AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA 210

MAVPACKED(
typedef struct __mavlink_av_payload_high_rate_av_commanded_data_t {
 int16_t commanded_turn_rate; /*< */
 int16_t commanded_bank_angle; /*< */
 int16_t commanded_course; /*< */
 int16_t commanded_climb_rate; /*< */
 int16_t commanded_altitude; /*< */
 uint16_t commanded_airspeed; /*< */
}) mavlink_av_payload_high_rate_av_commanded_data_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN 12
#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN 12
#define MAVLINK_MSG_ID_210_LEN 12
#define MAVLINK_MSG_ID_210_MIN_LEN 12

#define MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC 5
#define MAVLINK_MSG_ID_210_CRC 5



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA { \
    210, \
    "AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA", \
    6, \
    {  { "commanded_turn_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_turn_rate) }, \
         { "commanded_bank_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_bank_angle) }, \
         { "commanded_course", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_course) }, \
         { "commanded_climb_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_climb_rate) }, \
         { "commanded_altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_altitude) }, \
         { "commanded_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_airspeed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA { \
    "AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA", \
    6, \
    {  { "commanded_turn_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_turn_rate) }, \
         { "commanded_bank_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_bank_angle) }, \
         { "commanded_course", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_course) }, \
         { "commanded_climb_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_climb_rate) }, \
         { "commanded_altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_altitude) }, \
         { "commanded_airspeed", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_av_payload_high_rate_av_commanded_data_t, commanded_airspeed) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_high_rate_av_commanded_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param commanded_turn_rate 
 * @param commanded_bank_angle 
 * @param commanded_course 
 * @param commanded_climb_rate 
 * @param commanded_altitude 
 * @param commanded_airspeed 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_av_commanded_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t commanded_turn_rate, int16_t commanded_bank_angle, int16_t commanded_course, int16_t commanded_climb_rate, int16_t commanded_altitude, uint16_t commanded_airspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN];
    _mav_put_int16_t(buf, 0, commanded_turn_rate);
    _mav_put_int16_t(buf, 2, commanded_bank_angle);
    _mav_put_int16_t(buf, 4, commanded_course);
    _mav_put_int16_t(buf, 6, commanded_climb_rate);
    _mav_put_int16_t(buf, 8, commanded_altitude);
    _mav_put_uint16_t(buf, 10, commanded_airspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN);
#else
    mavlink_av_payload_high_rate_av_commanded_data_t packet;
    packet.commanded_turn_rate = commanded_turn_rate;
    packet.commanded_bank_angle = commanded_bank_angle;
    packet.commanded_course = commanded_course;
    packet.commanded_climb_rate = commanded_climb_rate;
    packet.commanded_altitude = commanded_altitude;
    packet.commanded_airspeed = commanded_airspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
}

/**
 * @brief Pack a av_payload_high_rate_av_commanded_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param commanded_turn_rate 
 * @param commanded_bank_angle 
 * @param commanded_course 
 * @param commanded_climb_rate 
 * @param commanded_altitude 
 * @param commanded_airspeed 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_av_commanded_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t commanded_turn_rate,int16_t commanded_bank_angle,int16_t commanded_course,int16_t commanded_climb_rate,int16_t commanded_altitude,uint16_t commanded_airspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN];
    _mav_put_int16_t(buf, 0, commanded_turn_rate);
    _mav_put_int16_t(buf, 2, commanded_bank_angle);
    _mav_put_int16_t(buf, 4, commanded_course);
    _mav_put_int16_t(buf, 6, commanded_climb_rate);
    _mav_put_int16_t(buf, 8, commanded_altitude);
    _mav_put_uint16_t(buf, 10, commanded_airspeed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN);
#else
    mavlink_av_payload_high_rate_av_commanded_data_t packet;
    packet.commanded_turn_rate = commanded_turn_rate;
    packet.commanded_bank_angle = commanded_bank_angle;
    packet.commanded_course = commanded_course;
    packet.commanded_climb_rate = commanded_climb_rate;
    packet.commanded_altitude = commanded_altitude;
    packet.commanded_airspeed = commanded_airspeed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
}

/**
 * @brief Encode a av_payload_high_rate_av_commanded_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_high_rate_av_commanded_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_av_commanded_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_high_rate_av_commanded_data_t* av_payload_high_rate_av_commanded_data)
{
    return mavlink_msg_av_payload_high_rate_av_commanded_data_pack(system_id, component_id, msg, av_payload_high_rate_av_commanded_data->commanded_turn_rate, av_payload_high_rate_av_commanded_data->commanded_bank_angle, av_payload_high_rate_av_commanded_data->commanded_course, av_payload_high_rate_av_commanded_data->commanded_climb_rate, av_payload_high_rate_av_commanded_data->commanded_altitude, av_payload_high_rate_av_commanded_data->commanded_airspeed);
}

/**
 * @brief Encode a av_payload_high_rate_av_commanded_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_high_rate_av_commanded_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_av_commanded_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_high_rate_av_commanded_data_t* av_payload_high_rate_av_commanded_data)
{
    return mavlink_msg_av_payload_high_rate_av_commanded_data_pack_chan(system_id, component_id, chan, msg, av_payload_high_rate_av_commanded_data->commanded_turn_rate, av_payload_high_rate_av_commanded_data->commanded_bank_angle, av_payload_high_rate_av_commanded_data->commanded_course, av_payload_high_rate_av_commanded_data->commanded_climb_rate, av_payload_high_rate_av_commanded_data->commanded_altitude, av_payload_high_rate_av_commanded_data->commanded_airspeed);
}

/**
 * @brief Send a av_payload_high_rate_av_commanded_data message
 * @param chan MAVLink channel to send the message
 *
 * @param commanded_turn_rate 
 * @param commanded_bank_angle 
 * @param commanded_course 
 * @param commanded_climb_rate 
 * @param commanded_altitude 
 * @param commanded_airspeed 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_high_rate_av_commanded_data_send(mavlink_channel_t chan, int16_t commanded_turn_rate, int16_t commanded_bank_angle, int16_t commanded_course, int16_t commanded_climb_rate, int16_t commanded_altitude, uint16_t commanded_airspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN];
    _mav_put_int16_t(buf, 0, commanded_turn_rate);
    _mav_put_int16_t(buf, 2, commanded_bank_angle);
    _mav_put_int16_t(buf, 4, commanded_course);
    _mav_put_int16_t(buf, 6, commanded_climb_rate);
    _mav_put_int16_t(buf, 8, commanded_altitude);
    _mav_put_uint16_t(buf, 10, commanded_airspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
#else
    mavlink_av_payload_high_rate_av_commanded_data_t packet;
    packet.commanded_turn_rate = commanded_turn_rate;
    packet.commanded_bank_angle = commanded_bank_angle;
    packet.commanded_course = commanded_course;
    packet.commanded_climb_rate = commanded_climb_rate;
    packet.commanded_altitude = commanded_altitude;
    packet.commanded_airspeed = commanded_airspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
#endif
}

/**
 * @brief Send a av_payload_high_rate_av_commanded_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_high_rate_av_commanded_data_send_struct(mavlink_channel_t chan, const mavlink_av_payload_high_rate_av_commanded_data_t* av_payload_high_rate_av_commanded_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_high_rate_av_commanded_data_send(chan, av_payload_high_rate_av_commanded_data->commanded_turn_rate, av_payload_high_rate_av_commanded_data->commanded_bank_angle, av_payload_high_rate_av_commanded_data->commanded_course, av_payload_high_rate_av_commanded_data->commanded_climb_rate, av_payload_high_rate_av_commanded_data->commanded_altitude, av_payload_high_rate_av_commanded_data->commanded_airspeed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, (const char *)av_payload_high_rate_av_commanded_data, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_high_rate_av_commanded_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t commanded_turn_rate, int16_t commanded_bank_angle, int16_t commanded_course, int16_t commanded_climb_rate, int16_t commanded_altitude, uint16_t commanded_airspeed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, commanded_turn_rate);
    _mav_put_int16_t(buf, 2, commanded_bank_angle);
    _mav_put_int16_t(buf, 4, commanded_course);
    _mav_put_int16_t(buf, 6, commanded_climb_rate);
    _mav_put_int16_t(buf, 8, commanded_altitude);
    _mav_put_uint16_t(buf, 10, commanded_airspeed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, buf, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
#else
    mavlink_av_payload_high_rate_av_commanded_data_t *packet = (mavlink_av_payload_high_rate_av_commanded_data_t *)msgbuf;
    packet->commanded_turn_rate = commanded_turn_rate;
    packet->commanded_bank_angle = commanded_bank_angle;
    packet->commanded_course = commanded_course;
    packet->commanded_climb_rate = commanded_climb_rate;
    packet->commanded_altitude = commanded_altitude;
    packet->commanded_airspeed = commanded_airspeed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA UNPACKING


/**
 * @brief Get field commanded_turn_rate from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline int16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_turn_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field commanded_bank_angle from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline int16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_bank_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field commanded_course from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline int16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_course(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field commanded_climb_rate from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline int16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_climb_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field commanded_altitude from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline int16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field commanded_airspeed from av_payload_high_rate_av_commanded_data message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_airspeed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a av_payload_high_rate_av_commanded_data message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_high_rate_av_commanded_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_high_rate_av_commanded_data_decode(const mavlink_message_t* msg, mavlink_av_payload_high_rate_av_commanded_data_t* av_payload_high_rate_av_commanded_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_high_rate_av_commanded_data->commanded_turn_rate = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_turn_rate(msg);
    av_payload_high_rate_av_commanded_data->commanded_bank_angle = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_bank_angle(msg);
    av_payload_high_rate_av_commanded_data->commanded_course = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_course(msg);
    av_payload_high_rate_av_commanded_data->commanded_climb_rate = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_climb_rate(msg);
    av_payload_high_rate_av_commanded_data->commanded_altitude = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_altitude(msg);
    av_payload_high_rate_av_commanded_data->commanded_airspeed = mavlink_msg_av_payload_high_rate_av_commanded_data_get_commanded_airspeed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN;
        memset(av_payload_high_rate_av_commanded_data, 0, MAVLINK_MSG_ID_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA_LEN);
    memcpy(av_payload_high_rate_av_commanded_data, _MAV_PAYLOAD(msg), len);
#endif
}
