#pragma once
// MESSAGE DOWNLINK_FILE_BLOCKS_COMMAND PACKING

#define MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND 229

MAVPACKED(
typedef struct __mavlink_downlink_file_blocks_command_t {
 uint32_t command_sequence; /*< */
 uint32_t start_index; /*< */
 uint16_t requester_process_id; /*< */
 uint16_t file_id; /*< */
 uint16_t group_count; /*< */
 uint8_t version; /*< */
 uint8_t requester_mac_address[6]; /*< */
}) mavlink_downlink_file_blocks_command_t;

#define MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN 21
#define MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN 21
#define MAVLINK_MSG_ID_229_LEN 21
#define MAVLINK_MSG_ID_229_MIN_LEN 21

#define MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC 253
#define MAVLINK_MSG_ID_229_CRC 253

#define MAVLINK_MSG_DOWNLINK_FILE_BLOCKS_COMMAND_FIELD_REQUESTER_MAC_ADDRESS_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DOWNLINK_FILE_BLOCKS_COMMAND { \
    229, \
    "DOWNLINK_FILE_BLOCKS_COMMAND", \
    7, \
    {  { "command_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_downlink_file_blocks_command_t, command_sequence) }, \
         { "start_index", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_downlink_file_blocks_command_t, start_index) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_downlink_file_blocks_command_t, requester_process_id) }, \
         { "file_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_downlink_file_blocks_command_t, file_id) }, \
         { "group_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_downlink_file_blocks_command_t, group_count) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_downlink_file_blocks_command_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 15, offsetof(mavlink_downlink_file_blocks_command_t, requester_mac_address) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DOWNLINK_FILE_BLOCKS_COMMAND { \
    "DOWNLINK_FILE_BLOCKS_COMMAND", \
    7, \
    {  { "command_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_downlink_file_blocks_command_t, command_sequence) }, \
         { "start_index", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_downlink_file_blocks_command_t, start_index) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_downlink_file_blocks_command_t, requester_process_id) }, \
         { "file_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_downlink_file_blocks_command_t, file_id) }, \
         { "group_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_downlink_file_blocks_command_t, group_count) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_downlink_file_blocks_command_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 15, offsetof(mavlink_downlink_file_blocks_command_t, requester_mac_address) }, \
         } \
}
#endif

