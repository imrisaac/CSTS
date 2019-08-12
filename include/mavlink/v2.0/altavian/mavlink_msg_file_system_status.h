#pragma once
// MESSAGE FILE_SYSTEM_STATUS PACKING

#define MAVLINK_MSG_ID_FILE_SYSTEM_STATUS 222

MAVPACKED(
typedef struct __mavlink_file_system_status_t {
 uint8_t version; /*< */
 uint8_t file_transfer_bandwidth_percentage; /*< Actual percentage of payload bandwidth being consumed by file transfer system (0-100%)*/
 uint8_t payload_bandwidth_allocation; /*< Actual percentage of payload bandwidth being consumed by file transfer system (kilobits/second).*/
}) mavlink_file_system_status_t;

#define MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN 3
#define MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN 3
#define MAVLINK_MSG_ID_222_LEN 3
#define MAVLINK_MSG_ID_222_MIN_LEN 3

#define MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC 225
#define MAVLINK_MSG_ID_222_CRC 225



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_STATUS { \
    222, \
    "FILE_SYSTEM_STATUS", \
    3, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_file_system_status_t, version) }, \
         { "file_transfer_bandwidth_percentage", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_file_system_status_t, file_transfer_bandwidth_percentage) }, \
         { "payload_bandwidth_allocation", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_file_system_status_t, payload_bandwidth_allocation) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_STATUS { \
    "FILE_SYSTEM_STATUS", \
    3, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_file_system_status_t, version) }, \
         { "file_transfer_bandwidth_percentage", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_file_system_status_t, file_transfer_bandwidth_percentage) }, \
         { "payload_bandwidth_allocation", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_file_system_status_t, payload_bandwidth_allocation) }, \
         } \
}
#endif

/**
 * @brief Pack a file_system_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param file_transfer_bandwidth_percentage Actual percentage of payload bandwidth being consumed by file transfer system (0-100%)
 * @param payload_bandwidth_allocation Actual percentage of payload bandwidth being consumed by file transfer system (kilobits/second).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, uint8_t file_transfer_bandwidth_percentage, uint8_t payload_bandwidth_allocation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, file_transfer_bandwidth_percentage);
    _mav_put_uint8_t(buf, 2, payload_bandwidth_allocation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN);
#else
    mavlink_file_system_status_t packet;
    packet.version = version;
    packet.file_transfer_bandwidth_percentage = file_transfer_bandwidth_percentage;
    packet.payload_bandwidth_allocation = payload_bandwidth_allocation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
}

/**
 * @brief Pack a file_system_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param file_transfer_bandwidth_percentage Actual percentage of payload bandwidth being consumed by file transfer system (0-100%)
 * @param payload_bandwidth_allocation Actual percentage of payload bandwidth being consumed by file transfer system (kilobits/second).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,uint8_t file_transfer_bandwidth_percentage,uint8_t payload_bandwidth_allocation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, file_transfer_bandwidth_percentage);
    _mav_put_uint8_t(buf, 2, payload_bandwidth_allocation);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN);
#else
    mavlink_file_system_status_t packet;
    packet.version = version;
    packet.file_transfer_bandwidth_percentage = file_transfer_bandwidth_percentage;
    packet.payload_bandwidth_allocation = payload_bandwidth_allocation;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
}

/**
 * @brief Encode a file_system_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param file_system_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_file_system_status_t* file_system_status)
{
    return mavlink_msg_file_system_status_pack(system_id, component_id, msg, file_system_status->version, file_system_status->file_transfer_bandwidth_percentage, file_system_status->payload_bandwidth_allocation);
}

/**
 * @brief Encode a file_system_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_system_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_file_system_status_t* file_system_status)
{
    return mavlink_msg_file_system_status_pack_chan(system_id, component_id, chan, msg, file_system_status->version, file_system_status->file_transfer_bandwidth_percentage, file_system_status->payload_bandwidth_allocation);
}

/**
 * @brief Send a file_system_status message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param file_transfer_bandwidth_percentage Actual percentage of payload bandwidth being consumed by file transfer system (0-100%)
 * @param payload_bandwidth_allocation Actual percentage of payload bandwidth being consumed by file transfer system (kilobits/second).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_file_system_status_send(mavlink_channel_t chan, uint8_t version, uint8_t file_transfer_bandwidth_percentage, uint8_t payload_bandwidth_allocation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, file_transfer_bandwidth_percentage);
    _mav_put_uint8_t(buf, 2, payload_bandwidth_allocation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS, buf, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
#else
    mavlink_file_system_status_t packet;
    packet.version = version;
    packet.file_transfer_bandwidth_percentage = file_transfer_bandwidth_percentage;
    packet.payload_bandwidth_allocation = payload_bandwidth_allocation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
#endif
}

/**
 * @brief Send a file_system_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_file_system_status_send_struct(mavlink_channel_t chan, const mavlink_file_system_status_t* file_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_file_system_status_send(chan, file_system_status->version, file_system_status->file_transfer_bandwidth_percentage, file_system_status->payload_bandwidth_allocation);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS, (const char *)file_system_status, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_file_system_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, uint8_t file_transfer_bandwidth_percentage, uint8_t payload_bandwidth_allocation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, file_transfer_bandwidth_percentage);
    _mav_put_uint8_t(buf, 2, payload_bandwidth_allocation);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS, buf, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
#else
    mavlink_file_system_status_t *packet = (mavlink_file_system_status_t *)msgbuf;
    packet->version = version;
    packet->file_transfer_bandwidth_percentage = file_transfer_bandwidth_percentage;
    packet->payload_bandwidth_allocation = payload_bandwidth_allocation;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS, (const char *)packet, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FILE_SYSTEM_STATUS UNPACKING


/**
 * @brief Get field version from file_system_status message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_file_system_status_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field file_transfer_bandwidth_percentage from file_system_status message
 *
 * @return Actual percentage of payload bandwidth being consumed by file transfer system (0-100%)
 */
static inline uint8_t mavlink_msg_file_system_status_get_file_transfer_bandwidth_percentage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field payload_bandwidth_allocation from file_system_status message
 *
 * @return Actual percentage of payload bandwidth being consumed by file transfer system (kilobits/second).
 */
static inline uint8_t mavlink_msg_file_system_status_get_payload_bandwidth_allocation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a file_system_status message into a struct
 *
 * @param msg The message to decode
 * @param file_system_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_file_system_status_decode(const mavlink_message_t* msg, mavlink_file_system_status_t* file_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    file_system_status->version = mavlink_msg_file_system_status_get_version(msg);
    file_system_status->file_transfer_bandwidth_percentage = mavlink_msg_file_system_status_get_file_transfer_bandwidth_percentage(msg);
    file_system_status->payload_bandwidth_allocation = mavlink_msg_file_system_status_get_payload_bandwidth_allocation(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN;
        memset(file_system_status, 0, MAVLINK_MSG_ID_FILE_SYSTEM_STATUS_LEN);
    memcpy(file_system_status, _MAV_PAYLOAD(msg), len);
#endif
}
