#pragma once
// MESSAGE AUTOPILOT_TIME_SYNC_INIT PACKING

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT 198

MAVPACKED(
typedef struct __mavlink_autopilot_time_sync_init_t {
 uint8_t reserved; /*< Placeholder byte to prevent mavgen.py errors*/
}) mavlink_autopilot_time_sync_init_t;

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN 1
#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN 1
#define MAVLINK_MSG_ID_198_LEN 1
#define MAVLINK_MSG_ID_198_MIN_LEN 1

#define MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC 184
#define MAVLINK_MSG_ID_198_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_INIT { \
    198, \
    "AUTOPILOT_TIME_SYNC_INIT", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_autopilot_time_sync_init_t, reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_INIT { \
    "AUTOPILOT_TIME_SYNC_INIT", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_autopilot_time_sync_init_t, reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a autopilot_time_sync_init message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved Placeholder byte to prevent mavgen.py errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_init_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN);
#else
    mavlink_autopilot_time_sync_init_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
}

/**
 * @brief Pack a autopilot_time_sync_init message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reserved Placeholder byte to prevent mavgen.py errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_init_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN);
#else
    mavlink_autopilot_time_sync_init_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
}

/**
 * @brief Encode a autopilot_time_sync_init struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_time_sync_init C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_init_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_autopilot_time_sync_init_t* autopilot_time_sync_init)
{
    return mavlink_msg_autopilot_time_sync_init_pack(system_id, component_id, msg, autopilot_time_sync_init->reserved);
}

/**
 * @brief Encode a autopilot_time_sync_init struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param autopilot_time_sync_init C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_autopilot_time_sync_init_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_autopilot_time_sync_init_t* autopilot_time_sync_init)
{
    return mavlink_msg_autopilot_time_sync_init_pack_chan(system_id, component_id, chan, msg, autopilot_time_sync_init->reserved);
}

/**
 * @brief Send a autopilot_time_sync_init message
 * @param chan MAVLink channel to send the message
 *
 * @param reserved Placeholder byte to prevent mavgen.py errors
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_autopilot_time_sync_init_send(mavlink_channel_t chan, uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT, buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
#else
    mavlink_autopilot_time_sync_init_t packet;
    packet.reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT, (const char *)&packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
#endif
}

/**
 * @brief Send a autopilot_time_sync_init message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_autopilot_time_sync_init_send_struct(mavlink_channel_t chan, const mavlink_autopilot_time_sync_init_t* autopilot_time_sync_init)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_autopilot_time_sync_init_send(chan, autopilot_time_sync_init->reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT, (const char *)autopilot_time_sync_init, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_autopilot_time_sync_init_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT, buf, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
#else
    mavlink_autopilot_time_sync_init_t *packet = (mavlink_autopilot_time_sync_init_t *)msgbuf;
    packet->reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT, (const char *)packet, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_CRC);
#endif
}
#endif

#endif

// MESSAGE AUTOPILOT_TIME_SYNC_INIT UNPACKING


/**
 * @brief Get field reserved from autopilot_time_sync_init message
 *
 * @return Placeholder byte to prevent mavgen.py errors
 */
static inline uint8_t mavlink_msg_autopilot_time_sync_init_get_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a autopilot_time_sync_init message into a struct
 *
 * @param msg The message to decode
 * @param autopilot_time_sync_init C-struct to decode the message contents into
 */
static inline void mavlink_msg_autopilot_time_sync_init_decode(const mavlink_message_t* msg, mavlink_autopilot_time_sync_init_t* autopilot_time_sync_init)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    autopilot_time_sync_init->reserved = mavlink_msg_autopilot_time_sync_init_get_reserved(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN? msg->len : MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN;
        memset(autopilot_time_sync_init, 0, MAVLINK_MSG_ID_AUTOPILOT_TIME_SYNC_INIT_LEN);
    memcpy(autopilot_time_sync_init, _MAV_PAYLOAD(msg), len);
#endif
}