/**
 * @brief Pack a downlink_file_blocks_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 * @param file_id 
 * @param start_index 
 * @param group_count 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence, uint16_t file_id, uint32_t start_index, uint16_t group_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint32_t(buf, 4, start_index);
    _mav_put_uint16_t(buf, 8, requester_process_id);
    _mav_put_uint16_t(buf, 10, file_id);
    _mav_put_uint16_t(buf, 12, group_count);
    _mav_put_uint8_t(buf, 14, version);
    _mav_put_uint8_t_array(buf, 15, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN);
#else
    mavlink_downlink_file_blocks_command_t packet;
    packet.command_sequence = command_sequence;
    packet.start_index = start_index;
    packet.requester_process_id = requester_process_id;
    packet.file_id = file_id;
    packet.group_count = group_count;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
}

/**
 * @brief Pack a downlink_file_blocks_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 * @param file_id 
 * @param start_index 
 * @param group_count 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const uint8_t *requester_mac_address,uint16_t requester_process_id,uint32_t command_sequence,uint16_t file_id,uint32_t start_index,uint16_t group_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint32_t(buf, 4, start_index);
    _mav_put_uint16_t(buf, 8, requester_process_id);
    _mav_put_uint16_t(buf, 10, file_id);
    _mav_put_uint16_t(buf, 12, group_count);
    _mav_put_uint8_t(buf, 14, version);
    _mav_put_uint8_t_array(buf, 15, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN);
#else
    mavlink_downlink_file_blocks_command_t packet;
    packet.command_sequence = command_sequence;
    packet.start_index = start_index;
    packet.requester_process_id = requester_process_id;
    packet.file_id = file_id;
    packet.group_count = group_count;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
}

/**
 * @brief Encode a downlink_file_blocks_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param downlink_file_blocks_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_downlink_file_blocks_command_t* downlink_file_blocks_command)
{
    return mavlink_msg_downlink_file_blocks_command_pack(system_id, component_id, msg, downlink_file_blocks_command->version, downlink_file_blocks_command->requester_mac_address, downlink_file_blocks_command->requester_process_id, downlink_file_blocks_command->command_sequence, downlink_file_blocks_command->file_id, downlink_file_blocks_command->start_index, downlink_file_blocks_command->group_count);
}

/**
 * @brief Encode a downlink_file_blocks_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param downlink_file_blocks_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_downlink_file_blocks_command_t* downlink_file_blocks_command)
{
    return mavlink_msg_downlink_file_blocks_command_pack_chan(system_id, component_id, chan, msg, downlink_file_blocks_command->version, downlink_file_blocks_command->requester_mac_address, downlink_file_blocks_command->requester_process_id, downlink_file_blocks_command->command_sequence, downlink_file_blocks_command->file_id, downlink_file_blocks_command->start_index, downlink_file_blocks_command->group_count);
}

/**
 * @brief Send a downlink_file_blocks_command message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param command_sequence 
 * @param file_id 
 * @param start_index 
 * @param group_count 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_downlink_file_blocks_command_send(mavlink_channel_t chan, uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence, uint16_t file_id, uint32_t start_index, uint16_t group_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint32_t(buf, 4, start_index);
    _mav_put_uint16_t(buf, 8, requester_process_id);
    _mav_put_uint16_t(buf, 10, file_id);
    _mav_put_uint16_t(buf, 12, group_count);
    _mav_put_uint8_t(buf, 14, version);
    _mav_put_uint8_t_array(buf, 15, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND, buf, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
#else
    mavlink_downlink_file_blocks_command_t packet;
    packet.command_sequence = command_sequence;
    packet.start_index = start_index;
    packet.requester_process_id = requester_process_id;
    packet.file_id = file_id;
    packet.group_count = group_count;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
#endif
}

/**
 * @brief Send a downlink_file_blocks_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_downlink_file_blocks_command_send_struct(mavlink_channel_t chan, const mavlink_downlink_file_blocks_command_t* downlink_file_blocks_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_downlink_file_blocks_command_send(chan, downlink_file_blocks_command->version, downlink_file_blocks_command->requester_mac_address, downlink_file_blocks_command->requester_process_id, downlink_file_blocks_command->command_sequence, downlink_file_blocks_command->file_id, downlink_file_blocks_command->start_index, downlink_file_blocks_command->group_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND, (const char *)downlink_file_blocks_command, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_downlink_file_blocks_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t command_sequence, uint16_t file_id, uint32_t start_index, uint16_t group_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, command_sequence);
    _mav_put_uint32_t(buf, 4, start_index);
    _mav_put_uint16_t(buf, 8, requester_process_id);
    _mav_put_uint16_t(buf, 10, file_id);
    _mav_put_uint16_t(buf, 12, group_count);
    _mav_put_uint8_t(buf, 14, version);
    _mav_put_uint8_t_array(buf, 15, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND, buf, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
#else
    mavlink_downlink_file_blocks_command_t *packet = (mavlink_downlink_file_blocks_command_t *)msgbuf;
    packet->command_sequence = command_sequence;
    packet->start_index = start_index;
    packet->requester_process_id = requester_process_id;
    packet->file_id = file_id;
    packet->group_count = group_count;
    packet->version = version;
    mav_array_memcpy(packet->requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND, (const char *)packet, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE DOWNLINK_FILE_BLOCKS_COMMAND UNPACKING


/**
 * @brief Get field version from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_downlink_file_blocks_command_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field requester_mac_address from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_get_requester_mac_address(const mavlink_message_t* msg, uint8_t *requester_mac_address)
{
    return _MAV_RETURN_uint8_t_array(msg, requester_mac_address, 6,  15);
}

/**
 * @brief Get field requester_process_id from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_get_requester_process_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field command_sequence from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_downlink_file_blocks_command_get_command_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field file_id from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_get_file_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field start_index from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_downlink_file_blocks_command_get_start_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field group_count from downlink_file_blocks_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_downlink_file_blocks_command_get_group_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Decode a downlink_file_blocks_command message into a struct
 *
 * @param msg The message to decode
 * @param downlink_file_blocks_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_downlink_file_blocks_command_decode(const mavlink_message_t* msg, mavlink_downlink_file_blocks_command_t* downlink_file_blocks_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    downlink_file_blocks_command->command_sequence = mavlink_msg_downlink_file_blocks_command_get_command_sequence(msg);
    downlink_file_blocks_command->start_index = mavlink_msg_downlink_file_blocks_command_get_start_index(msg);
    downlink_file_blocks_command->requester_process_id = mavlink_msg_downlink_file_blocks_command_get_requester_process_id(msg);
    downlink_file_blocks_command->file_id = mavlink_msg_downlink_file_blocks_command_get_file_id(msg);
    downlink_file_blocks_command->group_count = mavlink_msg_downlink_file_blocks_command_get_group_count(msg);
    downlink_file_blocks_command->version = mavlink_msg_downlink_file_blocks_command_get_version(msg);
    mavlink_msg_downlink_file_blocks_command_get_requester_mac_address(msg, downlink_file_blocks_command->requester_mac_address);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN;
        memset(downlink_file_blocks_command, 0, MAVLINK_MSG_ID_DOWNLINK_FILE_BLOCKS_COMMAND_LEN);
    memcpy(downlink_file_blocks_command, _MAV_PAYLOAD(msg), len);
#endif
}
