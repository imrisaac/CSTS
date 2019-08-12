#pragma once
// MESSAGE CANCEL_FILE_BLOCK_DOWNLINK PACKING

#define MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK 228

MAVPACKED(
typedef struct __mavlink_cancel_file_block_downlink_t {
 uint32_t command_sequence; /*< */
 uint16_t requester_process_id; /*< */
 uint8_t version; /*< */
 uint8_t requester_mac_address[6]; /*< */
}) mavlink_cancel_file_block_downlink_t;

#define MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN 13
#define MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN 13
#define MAVLINK_MSG_ID_228_LEN 13
#define MAVLINK_MSG_ID_228_MIN_LEN 13

#define MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC 165
#define MAVLINK_MSG_ID_228_CRC 165

#define MAVLINK_MSG_CANCEL_FILE_BLOCK_DOWNLINK_FIELD_REQUESTER_MAC_ADDRESS_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CANCEL_FILE_BLOCK_DOWNLINK { \
    228, \
    "CANCEL_FILE_BLOCK_DOWNLINK", \
    4, \
    {  { "command_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cancel_file_block_downlink_t, command_sequence) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_cancel_file_block_downlink_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_cancel_file_block_downlink_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 7, offsetof(mavlink_cancel_file_block_downlink_t, requester_mac_address) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CANCEL_FILE_BLOCK_DOWNLINK { \
    "CANCEL_FILE_BLOCK_DOWNLINK", \
    4, \
    {  { "command_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cancel_file_block_downlink_t, command_sequence) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_cancel_file_block_downlink_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_cancel_file_block_downlink_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 7, offsetof(mavlink_cancel_file_block_downlink_t, requester_mac_address) }, \
         } \
}
#endif

/**
 * @brief Pack a cancel_file_block_downlink message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN);
#else
    mavlink_cancel_file_block_downlink_t packet;
    packet.command_sequence = command_sequence;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
}

/**
 * @brief Pack a cancel_file_block_downlink message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const uint8_t *requester_mac_address,uint16_t requester_process_id,uint32_t command_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN);
#else
    mavlink_cancel_file_block_downlink_t packet;
    packet.command_sequence = command_sequence;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
}

/**
 * @brief Encode a cancel_file_block_downlink struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cancel_file_block_downlink C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cancel_file_block_downlink_t* cancel_file_block_downlink)
{
    return mavlink_msg_cancel_file_block_downlink_pack(system_id, component_id, msg, cancel_file_block_downlink->version, cancel_file_block_downlink->requester_mac_address, cancel_file_block_downlink->requester_process_id, cancel_file_block_downlink->command_sequence);
}

/**
 * @brief Encode a cancel_file_block_downlink struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cancel_file_block_downlink C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cancel_file_block_downlink_t* cancel_file_block_downlink)
{
    return mavlink_msg_cancel_file_block_downlink_pack_chan(system_id, component_id, chan, msg, cancel_file_block_downlink->version, cancel_file_block_downlink->requester_mac_address, cancel_file_block_downlink->requester_process_id, cancel_file_block_downlink->command_sequence);
}

/**
 * @brief Send a cancel_file_block_downlink message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cancel_file_block_downlink_send(mavlink_channel_t chan, uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK, buf, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
#else
    mavlink_cancel_file_block_downlink_t packet;
    packet.command_sequence = command_sequence;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK, (const char *)&packet, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
#endif
}

/**
 * @brief Send a cancel_file_block_downlink message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cancel_file_block_downlink_send_struct(mavlink_channel_t chan, const mavlink_cancel_file_block_downlink_t* cancel_file_block_downlink)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cancel_file_block_downlink_send(chan, cancel_file_block_downlink->version, cancel_file_block_downlink->requester_mac_address, cancel_file_block_downlink->requester_process_id, cancel_file_block_downlink->command_sequence);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK, (const char *)cancel_file_block_downlink, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cancel_file_block_downlink_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK, buf, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
#else
    mavlink_cancel_file_block_downlink_t *packet = (mavlink_cancel_file_block_downlink_t *)msgbuf;
    packet->command_sequence = command_sequence;
    packet->requester_process_id = requester_process_id;
    packet->version = version;
    mav_array_memcpy(packet->requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK, (const char *)packet, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_MIN_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_CRC);
#endif
}
#endif

#endif

// MESSAGE CANCEL_FILE_BLOCK_DOWNLINK UNPACKING


/**
 * @brief Get field version from cancel_file_block_downlink message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_cancel_file_block_downlink_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field requester_mac_address from cancel_file_block_downlink message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_get_requester_mac_address(const mavlink_message_t* msg, uint8_t *requester_mac_address)
{
    return _MAV_RETURN_uint8_t_array(msg, requester_mac_address, 6,  7);
}

/**
 * @brief Get field requester_process_id from cancel_file_block_downlink message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_cancel_file_block_downlink_get_requester_process_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field command_sequence from cancel_file_block_downlink message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_cancel_file_block_downlink_get_command_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a cancel_file_block_downlink message into a struct
 *
 * @param msg The message to decode
 * @param cancel_file_block_downlink C-struct to decode the message contents into
 */
static inline void mavlink_msg_cancel_file_block_downlink_decode(const mavlink_message_t* msg, mavlink_cancel_file_block_downlink_t* cancel_file_block_downlink)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cancel_file_block_downlink->command_sequence = mavlink_msg_cancel_file_block_downlink_get_command_sequence(msg);
    cancel_file_block_downlink->requester_process_id = mavlink_msg_cancel_file_block_downlink_get_requester_process_id(msg);
    cancel_file_block_downlink->version = mavlink_msg_cancel_file_block_downlink_get_version(msg);
    mavlink_msg_cancel_file_block_downlink_get_requester_mac_address(msg, cancel_file_block_downlink->requester_mac_address);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN? msg->len : MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN;
        memset(cancel_file_block_downlink, 0, MAVLINK_MSG_ID_CANCEL_FILE_BLOCK_DOWNLINK_LEN);
    memcpy(cancel_file_block_downlink, _MAV_PAYLOAD(msg), len);
#endif
}
