#pragma once
// MESSAGE DOWNLINK_DATA_HIGH_RATE PACKING

#define MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE 197

MAVPACKED(
typedef struct __mavlink_downlink_data_high_rate_t {
 uint32_t downlink_flags; /*< See UAV_STATUS_FLAGS */
 int32_t latitude; /*< -pi/2 to pi/2 * 1E8*/
 int32_t longitude; /*< -pi/2 to pi/2 * 1E8*/
 uint32_t avx_time; /*< (seconds * 100)*/
 int16_t climb_rate; /*< */
 int16_t altitude; /*< m*/
 int16_t av_heading; /*< -pi to pi, radian * 10000*/
 int16_t pitch_angle; /*< -pi to pi, radian * 10000*/
 int16_t bank_angle; /*< -pi to pi, radian * 10000*/
 int16_t yaw_rate; /*< radians/sec * 1000*/
 int16_t pitch_rate; /*< radians/sec * 1000*/
 int16_t roll_rate; /*< radians/sec * 1000*/
 int16_t ground_velocity; /*< meters/sec * 100*/
 int16_t ground_track; /*< -pi to pi * 10000*/
 int16_t air_speed; /*< meters/sec * 1000*/
 int16_t x_accel; /*< (g * 1000)*/
 int16_t y_accel; /*< (g * 1000)*/
 int16_t z_accel; /*< (g * 1000)*/
}) mavlink_downlink_data_high_rate_t;

#define MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN 44
#define MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN 44
#define MAVLINK_MSG_ID_197_LEN 44
#define MAVLINK_MSG_ID_197_MIN_LEN 44

