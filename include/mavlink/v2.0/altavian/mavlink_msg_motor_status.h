#pragma once
// MESSAGE MOTOR_STATUS PACKING

#define MAVLINK_MSG_ID_MOTOR_STATUS 189

MAVPACKED(
typedef struct __mavlink_motor_status_t {
 uint16_t pwm_high_time; /*< Motor Controller PWM High Time (microseconds)*/
 int16_t temperature; /*< Motor Controller Temperature (celsius * 100)*/
}) mavlink_motor_status_t;

#define MAVLINK_MSG_ID_MOTOR_STATUS_LEN 4
#define MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN 4
#define MAVLINK_MSG_ID_189_LEN 4
#define MAVLINK_MSG_ID_189_MIN_LEN 4

#define MAVLINK_MSG_ID_MOTOR_STATUS_CRC 249
#define MAVLINK_MSG_ID_189_CRC 249



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MOTOR_STATUS { \
    189, \
    "MOTOR_STATUS", \
    2, \
    {  { "pwm_high_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_motor_status_t, pwm_high_time) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_motor_status_t, temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MOTOR_STATUS { \
    "MOTOR_STATUS", \
    2, \
    {  { "pwm_high_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_motor_status_t, pwm_high_time) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_motor_status_t, temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a motor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pwm_high_time Motor Controller PWM High Time (microseconds)
 * @param temperature Motor Controller Temperature (celsius * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_motor_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t pwm_high_time, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, pwm_high_time);
    _mav_put_int16_t(buf, 2, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MOTOR_STATUS_LEN);
#else
    mavlink_motor_status_t packet;
    packet.pwm_high_time = pwm_high_time;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MOTOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
}

/**
 * @brief Pack a motor_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pwm_high_time Motor Controller PWM High Time (microseconds)
 * @param temperature Motor Controller Temperature (celsius * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_motor_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t pwm_high_time,int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, pwm_high_time);
    _mav_put_int16_t(buf, 2, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MOTOR_STATUS_LEN);
#else
    mavlink_motor_status_t packet;
    packet.pwm_high_time = pwm_high_time;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MOTOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
}

/**
 * @brief Encode a motor_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_motor_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_motor_status_t* motor_status)
{
    return mavlink_msg_motor_status_pack(system_id, component_id, msg, motor_status->pwm_high_time, motor_status->temperature);
}

/**
 * @brief Encode a motor_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_motor_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_motor_status_t* motor_status)
{
    return mavlink_msg_motor_status_pack_chan(system_id, component_id, chan, msg, motor_status->pwm_high_time, motor_status->temperature);
}

/**
 * @brief Send a motor_status message
 * @param chan MAVLink channel to send the message
 *
 * @param pwm_high_time Motor Controller PWM High Time (microseconds)
 * @param temperature Motor Controller Temperature (celsius * 100)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_motor_status_send(mavlink_channel_t chan, uint16_t pwm_high_time, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, pwm_high_time);
    _mav_put_int16_t(buf, 2, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MOTOR_STATUS, buf, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
#else
    mavlink_motor_status_t packet;
    packet.pwm_high_time = pwm_high_time;
    packet.temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MOTOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a motor_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_motor_status_send_struct(mavlink_channel_t chan, const mavlink_motor_status_t* motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_motor_status_send(chan, motor_status->pwm_high_time, motor_status->temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MOTOR_STATUS, (const char *)motor_status, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MOTOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_motor_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t pwm_high_time, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, pwm_high_time);
    _mav_put_int16_t(buf, 2, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MOTOR_STATUS, buf, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
#else
    mavlink_motor_status_t *packet = (mavlink_motor_status_t *)msgbuf;
    packet->pwm_high_time = pwm_high_time;
    packet->temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MOTOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_MOTOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE MOTOR_STATUS UNPACKING


/**
 * @brief Get field pwm_high_time from motor_status message
 *
 * @return Motor Controller PWM High Time (microseconds)
 */
static inline uint16_t mavlink_msg_motor_status_get_pwm_high_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field temperature from motor_status message
 *
 * @return Motor Controller Temperature (celsius * 100)
 */
static inline int16_t mavlink_msg_motor_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a motor_status message into a struct
 *
 * @param msg The message to decode
 * @param motor_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_motor_status_decode(const mavlink_message_t* msg, mavlink_motor_status_t* motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    motor_status->pwm_high_time = mavlink_msg_motor_status_get_pwm_high_time(msg);
    motor_status->temperature = mavlink_msg_motor_status_get_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MOTOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_MOTOR_STATUS_LEN;
        memset(motor_status, 0, MAVLINK_MSG_ID_MOTOR_STATUS_LEN);
    memcpy(motor_status, _MAV_PAYLOAD(msg), len);
#endif
}
