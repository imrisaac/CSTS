#pragma once
// MESSAGE AUTOPILOT_TIME_SYNC_SET PACKING

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET 199

MAVPACKED(
typedef struct __mavlink_autopilot_time_sync_set_t {
 uint64_t utc_sync_timestamp; /*< Autopilot's UTC time in microseconds when last byte of AUTOPILOT_TIME_SYNC_INIT message sent. */
 uint8_t gps_status; /*< GPS status*/
}) mavlink_autopilot_time_sync_set_t;

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN 9
#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN 9
#define MAVLINK_MSG_ID_199_LEN 9
#define MAVLINK_MSG_ID_199_MIN_LEN 9

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC 214
#define MAVLINK_MSG_ID_199_CRC 214



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_SET { \
    199, \
    "AUTOPILOT_TIME_SYNC_SET", \
    2, \
    {  { "utc_sync_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_autopilot_time_sync_set_t, utc_sync_timestamp) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_autopilot_time_sync_set_t, gps_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_SET { \
    "AUTOPILOT_TIME_SYNC_SET", \
    2, \
    {  { "utc_sync_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_autopilot_time_sync_set_t, utc_sync_timestamp) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_autopilot_time_sync_set_t, gps_status) }, \
         } \
}
#endif

/**
 * @brief Pack a autopilot_time_sync_set message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param utc_sync_timestamp Autopilot's UTC time in microseconds when last byte of AUTOPILOT_TIME_SYNC_INIT message sent. 
 * @param gps_status GPS status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_set_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t utc_sync_timestamp, uint8_t gps_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN];
    _mav_put_uint64_t(buf, 0, utc_sync_timestamp);
    _mav_put_uint8_t(buf, 8, gps_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN);
#else
    mavlink_autopilot_time_sync_set_t packet;
    packet.utc_sync_timestamp = utc_sync_timestamp;
    packet.gps_status = gps_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
}

/**
 * @brief Pack a autopilot_time_sync_set message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param utc_sync_timestamp Autopilot's UTC time in microseconds when last byte of AUTOPILOT_TIME_SYNC_INIT message sent. 
 * @param gps_status GPS status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_set_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t utc_sync_timestamp,uint8_t gps_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN];
    _mav_put_uint64_t(buf, 0, utc_sync_timestamp);
    _mav_put_uint8_t(buf, 8, gps_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN);
#else
    mavlink_autopilot_time_sync_set_t packet;
    packet.utc_sync_timestamp = utc_sync_timestamp;
    packet.gps_status = gps_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
}

/**
 * @brief Encode a autopilot_time_sync_set struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_time_sync_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_set_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_autopilot_time_sync_set_t* autopilot_time_sync_set)
{
    return mavlink_msg_autopilot_time_sync_set_pack(system_id, component_id, msg, autopilot_time_sync_set->utc_sync_timestamp, autopilot_time_sync_set->gps_status);
}

/**
 * @brief Encode a autopilot_time_sync_set struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_time_sync_set C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_set_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_autopilot_time_sync_set_t* autopilot_time_sync_set)
{
    return mavlink_msg_autopilot_time_sync_set_pack_chan(system_id, component_id, chan, msg, autopilot_time_sync_set->utc_sync_timestamp, autopilot_time_sync_set->gps_status);
}

/**
 * @brief Send a autopilot_time_sync_set message
 * @param chan MAVLink channel to send the message
 *
 * @param utc_sync_timestamp Autopilot's UTC time in microseconds when last byte of AUTOPILOT_TIME_SYNC_INIT message sent. 
 * @param gps_status GPS status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_autopilot_time_sync_set_send(mavlink_channel_t chan, uint64_t utc_sync_timestamp, uint8_t gps_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN];
    _mav_put_uint64_t(buf, 0, utc_sync_timestamp);
    _mav_put_uint8_t(buf, 8, gps_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET, buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
#else
    mavlink_autopilot_time_sync_set_t packet;
    packet.utc_sync_timestamp = utc_sync_timestamp;
    packet.gps_status = gps_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET, (const char *)&packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
#endif
}

/**
 * @brief Send a autopilot_time_sync_set message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_autopilot_time_sync_set_send_struct(mavlink_channel_t chan, const mavlink_autopilot_time_sync_set_t* autopilot_time_sync_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_autopilot_time_sync_set_send(chan, autopilot_time_sync_set->utc_sync_timestamp, autopilot_time_sync_set->gps_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET, (const char *)autopilot_time_sync_set, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_autopilot_time_sync_set_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t utc_sync_timestamp, uint8_t gps_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, utc_sync_timestamp);
    _mav_put_uint8_t(buf, 8, gps_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET, buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
#else
    mavlink_autopilot_time_sync_set_t *packet = (mavlink_autopilot_time_sync_set_t *)msgbuf;
    packet->utc_sync_timestamp = utc_sync_timestamp;
    packet->gps_status = gps_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET, (const char *)packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_CRC);
#endif
}
#endif

#endif

// MESSAGE AUTOPILOT_TIME_SYNC_SET UNPACKING


/**
 * @brief Get field utc_sync_timestamp from autopilot_time_sync_set message
 *
 * @return Autopilot's UTC time in microseconds when last byte of AUTOPILOT_TIME_SYNC_INIT message sent. 
 */
static inline uint64_t mavlink_msg_autopilot_time_sync_set_get_utc_sync_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field gps_status from autopilot_time_sync_set message
 *
 * @return GPS status
 */
static inline uint8_t mavlink_msg_autopilot_time_sync_set_get_gps_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a autopilot_time_sync_set message into a struct
 *
 * @param msg The message to decode
 * @param autopilot_time_sync_set C-struct to decode the message contents into
 */
static inline void mavlink_msg_autopilot_time_sync_set_decode(const mavlink_message_t* msg, mavlink_autopilot_time_sync_set_t* autopilot_time_sync_set)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    autopilot_time_sync_set->utc_sync_timestamp = mavlink_msg_autopilot_time_sync_set_get_utc_sync_timestamp(msg);
    autopilot_time_sync_set->gps_status = mavlink_msg_autopilot_time_sync_set_get_gps_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN? msg->len : MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN;
        memset(autopilot_time_sync_set, 0, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_SET_LEN);
    memcpy(autopilot_time_sync_set, _MAV_PAYLOAD(msg), len);
#endif
}
