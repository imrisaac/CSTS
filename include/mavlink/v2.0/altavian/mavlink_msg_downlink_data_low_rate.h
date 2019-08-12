#pragma once
// MESSAGE DOWNLINK_DATA_LOW_RATE PACKING

#define MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE 196

MAVPACKED(
typedef struct __mavlink_downlink_data_low_rate_t {
 uint16_t aircraft_id; /*< */
 uint16_t uav_battery_voltage; /*< V*1000*/
 int16_t uav_temperature; /*< C*100*/
 uint16_t flight_time; /*< seconds*/
 uint16_t wind_speed; /*< m/s*100*/
 int16_t wind_direction; /*< rad*10000*/
 uint16_t radio_channel; /*< */
 uint16_t radio_tx_power; /*< Db-m*/
 uint16_t uav_sw_Version; /*< (Minor)*100 + (Build)*/
 uint8_t aircraft_type; /*< */
 uint8_t uav_uplink_fps; /*< 0 to 10 frames*/
}) mavlink_downlink_data_low_rate_t;

#define MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN 20
#define MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN 20
#define MAVLINK_MSG_ID_196_LEN 20
#define MAVLINK_MSG_ID_196_MIN_LEN 20

#define MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC 33
#define MAVLINK_MSG_ID_196_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_LOW_RATE { \
    196, \
    "DOWNLINK_DATA_LOW_RATE", \
    11, \
    {  { "aircraft_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_downlink_data_low_rate_t, aircraft_id) }, \
         { "uav_battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_downlink_data_low_rate_t, uav_battery_voltage) }, \
         { "uav_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_downlink_data_low_rate_t, uav_temperature) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_downlink_data_low_rate_t, flight_time) }, \
         { "wind_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_downlink_data_low_rate_t, wind_speed) }, \
         { "wind_direction", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_downlink_data_low_rate_t, wind_direction) }, \
         { "radio_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_downlink_data_low_rate_t, radio_channel) }, \
         { "radio_tx_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_downlink_data_low_rate_t, radio_tx_power) }, \
         { "uav_sw_Version", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_downlink_data_low_rate_t, uav_sw_Version) }, \
         { "aircraft_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_downlink_data_low_rate_t, aircraft_type) }, \
         { "uav_uplink_fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_downlink_data_low_rate_t, uav_uplink_fps) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_LOW_RATE { \
    "DOWNLINK_DATA_LOW_RATE", \
    11, \
    {  { "aircraft_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_downlink_data_low_rate_t, aircraft_id) }, \
         { "uav_battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_downlink_data_low_rate_t, uav_battery_voltage) }, \
         { "uav_temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_downlink_data_low_rate_t, uav_temperature) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_downlink_data_low_rate_t, flight_time) }, \
         { "wind_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_downlink_data_low_rate_t, wind_speed) }, \
         { "wind_direction", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_downlink_data_low_rate_t, wind_direction) }, \
         { "radio_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_downlink_data_low_rate_t, radio_channel) }, \
         { "radio_tx_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_downlink_data_low_rate_t, radio_tx_power) }, \
         { "uav_sw_Version", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_downlink_data_low_rate_t, uav_sw_Version) }, \
         { "aircraft_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_downlink_data_low_rate_t, aircraft_type) }, \
         { "uav_uplink_fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_downlink_data_low_rate_t, uav_uplink_fps) }, \
         } \
}
#endif

