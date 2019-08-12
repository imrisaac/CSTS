#pragma once
// MESSAGE AV_BATTERY_STATUS PACKING

#define MAVLINK_MSG_ID_AV_BATTERY_STATUS 190

MAVPACKED(
typedef struct __mavlink_av_battery_status_t {
 int16_t temperature; /*< Battery temperature (celsius * 100)*/
 uint16_t voltage; /*< Battery voltage (mV)*/
 int16_t current; /*< Battery output current (negative for discharge; amps * 100 * -1; Range: 0 to approx. -4000)*/
 uint16_t capacity; /*< Battery total capacity (mA*h)*/
 uint16_t pcba_temp; /*< Battery PCBA Temperature (celsius * 100).*/
 uint8_t device_type; /*< Device type sending message. See DEVICE_TYPE_BITS, DEVICE_TYPE_CATEGORIES, and related [X]_DEVICE_TYPES enums.*/
 uint8_t battery_command; /*< See BATTERY_COMMAND_FLAGS enum.*/
}) mavlink_av_battery_status_t;

#define MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN 12
#define MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN 12
#define MAVLINK_MSG_ID_190_LEN 12
#define MAVLINK_MSG_ID_190_MIN_LEN 12

#define MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC 136
#define MAVLINK_MSG_ID_190_CRC 136



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_BATTERY_STATUS { \
    190, \
    "AV_BATTERY_STATUS", \
    7, \
    {  { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_battery_status_t, temperature) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_battery_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_battery_status_t, current) }, \
         { "capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_av_battery_status_t, capacity) }, \
         { "pcba_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_av_battery_status_t, pcba_temp) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_av_battery_status_t, device_type) }, \
         { "battery_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_av_battery_status_t, battery_command) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_BATTERY_STATUS { \
    "AV_BATTERY_STATUS", \
    7, \
    {  { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_av_battery_status_t, temperature) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_battery_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_av_battery_status_t, current) }, \
         { "capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_av_battery_status_t, capacity) }, \
         { "pcba_temp", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_av_battery_status_t, pcba_temp) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_av_battery_status_t, device_type) }, \
         { "battery_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_av_battery_status_t, battery_command) }, \
         } \
}
#endif

/**
 * @brief Pack a av_battery_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param device_type Device type sending message. See DEVICE_TYPE_BITS, DEVICE_TYPE_CATEGORIES, and related [X]_DEVICE_TYPES enums.
 * @param battery_command See BATTERY_COMMAND_FLAGS enum.
 * @param temperature Battery temperature (celsius * 100)
 * @param voltage Battery voltage (mV)
 * @param current Battery output current (negative for discharge; amps * 100 * -1; Range: 0 to approx. -4000)
 * @param capacity Battery total capacity (mA*h)
 * @param pcba_temp Battery PCBA Temperature (celsius * 100).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_battery_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t device_type, uint8_t battery_command, int16_t temperature, uint16_t voltage, int16_t current, uint16_t capacity, uint16_t pcba_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_uint16_t(buf, 2, voltage);
    _mav_put_int16_t(buf, 4, current);
    _mav_put_uint16_t(buf, 6, capacity);
    _mav_put_uint16_t(buf, 8, pcba_temp);
    _mav_put_uint8_t(buf, 10, device_type);
    _mav_put_uint8_t(buf, 11, battery_command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN);
#else
    mavlink_av_battery_status_t packet;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.current = current;
    packet.capacity = capacity;
    packet.pcba_temp = pcba_temp;
    packet.device_type = device_type;
    packet.battery_command = battery_command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_BATTERY_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
}

/**
 * @brief Pack a av_battery_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param device_type Device type sending message. See DEVICE_TYPE_BITS, DEVICE_TYPE_CATEGORIES, and related [X]_DEVICE_TYPES enums.
 * @param battery_command See BATTERY_COMMAND_FLAGS enum.
 * @param temperature Battery temperature (celsius * 100)
 * @param voltage Battery voltage (mV)
 * @param current Battery output current (negative for discharge; amps * 100 * -1; Range: 0 to approx. -4000)
 * @param capacity Battery total capacity (mA*h)
 * @param pcba_temp Battery PCBA Temperature (celsius * 100).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_battery_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t device_type,uint8_t battery_command,int16_t temperature,uint16_t voltage,int16_t current,uint16_t capacity,uint16_t pcba_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_uint16_t(buf, 2, voltage);
    _mav_put_int16_t(buf, 4, current);
    _mav_put_uint16_t(buf, 6, capacity);
    _mav_put_uint16_t(buf, 8, pcba_temp);
    _mav_put_uint8_t(buf, 10, device_type);
    _mav_put_uint8_t(buf, 11, battery_command);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN);
#else
    mavlink_av_battery_status_t packet;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.current = current;
    packet.capacity = capacity;
    packet.pcba_temp = pcba_temp;
    packet.device_type = device_type;
    packet.battery_command = battery_command;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_BATTERY_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
}

/**
 * @brief Encode a av_battery_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_battery_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_battery_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_battery_status_t* av_battery_status)
{
    return mavlink_msg_av_battery_status_pack(system_id, component_id, msg, av_battery_status->device_type, av_battery_status->battery_command, av_battery_status->temperature, av_battery_status->voltage, av_battery_status->current, av_battery_status->capacity, av_battery_status->pcba_temp);
}

/**
 * @brief Encode a av_battery_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_battery_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_battery_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_battery_status_t* av_battery_status)
{
    return mavlink_msg_av_battery_status_pack_chan(system_id, component_id, chan, msg, av_battery_status->device_type, av_battery_status->battery_command, av_battery_status->temperature, av_battery_status->voltage, av_battery_status->current, av_battery_status->capacity, av_battery_status->pcba_temp);
}

/**
 * @brief Send a av_battery_status message
 * @param chan MAVLink channel to send the message
 *
 * @param device_type Device type sending message. See DEVICE_TYPE_BITS, DEVICE_TYPE_CATEGORIES, and related [X]_DEVICE_TYPES enums.
 * @param battery_command See BATTERY_COMMAND_FLAGS enum.
 * @param temperature Battery temperature (celsius * 100)
 * @param voltage Battery voltage (mV)
 * @param current Battery output current (negative for discharge; amps * 100 * -1; Range: 0 to approx. -4000)
 * @param capacity Battery total capacity (mA*h)
 * @param pcba_temp Battery PCBA Temperature (celsius * 100).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_battery_status_send(mavlink_channel_t chan, uint8_t device_type, uint8_t battery_command, int16_t temperature, uint16_t voltage, int16_t current, uint16_t capacity, uint16_t pcba_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN];
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_uint16_t(buf, 2, voltage);
    _mav_put_int16_t(buf, 4, current);
    _mav_put_uint16_t(buf, 6, capacity);
    _mav_put_uint16_t(buf, 8, pcba_temp);
    _mav_put_uint8_t(buf, 10, device_type);
    _mav_put_uint8_t(buf, 11, battery_command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS, buf, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
#else
    mavlink_av_battery_status_t packet;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.current = current;
    packet.capacity = capacity;
    packet.pcba_temp = pcba_temp;
    packet.device_type = device_type;
    packet.battery_command = battery_command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
#endif
}

/**
 * @brief Send a av_battery_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_battery_status_send_struct(mavlink_channel_t chan, const mavlink_av_battery_status_t* av_battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_battery_status_send(chan, av_battery_status->device_type, av_battery_status->battery_command, av_battery_status->temperature, av_battery_status->voltage, av_battery_status->current, av_battery_status->capacity, av_battery_status->pcba_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS, (const char *)av_battery_status, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_battery_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t device_type, uint8_t battery_command, int16_t temperature, uint16_t voltage, int16_t current, uint16_t capacity, uint16_t pcba_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, temperature);
    _mav_put_uint16_t(buf, 2, voltage);
    _mav_put_int16_t(buf, 4, current);
    _mav_put_uint16_t(buf, 6, capacity);
    _mav_put_uint16_t(buf, 8, pcba_temp);
    _mav_put_uint8_t(buf, 10, device_type);
    _mav_put_uint8_t(buf, 11, battery_command);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS, buf, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
#else
    mavlink_av_battery_status_t *packet = (mavlink_av_battery_status_t *)msgbuf;
    packet->temperature = temperature;
    packet->voltage = voltage;
    packet->current = current;
    packet->capacity = capacity;
    packet->pcba_temp = pcba_temp;
    packet->device_type = device_type;
    packet->battery_command = battery_command;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_BATTERY_STATUS, (const char *)packet, MAVLINK_MSG_ID_AV_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_AV_BATTERY_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_BATTERY_STATUS UNPACKING


/**
 * @brief Get field device_type from av_battery_status message
 *
 * @return Device type sending message. See DEVICE_TYPE_BITS, DEVICE_TYPE_CATEGORIES, and related [X]_DEVICE_TYPES enums.
 */
static inline uint8_t mavlink_msg_av_battery_status_get_device_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field battery_command from av_battery_status message
 *
 * @return See BATTERY_COMMAND_FLAGS enum.
 */
static inline uint8_t mavlink_msg_av_battery_status_get_battery_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field temperature from av_battery_status message
 *
 * @return Battery temperature (celsius * 100)
 */
static inline int16_t mavlink_msg_av_battery_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field voltage from av_battery_status message
 *
 * @return Battery voltage (mV)
 */
static inline uint16_t mavlink_msg_av_battery_status_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field current from av_battery_status message
 *
 * @return Battery output current (negative for discharge; amps * 100 * -1; Range: 0 to approx. -4000)
 */
static inline int16_t mavlink_msg_av_battery_status_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field capacity from av_battery_status message
 *
 * @return Battery total capacity (mA*h)
 */
static inline uint16_t mavlink_msg_av_battery_status_get_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field pcba_temp from av_battery_status message
 *
 * @return Battery PCBA Temperature (celsius * 100).
 */
static inline uint16_t mavlink_msg_av_battery_status_get_pcba_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Decode a av_battery_status message into a struct
 *
 * @param msg The message to decode
 * @param av_battery_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_battery_status_decode(const mavlink_message_t* msg, mavlink_av_battery_status_t* av_battery_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_battery_status->temperature = mavlink_msg_av_battery_status_get_temperature(msg);
    av_battery_status->voltage = mavlink_msg_av_battery_status_get_voltage(msg);
    av_battery_status->current = mavlink_msg_av_battery_status_get_current(msg);
    av_battery_status->capacity = mavlink_msg_av_battery_status_get_capacity(msg);
    av_battery_status->pcba_temp = mavlink_msg_av_battery_status_get_pcba_temp(msg);
    av_battery_status->device_type = mavlink_msg_av_battery_status_get_device_type(msg);
    av_battery_status->battery_command = mavlink_msg_av_battery_status_get_battery_command(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN? msg->len : MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN;
        memset(av_battery_status, 0, MAVLINK_MSG_ID_AV_BATTERY_STATUS_LEN);
    memcpy(av_battery_status, _MAV_PAYLOAD(msg), len);
#endif
}
