#pragma once
// MESSAGE GPS_KEY_STATE PACKING

#define MAVLINK_MSG_ID_GPS_KEY_STATE 97

MAVPACKED(
typedef struct __mavlink_gps_key_state_t {
 uint8_t gps_key_status; /*< See GPS_KEY_STATUS enum.*/
}) mavlink_gps_key_state_t;

#define MAVLINK_MSG_ID_GPS_KEY_STATE_LEN 1
#define MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN 1
#define MAVLINK_MSG_ID_97_LEN 1
#define MAVLINK_MSG_ID_97_MIN_LEN 1

#define MAVLINK_MSG_ID_GPS_KEY_STATE_CRC 73
#define MAVLINK_MSG_ID_97_CRC 73



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GPS_KEY_STATE { \
    97, \
    "GPS_KEY_STATE", \
    1, \
    {  { "gps_key_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gps_key_state_t, gps_key_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GPS_KEY_STATE { \
    "GPS_KEY_STATE", \
    1, \
    {  { "gps_key_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gps_key_state_t, gps_key_status) }, \
         } \
}
#endif

/**
 * @brief Pack a gps_key_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gps_key_status See GPS_KEY_STATUS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_key_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t gps_key_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_KEY_STATE_LEN];
    _mav_put_uint8_t(buf, 0, gps_key_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN);
#else
    mavlink_gps_key_state_t packet;
    packet.gps_key_status = gps_key_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_KEY_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
}

/**
 * @brief Pack a gps_key_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gps_key_status See GPS_KEY_STATUS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gps_key_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t gps_key_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_KEY_STATE_LEN];
    _mav_put_uint8_t(buf, 0, gps_key_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN);
#else
    mavlink_gps_key_state_t packet;
    packet.gps_key_status = gps_key_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GPS_KEY_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
}

/**
 * @brief Encode a gps_key_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gps_key_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_key_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gps_key_state_t* gps_key_state)
{
    return mavlink_msg_gps_key_state_pack(system_id, component_id, msg, gps_key_state->gps_key_status);
}

/**
 * @brief Encode a gps_key_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gps_key_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gps_key_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gps_key_state_t* gps_key_state)
{
    return mavlink_msg_gps_key_state_pack_chan(system_id, component_id, chan, msg, gps_key_state->gps_key_status);
}

/**
 * @brief Send a gps_key_state message
 * @param chan MAVLink channel to send the message
 *
 * @param gps_key_status See GPS_KEY_STATUS enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gps_key_state_send(mavlink_channel_t chan, uint8_t gps_key_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GPS_KEY_STATE_LEN];
    _mav_put_uint8_t(buf, 0, gps_key_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_KEY_STATE, buf, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
#else
    mavlink_gps_key_state_t packet;
    packet.gps_key_status = gps_key_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_KEY_STATE, (const char *)&packet, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
#endif
}

/**
 * @brief Send a gps_key_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gps_key_state_send_struct(mavlink_channel_t chan, const mavlink_gps_key_state_t* gps_key_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gps_key_state_send(chan, gps_key_state->gps_key_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_KEY_STATE, (const char *)gps_key_state, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_GPS_KEY_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gps_key_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t gps_key_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, gps_key_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_KEY_STATE, buf, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
#else
    mavlink_gps_key_state_t *packet = (mavlink_gps_key_state_t *)msgbuf;
    packet->gps_key_status = gps_key_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GPS_KEY_STATE, (const char *)packet, MAVLINK_MSG_ID_GPS_KEY_STATE_MIN_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN, MAVLINK_MSG_ID_GPS_KEY_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE GPS_KEY_STATE UNPACKING


/**
 * @brief Get field gps_key_status from gps_key_state message
 *
 * @return See GPS_KEY_STATUS enum.
 */
static inline uint8_t mavlink_msg_gps_key_state_get_gps_key_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a gps_key_state message into a struct
 *
 * @param msg The message to decode
 * @param gps_key_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_gps_key_state_decode(const mavlink_message_t* msg, mavlink_gps_key_state_t* gps_key_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gps_key_state->gps_key_status = mavlink_msg_gps_key_state_get_gps_key_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GPS_KEY_STATE_LEN? msg->len : MAVLINK_MSG_ID_GPS_KEY_STATE_LEN;
        memset(gps_key_state, 0, MAVLINK_MSG_ID_GPS_KEY_STATE_LEN);
    memcpy(gps_key_state, _MAV_PAYLOAD(msg), len);
#endif
}