/**
 * @brief Pack a downlink_data_low_rate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param aircraft_type 
 * @param aircraft_id 
 * @param uav_battery_voltage V*1000
 * @param uav_temperature C*100
 * @param flight_time seconds
 * @param wind_speed m/s*100
 * @param wind_direction rad*10000
 * @param radio_channel 
 * @param radio_tx_power Db-m
 * @param uav_uplink_fps 0 to 10 frames
 * @param uav_sw_Version (Minor)*100 + (Build)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t aircraft_type, uint16_t aircraft_id, uint16_t uav_battery_voltage, int16_t uav_temperature, uint16_t flight_time, uint16_t wind_speed, int16_t wind_direction, uint16_t radio_channel, uint16_t radio_tx_power, uint8_t uav_uplink_fps, uint16_t uav_sw_Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN];
    _mav_put_uint16_t(buf, 0, aircraft_id);
    _mav_put_uint16_t(buf, 2, uav_battery_voltage);
    _mav_put_int16_t(buf, 4, uav_temperature);
    _mav_put_uint16_t(buf, 6, flight_time);
    _mav_put_uint16_t(buf, 8, wind_speed);
    _mav_put_int16_t(buf, 10, wind_direction);
    _mav_put_uint16_t(buf, 12, radio_channel);
    _mav_put_uint16_t(buf, 14, radio_tx_power);
    _mav_put_uint16_t(buf, 16, uav_sw_Version);
    _mav_put_uint8_t(buf, 18, aircraft_type);
    _mav_put_uint8_t(buf, 19, uav_uplink_fps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN);
#else
    mavlink_downlink_data_low_rate_t packet;
    packet.aircraft_id = aircraft_id;
    packet.uav_battery_voltage = uav_battery_voltage;
    packet.uav_temperature = uav_temperature;
    packet.flight_time = flight_time;
    packet.wind_speed = wind_speed;
    packet.wind_direction = wind_direction;
    packet.radio_channel = radio_channel;
    packet.radio_tx_power = radio_tx_power;
    packet.uav_sw_Version = uav_sw_Version;
    packet.aircraft_type = aircraft_type;
    packet.uav_uplink_fps = uav_uplink_fps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
}

/**
 * @brief Pack a downlink_data_low_rate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aircraft_type 
 * @param aircraft_id 
 * @param uav_battery_voltage V*1000
 * @param uav_temperature C*100
 * @param flight_time seconds
 * @param wind_speed m/s*100
 * @param wind_direction rad*10000
 * @param radio_channel 
 * @param radio_tx_power Db-m
 * @param uav_uplink_fps 0 to 10 frames
 * @param uav_sw_Version (Minor)*100 + (Build)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t aircraft_type,uint16_t aircraft_id,uint16_t uav_battery_voltage,int16_t uav_temperature,uint16_t flight_time,uint16_t wind_speed,int16_t wind_direction,uint16_t radio_channel,uint16_t radio_tx_power,uint8_t uav_uplink_fps,uint16_t uav_sw_Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN];
    _mav_put_uint16_t(buf, 0, aircraft_id);
    _mav_put_uint16_t(buf, 2, uav_battery_voltage);
    _mav_put_int16_t(buf, 4, uav_temperature);
    _mav_put_uint16_t(buf, 6, flight_time);
    _mav_put_uint16_t(buf, 8, wind_speed);
    _mav_put_int16_t(buf, 10, wind_direction);
    _mav_put_uint16_t(buf, 12, radio_channel);
    _mav_put_uint16_t(buf, 14, radio_tx_power);
    _mav_put_uint16_t(buf, 16, uav_sw_Version);
    _mav_put_uint8_t(buf, 18, aircraft_type);
    _mav_put_uint8_t(buf, 19, uav_uplink_fps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN);
#else
    mavlink_downlink_data_low_rate_t packet;
    packet.aircraft_id = aircraft_id;
    packet.uav_battery_voltage = uav_battery_voltage;
    packet.uav_temperature = uav_temperature;
    packet.flight_time = flight_time;
    packet.wind_speed = wind_speed;
    packet.wind_direction = wind_direction;
    packet.radio_channel = radio_channel;
    packet.radio_tx_power = radio_tx_power;
    packet.uav_sw_Version = uav_sw_Version;
    packet.aircraft_type = aircraft_type;
    packet.uav_uplink_fps = uav_uplink_fps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
}

/**
 * @brief Encode a downlink_data_low_rate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param downlink_data_low_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_downlink_data_low_rate_t* downlink_data_low_rate)
{
    return mavlink_msg_downlink_data_low_rate_pack(system_id, component_id, msg, downlink_data_low_rate->aircraft_type, downlink_data_low_rate->aircraft_id, downlink_data_low_rate->uav_battery_voltage, downlink_data_low_rate->uav_temperature, downlink_data_low_rate->flight_time, downlink_data_low_rate->wind_speed, downlink_data_low_rate->wind_direction, downlink_data_low_rate->radio_channel, downlink_data_low_rate->radio_tx_power, downlink_data_low_rate->uav_uplink_fps, downlink_data_low_rate->uav_sw_Version);
}

/**
 * @brief Encode a downlink_data_low_rate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param downlink_data_low_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_downlink_data_low_rate_t* downlink_data_low_rate)
{
    return mavlink_msg_downlink_data_low_rate_pack_chan(system_id, component_id, chan, msg, downlink_data_low_rate->aircraft_type, downlink_data_low_rate->aircraft_id, downlink_data_low_rate->uav_battery_voltage, downlink_data_low_rate->uav_temperature, downlink_data_low_rate->flight_time, downlink_data_low_rate->wind_speed, downlink_data_low_rate->wind_direction, downlink_data_low_rate->radio_channel, downlink_data_low_rate->radio_tx_power, downlink_data_low_rate->uav_uplink_fps, downlink_data_low_rate->uav_sw_Version);
}

/**
 * @brief Send a downlink_data_low_rate message
 * @param chan MAVLink channel to send the message
 *
 * @param aircraft_type 
 * @param aircraft_id 
 * @param uav_battery_voltage V*1000
 * @param uav_temperature C*100
 * @param flight_time seconds
 * @param wind_speed m/s*100
 * @param wind_direction rad*10000
 * @param radio_channel 
 * @param radio_tx_power Db-m
 * @param uav_uplink_fps 0 to 10 frames
 * @param uav_sw_Version (Minor)*100 + (Build)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_downlink_data_low_rate_send(mavlink_channel_t chan, uint8_t aircraft_type, uint16_t aircraft_id, uint16_t uav_battery_voltage, int16_t uav_temperature, uint16_t flight_time, uint16_t wind_speed, int16_t wind_direction, uint16_t radio_channel, uint16_t radio_tx_power, uint8_t uav_uplink_fps, uint16_t uav_sw_Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN];
    _mav_put_uint16_t(buf, 0, aircraft_id);
    _mav_put_uint16_t(buf, 2, uav_battery_voltage);
    _mav_put_int16_t(buf, 4, uav_temperature);
    _mav_put_uint16_t(buf, 6, flight_time);
    _mav_put_uint16_t(buf, 8, wind_speed);
    _mav_put_int16_t(buf, 10, wind_direction);
    _mav_put_uint16_t(buf, 12, radio_channel);
    _mav_put_uint16_t(buf, 14, radio_tx_power);
    _mav_put_uint16_t(buf, 16, uav_sw_Version);
    _mav_put_uint8_t(buf, 18, aircraft_type);
    _mav_put_uint8_t(buf, 19, uav_uplink_fps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE, buf, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
#else
    mavlink_downlink_data_low_rate_t packet;
    packet.aircraft_id = aircraft_id;
    packet.uav_battery_voltage = uav_battery_voltage;
    packet.uav_temperature = uav_temperature;
    packet.flight_time = flight_time;
    packet.wind_speed = wind_speed;
    packet.wind_direction = wind_direction;
    packet.radio_channel = radio_channel;
    packet.radio_tx_power = radio_tx_power;
    packet.uav_sw_Version = uav_sw_Version;
    packet.aircraft_type = aircraft_type;
    packet.uav_uplink_fps = uav_uplink_fps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE, (const char *)&packet, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
#endif
}

/**
 * @brief Send a downlink_data_low_rate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_downlink_data_low_rate_send_struct(mavlink_channel_t chan, const mavlink_downlink_data_low_rate_t* downlink_data_low_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_downlink_data_low_rate_send(chan, downlink_data_low_rate->aircraft_type, downlink_data_low_rate->aircraft_id, downlink_data_low_rate->uav_battery_voltage, downlink_data_low_rate->uav_temperature, downlink_data_low_rate->flight_time, downlink_data_low_rate->wind_speed, downlink_data_low_rate->wind_direction, downlink_data_low_rate->radio_channel, downlink_data_low_rate->radio_tx_power, downlink_data_low_rate->uav_uplink_fps, downlink_data_low_rate->uav_sw_Version);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE, (const char *)downlink_data_low_rate, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_downlink_data_low_rate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t aircraft_type, uint16_t aircraft_id, uint16_t uav_battery_voltage, int16_t uav_temperature, uint16_t flight_time, uint16_t wind_speed, int16_t wind_direction, uint16_t radio_channel, uint16_t radio_tx_power, uint8_t uav_uplink_fps, uint16_t uav_sw_Version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, aircraft_id);
    _mav_put_uint16_t(buf, 2, uav_battery_voltage);
    _mav_put_int16_t(buf, 4, uav_temperature);
    _mav_put_uint16_t(buf, 6, flight_time);
    _mav_put_uint16_t(buf, 8, wind_speed);
    _mav_put_int16_t(buf, 10, wind_direction);
    _mav_put_uint16_t(buf, 12, radio_channel);
    _mav_put_uint16_t(buf, 14, radio_tx_power);
    _mav_put_uint16_t(buf, 16, uav_sw_Version);
    _mav_put_uint8_t(buf, 18, aircraft_type);
    _mav_put_uint8_t(buf, 19, uav_uplink_fps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE, buf, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
#else
    mavlink_downlink_data_low_rate_t *packet = (mavlink_downlink_data_low_rate_t *)msgbuf;
    packet->aircraft_id = aircraft_id;
    packet->uav_battery_voltage = uav_battery_voltage;
    packet->uav_temperature = uav_temperature;
    packet->flight_time = flight_time;
    packet->wind_speed = wind_speed;
    packet->wind_direction = wind_direction;
    packet->radio_channel = radio_channel;
    packet->radio_tx_power = radio_tx_power;
    packet->uav_sw_Version = uav_sw_Version;
    packet->aircraft_type = aircraft_type;
    packet->uav_uplink_fps = uav_uplink_fps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE, (const char *)packet, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_CRC);
#endif
}
#endif

#endif

// MESSAGE DOWNLINK_DATA_LOW_RATE UNPACKING


/**
 * @brief Get field aircraft_type from downlink_data_low_rate message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_downlink_data_low_rate_get_aircraft_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field aircraft_id from downlink_data_low_rate message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_aircraft_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field uav_battery_voltage from downlink_data_low_rate message
 *
 * @return V*1000
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_uav_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field uav_temperature from downlink_data_low_rate message
 *
 * @return C*100
 */