#define MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC 156
#define MAVLINK_MSG_ID_197_CRC 156



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_HIGH_RATE { \
    197, \
    "DOWNLINK_DATA_HIGH_RATE", \
    18, \
    {  { "downlink_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_downlink_data_high_rate_t, downlink_flags) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_downlink_data_high_rate_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_downlink_data_high_rate_t, longitude) }, \
         { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_downlink_data_high_rate_t, avx_time) }, \
         { "climb_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_downlink_data_high_rate_t, climb_rate) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_downlink_data_high_rate_t, altitude) }, \
         { "av_heading", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_downlink_data_high_rate_t, av_heading) }, \
         { "pitch_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_downlink_data_high_rate_t, pitch_angle) }, \
         { "bank_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_downlink_data_high_rate_t, bank_angle) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_downlink_data_high_rate_t, yaw_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_downlink_data_high_rate_t, pitch_rate) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_downlink_data_high_rate_t, roll_rate) }, \
         { "ground_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_downlink_data_high_rate_t, ground_velocity) }, \
         { "ground_track", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_downlink_data_high_rate_t, ground_track) }, \
         { "air_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_downlink_data_high_rate_t, air_speed) }, \
         { "x_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_downlink_data_high_rate_t, x_accel) }, \
         { "y_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_downlink_data_high_rate_t, y_accel) }, \
         { "z_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_downlink_data_high_rate_t, z_accel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_HIGH_RATE { \
    "DOWNLINK_DATA_HIGH_RATE", \
    18, \
    {  { "downlink_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_downlink_data_high_rate_t, downlink_flags) }, \
         { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_downlink_data_high_rate_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_downlink_data_high_rate_t, longitude) }, \
         { "avx_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_downlink_data_high_rate_t, avx_time) }, \
         { "climb_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_downlink_data_high_rate_t, climb_rate) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_downlink_data_high_rate_t, altitude) }, \
         { "av_heading", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_downlink_data_high_rate_t, av_heading) }, \
         { "pitch_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_downlink_data_high_rate_t, pitch_angle) }, \
         { "bank_angle", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_downlink_data_high_rate_t, bank_angle) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_downlink_data_high_rate_t, yaw_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_downlink_data_high_rate_t, pitch_rate) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_downlink_data_high_rate_t, roll_rate) }, \
         { "ground_velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_downlink_data_high_rate_t, ground_velocity) }, \
         { "ground_track", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_downlink_data_high_rate_t, ground_track) }, \
         { "air_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_downlink_data_high_rate_t, air_speed) }, \
         { "x_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_downlink_data_high_rate_t, x_accel) }, \
         { "y_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_downlink_data_high_rate_t, y_accel) }, \
         { "z_accel", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_downlink_data_high_rate_t, z_accel) }, \
         } \
}
#endif

/**
 * @brief Pack a downlink_data_high_rate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param downlink_flags See UAV_STATUS_FLAGS 
 * @param climb_rate 
 * @param altitude m
 * @param av_heading -pi to pi, radian * 10000
 * @param pitch_angle -pi to pi, radian * 10000
 * @param bank_angle -pi to pi, radian * 10000
 * @param yaw_rate radians/sec * 1000
 * @param pitch_rate radians/sec * 1000
 * @param roll_rate radians/sec * 1000
 * @param latitude -pi/2 to pi/2 * 1E8
 * @param longitude -pi/2 to pi/2 * 1E8
 * @param ground_velocity meters/sec * 100
 * @param ground_track -pi to pi * 10000
 * @param air_speed meters/sec * 1000
 * @param x_accel (g * 1000)
 * @param y_accel (g * 1000)
 * @param z_accel (g * 1000)
 * @param avx_time (seconds * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_data_high_rate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t downlink_flags, int16_t climb_rate, int16_t altitude, int16_t av_heading, int16_t pitch_angle, int16_t bank_angle, int16_t yaw_rate, int16_t pitch_rate, int16_t roll_rate, int32_t latitude, int32_t longitude, int16_t ground_velocity, int16_t ground_track, int16_t air_speed, int16_t x_accel, int16_t y_accel, int16_t z_accel, uint32_t avx_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN];
    _mav_put_uint32_t(buf, 0, downlink_flags);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint32_t(buf, 12, avx_time);
    _mav_put_int16_t(buf, 16, climb_rate);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_int16_t(buf, 20, av_heading);
    _mav_put_int16_t(buf, 22, pitch_angle);
    _mav_put_int16_t(buf, 24, bank_angle);
    _mav_put_int16_t(buf, 26, yaw_rate);
    _mav_put_int16_t(buf, 28, pitch_rate);
    _mav_put_int16_t(buf, 30, roll_rate);
    _mav_put_int16_t(buf, 32, ground_velocity);
    _mav_put_int16_t(buf, 34, ground_track);
    _mav_put_int16_t(buf, 36, air_speed);
    _mav_put_int16_t(buf, 38, x_accel);
    _mav_put_int16_t(buf, 40, y_accel);
    _mav_put_int16_t(buf, 42, z_accel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN);
#else
    mavlink_downlink_data_high_rate_t packet;
    packet.downlink_flags = downlink_flags;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.avx_time = avx_time;
    packet.climb_rate = climb_rate;
    packet.altitude = altitude;
    packet.av_heading = av_heading;
    packet.pitch_angle = pitch_angle;
    packet.bank_angle = bank_angle;
    packet.yaw_rate = yaw_rate;
    packet.pitch_rate = pitch_rate;
    packet.roll_rate = roll_rate;
    packet.ground_velocity = ground_velocity;
    packet.ground_track = ground_track;
    packet.air_speed = air_speed;
    packet.x_accel = x_accel;
    packet.y_accel = y_accel;
    packet.z_accel = z_accel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
}

/**
 * @brief Pack a downlink_data_high_rate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param downlink_flags See UAV_STATUS_FLAGS 
 * @param climb_rate 
 * @param altitude m
 * @param av_heading -pi to pi, radian * 10000
 * @param pitch_angle -pi to pi, radian * 10000
 * @param bank_angle -pi to pi, radian * 10000
 * @param yaw_rate radians/sec * 1000
 * @param pitch_rate radians/sec * 1000
 * @param roll_rate radians/sec * 1000
 * @param latitude -pi/2 to pi/2 * 1E8
 * @param longitude -pi/2 to pi/2 * 1E8
 * @param ground_velocity meters/sec * 100
 * @param ground_track -pi to pi * 10000
 * @param air_speed meters/sec * 1000
 * @param x_accel (g * 1000)
 * @param y_accel (g * 1000)
 * @param z_accel (g * 1000)
 * @param avx_time (seconds * 100)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_data_high_rate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t downlink_flags,int16_t climb_rate,int16_t altitude,int16_t av_heading,int16_t pitch_angle,int16_t bank_angle,int16_t yaw_rate,int16_t pitch_rate,int16_t roll_rate,int32_t latitude,int32_t longitude,int16_t ground_velocity,int16_t ground_track,int16_t air_speed,int16_t x_accel,int16_t y_accel,int16_t z_accel,uint32_t avx_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN];
    _mav_put_uint32_t(buf, 0, downlink_flags);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint32_t(buf, 12, avx_time);
    _mav_put_int16_t(buf, 16, climb_rate);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_int16_t(buf, 20, av_heading);
    _mav_put_int16_t(buf, 22, pitch_angle);
    _mav_put_int16_t(buf, 24, bank_angle);
    _mav_put_int16_t(buf, 26, yaw_rate);
    _mav_put_int16_t(buf, 28, pitch_rate);
    _mav_put_int16_t(buf, 30, roll_rate);
    _mav_put_int16_t(buf, 32, ground_velocity);
    _mav_put_int16_t(buf, 34, ground_track);
    _mav_put_int16_t(buf, 36, air_speed);
    _mav_put_int16_t(buf, 38, x_accel);
    _mav_put_int16_t(buf, 40, y_accel);
    _mav_put_int16_t(buf, 42, z_accel);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN);
#else
    mavlink_downlink_data_high_rate_t packet;
    packet.downlink_flags = downlink_flags;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.avx_time = avx_time;
    packet.climb_rate = climb_rate;
    packet.altitude = altitude;
    packet.av_heading = av_heading;
    packet.pitch_angle = pitch_angle;
    packet.bank_angle = bank_angle;
    packet.yaw_rate = yaw_rate;
    packet.pitch_rate = pitch_rate;
    packet.roll_rate = roll_rate;
    packet.ground_velocity = ground_velocity;
    packet.ground_track = ground_track;
    packet.air_speed = air_speed;
    packet.x_accel = x_accel;
    packet.y_accel = y_accel;
    packet.z_accel = z_accel;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
}

/**
 * @brief Encode a downlink_data_high_rate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param downlink_data_high_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_data_high_rate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_downlink_data_high_rate_t* downlink_data_high_rate)
{
    return mavlink_msg_downlink_data_high_rate_pack(system_id, component_id, msg, downlink_data_high_rate->downlink_flags, downlink_data_high_rate->climb_rate, downlink_data_high_rate->altitude, downlink_data_high_rate->av_heading, downlink_data_high_rate->pitch_angle, downlink_data_high_rate->bank_angle, downlink_data_high_rate->yaw_rate, downlink_data_high_rate->pitch_rate, downlink_data_high_rate->roll_rate, downlink_data_high_rate->latitude, downlink_data_high_rate->longitude, downlink_data_high_rate->ground_velocity, downlink_data_high_rate->ground_track, downlink_data_high_rate->air_speed, downlink_data_high_rate->x_accel, downlink_data_high_rate->y_accel, downlink_data_high_rate->z_accel, downlink_data_high_rate->avx_time);
}

/**
 * @brief Encode a downlink_data_high_rate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param downlink_data_high_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_data_high_rate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_downlink_data_high_rate_t* downlink_data_high_rate)
{
    return mavlink_msg_downlink_data_high_rate_pack_chan(system_id, component_id, chan, msg, downlink_data_high_rate->downlink_flags, downlink_data_high_rate->climb_rate, downlink_data_high_rate->altitude, downlink_data_high_rate->av_heading, downlink_data_high_rate->pitch_angle, downlink_data_high_rate->bank_angle, downlink_data_high_rate->yaw_rate, downlink_data_high_rate->pitch_rate, downlink_data_high_rate->roll_rate, downlink_data_high_rate->latitude, downlink_data_high_rate->longitude, downlink_data_high_rate->ground_velocity, downlink_data_high_rate->ground_track, downlink_data_high_rate->air_speed, downlink_data_high_rate->x_accel, downlink_data_high_rate->y_accel, downlink_data_high_rate->z_accel, downlink_data_high_rate->avx_time);
}

/**
 * @brief Send a downlink_data_high_rate message
 * @param chan MAVLink channel to send the message
 *
 * @param downlink_flags See UAV_STATUS_FLAGS 
 * @param climb_rate 
 * @param altitude m
 * @param av_heading -pi to pi, radian * 10000
 * @param pitch_angle -pi to pi, radian * 10000
 * @param bank_angle -pi to pi, radian * 10000
 * @param yaw_rate radians/sec * 1000
 * @param pitch_rate radians/sec * 1000
 * @param roll_rate radians/sec * 1000
 * @param latitude -pi/2 to pi/2 * 1E8
 * @param longitude -pi/2 to pi/2 * 1E8
 * @param ground_velocity meters/sec * 100
 * @param ground_track -pi to pi * 10000
 * @param air_speed meters/sec * 1000
 * @param x_accel (g * 1000)
 * @param y_accel (g * 1000)
 * @param z_accel (g * 1000)
 * @param avx_time (seconds * 100)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_downlink_data_high_rate_send(mavlink_channel_t chan, uint32_t downlink_flags, int16_t climb_rate, int16_t altitude, int16_t av_heading, int16_t pitch_angle, int16_t bank_angle, int16_t yaw_rate, int16_t pitch_rate, int16_t roll_rate, int32_t latitude, int32_t longitude, int16_t ground_velocity, int16_t ground_track, int16_t air_speed, int16_t x_accel, int16_t y_accel, int16_t z_accel, uint32_t avx_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN];
    _mav_put_uint32_t(buf, 0, downlink_flags);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint32_t(buf, 12, avx_time);
    _mav_put_int16_t(buf, 16, climb_rate);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_int16_t(buf, 20, av_heading);
    _mav_put_int16_t(buf, 22, pitch_angle);
    _mav_put_int16_t(buf, 24, bank_angle);
    _mav_put_int16_t(buf, 26, yaw_rate);
    _mav_put_int16_t(buf, 28, pitch_rate);
    _mav_put_int16_t(buf, 30, roll_rate);
    _mav_put_int16_t(buf, 32, ground_velocity);
    _mav_put_int16_t(buf, 34, ground_track);
    _mav_put_int16_t(buf, 36, air_speed);
    _mav_put_int16_t(buf, 38, x_accel);
    _mav_put_int16_t(buf, 40, y_accel);
    _mav_put_int16_t(buf, 42, z_accel);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE, buf, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
#else
    mavlink_downlink_data_high_rate_t packet;
    packet.downlink_flags = downlink_flags;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.avx_time = avx_time;
    packet.climb_rate = climb_rate;
    packet.altitude = altitude;
    packet.av_heading = av_heading;
    packet.pitch_angle = pitch_angle;
    packet.bank_angle = bank_angle;
    packet.yaw_rate = yaw_rate;
    packet.pitch_rate = pitch_rate;
    packet.roll_rate = roll_rate;
    packet.ground_velocity = ground_velocity;
    packet.ground_track = ground_track;
    packet.air_speed = air_speed;
    packet.x_accel = x_accel;
    packet.y_accel = y_accel;
    packet.z_accel = z_accel;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE, (const char *)&packet, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
#endif
}

/**
 * @brief Send a downlink_data_high_rate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_downlink_data_high_rate_send_struct(mavlink_channel_t chan, const mavlink_downlink_data_high_rate_t* downlink_data_high_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_downlink_data_high_rate_send(chan, downlink_data_high_rate->downlink_flags, downlink_data_high_rate->climb_rate, downlink_data_high_rate->altitude, downlink_data_high_rate->av_heading, downlink_data_high_rate->pitch_angle, downlink_data_high_rate->bank_angle, downlink_data_high_rate->yaw_rate, downlink_data_high_rate->pitch_rate, downlink_data_high_rate->roll_rate, downlink_data_high_rate->latitude, downlink_data_high_rate->longitude, downlink_data_high_rate->ground_velocity, downlink_data_high_rate->ground_track, downlink_data_high_rate->air_speed, downlink_data_high_rate->x_accel, downlink_data_high_rate->y_accel, downlink_data_high_rate->z_accel, downlink_data_high_rate->avx_time);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE, (const char *)downlink_data_high_rate, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_downlink_data_high_rate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t downlink_flags, int16_t climb_rate, int16_t altitude, int16_t av_heading, int16_t pitch_angle, int16_t bank_angle, int16_t yaw_rate, int16_t pitch_rate, int16_t roll_rate, int32_t latitude, int32_t longitude, int16_t ground_velocity, int16_t ground_track, int16_t air_speed, int16_t x_accel, int16_t y_accel, int16_t z_accel, uint32_t avx_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, downlink_flags);
    _mav_put_int32_t(buf, 4, latitude);
    _mav_put_int32_t(buf, 8, longitude);
    _mav_put_uint32_t(buf, 12, avx_time);
    _mav_put_int16_t(buf, 16, climb_rate);
    _mav_put_int16_t(buf, 18, altitude);
    _mav_put_int16_t(buf, 20, av_heading);
    _mav_put_int16_t(buf, 22, pitch_angle);
    _mav_put_int16_t(buf, 24, bank_angle);
    _mav_put_int16_t(buf, 26, yaw_rate);
    _mav_put_int16_t(buf, 28, pitch_rate);
    _mav_put_int16_t(buf, 30, roll_rate);
    _mav_put_int16_t(buf, 32, ground_velocity);
    _mav_put_int16_t(buf, 34, ground_track);
    _mav_put_int16_t(buf, 36, air_speed);
    _mav_put_int16_t(buf, 38, x_accel);
    _mav_put_int16_t(buf, 40, y_accel);
    _mav_put_int16_t(buf, 42, z_accel);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE, buf, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
#else
    mavlink_downlink_data_high_rate_t *packet = (mavlink_downlink_data_high_rate_t *)msgbuf;
    packet->downlink_flags = downlink_flags;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->avx_time = avx_time;
    packet->climb_rate = climb_rate;
    packet->altitude = altitude;
    packet->av_heading = av_heading;
    packet->pitch_angle = pitch_angle;
    packet->bank_angle = bank_angle;
    packet->yaw_rate = yaw_rate;
    packet->pitch_rate = pitch_rate;
    packet->roll_rate = roll_rate;
    packet->ground_velocity = ground_velocity;
    packet->ground_track = ground_track;
    packet->air_speed = air_speed;
    packet->x_accel = x_accel;
    packet->y_accel = y_accel;
    packet->z_accel = z_accel;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE, (const char *)packet, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_CRC);
#endif
}
#endif

#endif

// MESSAGE DOWNLINK_DATA_HIGH_RATE UNPACKING


/**
 * @brief Get field downlink_flags from downlink_data_high_rate message
 *
 * @return See UAV_STATUS_FLAGS 
 */
static inline uint32_t mavlink_msg_downlink_data_high_rate_get_downlink_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field climb_rate from downlink_data_high_rate message
 *
 * @return 
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_climb_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field altitude from downlink_data_high_rate message
 *
 * @return m
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field av_heading from downlink_data_high_rate message
 *
 * @return -pi to pi, radian * 10000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_av_heading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field pitch_angle from downlink_data_high_rate message
 *
 * @return -pi to pi, radian * 10000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_pitch_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field bank_angle from downlink_data_high_rate message
 *
 * @return -pi to pi, radian * 10000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_bank_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field yaw_rate from downlink_data_high_rate message
 *
 * @return radians/sec * 1000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_yaw_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field pitch_rate from downlink_data_high_rate message
 *
 * @return radians/sec * 1000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_pitch_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field roll_rate from downlink_data_high_rate message
 *
 * @return radians/sec * 1000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_roll_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field latitude from downlink_data_high_rate message
 *
 * @return -pi/2 to pi/2 * 1E8
 */
static inline int32_t mavlink_msg_downlink_data_high_rate_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field longitude from downlink_data_high_rate message
 *
 * @return -pi/2 to pi/2 * 1E8
 */
static inline int32_t mavlink_msg_downlink_data_high_rate_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field ground_velocity from downlink_data_high_rate message
 *
 * @return meters/sec * 100
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_ground_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field ground_track from downlink_data_high_rate message
 *
 * @return -pi to pi * 10000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_ground_track(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field air_speed from downlink_data_high_rate message
 *
 * @return meters/sec * 1000
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_air_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field x_accel from downlink_data_high_rate message
 *
 * @return (g * 1000)
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_x_accel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field y_accel from downlink_data_high_rate message
 *
 * @return (g * 1000)
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_y_accel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field z_accel from downlink_data_high_rate message
 *
 * @return (g * 1000)
 */
static inline int16_t mavlink_msg_downlink_data_high_rate_get_z_accel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field avx_time from downlink_data_high_rate message
 *
 * @return (seconds * 100)
 */
static inline uint32_t mavlink_msg_downlink_data_high_rate_get_avx_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Decode a downlink_data_high_rate message into a struct
 *
 * @param msg The message to decode
 * @param downlink_data_high_rate C-struct to decode the message contents into
 */
static inline void mavlink_msg_downlink_data_high_rate_decode(const mavlink_message_t* msg, mavlink_downlink_data_high_rate_t* downlink_data_high_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    downlink_data_high_rate->downlink_flags = mavlink_msg_downlink_data_high_rate_get_downlink_flags(msg);
    downlink_data_high_rate->latitude = mavlink_msg_downlink_data_high_rate_get_latitude(msg);
    downlink_data_high_rate->longitude = mavlink_msg_downlink_data_high_rate_get_longitude(msg);
    downlink_data_high_rate->avx_time = mavlink_msg_downlink_data_high_rate_get_avx_time(msg);
    downlink_data_high_rate->climb_rate = mavlink_msg_downlink_data_high_rate_get_climb_rate(msg);
    downlink_data_high_rate->altitude = mavlink_msg_downlink_data_high_rate_get_altitude(msg);
    downlink_data_high_rate->av_heading = mavlink_msg_downlink_data_high_rate_get_av_heading(msg);
    downlink_data_high_rate->pitch_angle = mavlink_msg_downlink_data_high_rate_get_pitch_angle(msg);
    downlink_data_high_rate->bank_angle = mavlink_msg_downlink_data_high_rate_get_bank_angle(msg);
    downlink_data_high_rate->yaw_rate = mavlink_msg_downlink_data_high_rate_get_yaw_rate(msg);
    downlink_data_high_rate->pitch_rate = mavlink_msg_downlink_data_high_rate_get_pitch_rate(msg);
    downlink_data_high_rate->roll_rate = mavlink_msg_downlink_data_high_rate_get_roll_rate(msg);
    downlink_data_high_rate->ground_velocity = mavlink_msg_downlink_data_high_rate_get_ground_velocity(msg);
    downlink_data_high_rate->ground_track = mavlink_msg_downlink_data_high_rate_get_ground_track(msg);
    downlink_data_high_rate->air_speed = mavlink_msg_downlink_data_high_rate_get_air_speed(msg);
    downlink_data_high_rate->x_accel = mavlink_msg_downlink_data_high_rate_get_x_accel(msg);
    downlink_data_high_rate->y_accel = mavlink_msg_downlink_data_high_rate_get_y_accel(msg);
    downlink_data_high_rate->z_accel = mavlink_msg_downlink_data_high_rate_get_z_accel(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN? msg->len : MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN;
        memset(downlink_data_high_rate, 0, MAVLINK_MSG_ID_DOWNLINK_DATA_HIGH_RATE_LEN);
    memcpy(downlink_data_high_rate, _MAV_PAYLOAD(msg), len);
#endif
}