static inline int16_t mavlink_msg_downlink_data_low_rate_get_uav_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field flight_time from downlink_data_low_rate message
 *
 * @return seconds
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_flight_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field wind_speed from downlink_data_low_rate message
 *
 * @return m/s*100
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_wind_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field wind_direction from downlink_data_low_rate message
 *
 * @return rad*10000
 */
static inline int16_t mavlink_msg_downlink_data_low_rate_get_wind_direction(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field radio_channel from downlink_data_low_rate message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_radio_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field radio_tx_power from downlink_data_low_rate message
 *
 * @return Db-m
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_radio_tx_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field uav_uplink_fps from downlink_data_low_rate message
 *
 * @return 0 to 10 frames
 */
static inline uint8_t mavlink_msg_downlink_data_low_rate_get_uav_uplink_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field uav_sw_Version from downlink_data_low_rate message
 *
 * @return (Minor)*100 + (Build)
 */
static inline uint16_t mavlink_msg_downlink_data_low_rate_get_uav_sw_Version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Decode a downlink_data_low_rate message into a struct
 *
 * @param msg The message to decode
 * @param downlink_data_low_rate C-struct to decode the message contents into
 */
static inline void mavlink_msg_downlink_data_low_rate_decode(const mavlink_message_t* msg, mavlink_downlink_data_low_rate_t* downlink_data_low_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    downlink_data_low_rate->aircraft_id = mavlink_msg_downlink_data_low_rate_get_aircraft_id(msg);
    downlink_data_low_rate->uav_battery_voltage = mavlink_msg_downlink_data_low_rate_get_uav_battery_voltage(msg);
    downlink_data_low_rate->uav_temperature = mavlink_msg_downlink_data_low_rate_get_uav_temperature(msg);
    downlink_data_low_rate->flight_time = mavlink_msg_downlink_data_low_rate_get_flight_time(msg);
    downlink_data_low_rate->wind_speed = mavlink_msg_downlink_data_low_rate_get_wind_speed(msg);
    downlink_data_low_rate->wind_direction = mavlink_msg_downlink_data_low_rate_get_wind_direction(msg);
    downlink_data_low_rate->radio_channel = mavlink_msg_downlink_data_low_rate_get_radio_channel(msg);
    downlink_data_low_rate->radio_tx_power = mavlink_msg_downlink_data_low_rate_get_radio_tx_power(msg);
    downlink_data_low_rate->uav_sw_Version = mavlink_msg_downlink_data_low_rate_get_uav_sw_Version(msg);
    downlink_data_low_rate->aircraft_type = mavlink_msg_downlink_data_low_rate_get_aircraft_type(msg);
    downlink_data_low_rate->uav_uplink_fps = mavlink_msg_downlink_data_low_rate_get_uav_uplink_fps(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN? msg->len : MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN;
        memset(downlink_data_low_rate, 0, MAVLINK_MSG_ID_DOWNLINK_DATA_LOW_RATE_LEN);
    memcpy(downlink_data_low_rate, _MAV_PAYLOAD(msg), len);
#endif
}
