#pragma once
// MESSAGE FILE_SYSTEM_MANAGER_NODE_STATUS PACKING

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS 220

MAVPACKED(
typedef struct __mavlink_file_system_manager_node_status_t {
 uint32_t last_command_sequence_number; /*< */
 uint16_t requester_process_id; /*< */
 uint8_t version; /*< */
 uint8_t requester_mac_address[6]; /*< */
 uint8_t command_state_flags; /*< See COMMAND_STATE_FLAGS enum.*/
}) mavlink_file_system_manager_node_status_t;

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN 14
#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN 14
#define MAVLINK_MSG_ID_220_LEN 14
#define MAVLINK_MSG_ID_220_MIN_LEN 14

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC 18
#define MAVLINK_MSG_ID_220_CRC 18

#define MAVLINK_MSG_FILE_SYSTEM_MANAGER_NODE_STATUS_FIELD_REQUESTER_MAC_ADDRESS_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS { \
    220, \
    "FILE_SYSTEM_MANAGER_NODE_STATUS", \
    5, \
    {  { "last_command_sequence_number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_file_system_manager_node_status_t, last_command_sequence_number) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_file_system_manager_node_status_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_file_system_manager_node_status_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 7, offsetof(mavlink_file_system_manager_node_status_t, requester_mac_address) }, \
         { "command_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_file_system_manager_node_status_t, command_state_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS { \
    "FILE_SYSTEM_MANAGER_NODE_STATUS", \
    5, \
    {  { "last_command_sequence_number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_file_system_manager_node_status_t, last_command_sequence_number) }, \
         { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_file_system_manager_node_status_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_file_system_manager_node_status_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 7, offsetof(mavlink_file_system_manager_node_status_t, requester_mac_address) }, \
         { "command_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_file_system_manager_node_status_t, command_state_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a file_system_manager_node_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param last_command_sequence_number 
 * @param command_state_flags See COMMAND_STATE_FLAGS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t last_command_sequence_number, uint8_t command_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, last_command_sequence_number);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 13, command_state_flags);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN);
#else
    mavlink_file_system_manager_node_status_t packet;
    packet.last_command_sequence_number = last_command_sequence_number;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    packet.command_state_flags = command_state_flags;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
}

/**
 * @brief Pack a file_system_manager_node_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param last_command_sequence_number 
 * @param command_state_flags See COMMAND_STATE_FLAGS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const uint8_t *requester_mac_address,uint16_t requester_process_id,uint32_t last_command_sequence_number,uint8_t command_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, last_command_sequence_number);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 13, command_state_flags);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN);
#else
    mavlink_file_system_manager_node_status_t packet;
    packet.last_command_sequence_number = last_command_sequence_number;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    packet.command_state_flags = command_state_flags;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
}

/**
 * @brief Encode a file_system_manager_node_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param file_system_manager_node_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_file_system_manager_node_status_t* file_system_manager_node_status)
{
    return mavlink_msg_file_system_manager_node_status_pack(system_id, component_id, msg, file_system_manager_node_status->version, file_system_manager_node_status->requester_mac_address, file_system_manager_node_status->requester_process_id, file_system_manager_node_status->last_command_sequence_number, file_system_manager_node_status->command_state_flags);
}

/**
 * @brief Encode a file_system_manager_node_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_system_manager_node_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_file_system_manager_node_status_t* file_system_manager_node_status)
{
    return mavlink_msg_file_system_manager_node_status_pack_chan(system_id, component_id, chan, msg, file_system_manager_node_status->version, file_system_manager_node_status->requester_mac_address, file_system_manager_node_status->requester_process_id, file_system_manager_node_status->last_command_sequence_number, file_system_manager_node_status->command_state_flags);
}

/**
 * @brief Send a file_system_manager_node_status message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @param last_command_sequence_number 
 * @param command_state_flags See COMMAND_STATE_FLAGS enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_file_system_manager_node_status_send(mavlink_channel_t chan, uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t last_command_sequence_number, uint8_t command_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, last_command_sequence_number);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 13, command_state_flags);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS, buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
#else
    mavlink_file_system_manager_node_status_t packet;
    packet.last_command_sequence_number = last_command_sequence_number;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    packet.command_state_flags = command_state_flags;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
#endif
}

/**
 * @brief Send a file_system_manager_node_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_file_system_manager_node_status_send_struct(mavlink_channel_t chan, const mavlink_file_system_manager_node_status_t* file_system_manager_node_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_file_system_manager_node_status_send(chan, file_system_manager_node_status->version, file_system_manager_node_status->requester_mac_address, file_system_manager_node_status->requester_process_id, file_system_manager_node_status->last_command_sequence_number, file_system_manager_node_status->command_state_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS, (const char *)file_system_manager_node_status, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_file_system_manager_node_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id, uint32_t last_command_sequence_number, uint8_t command_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, last_command_sequence_number);
    _mav_put_uint16_t(buf, 4, requester_process_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 13, command_state_flags);
    _mav_put_uint8_t_array(buf, 7, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS, buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
#else
    mavlink_file_system_manager_node_status_t *packet = (mavlink_file_system_manager_node_status_t *)msgbuf;
    packet->last_command_sequence_number = last_command_sequence_number;
    packet->requester_process_id = requester_process_id;
    packet->version = version;
    packet->command_state_flags = command_state_flags;
    mav_array_memcpy(packet->requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS, (const char *)packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FILE_SYSTEM_MANAGER_NODE_STATUS UNPACKING


/**
 * @brief Get field version from file_system_manager_node_status message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_file_system_manager_node_status_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field requester_mac_address from file_system_manager_node_status message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_get_requester_mac_address(const mavlink_message_t* msg, uint8_t *requester_mac_address)
{
    return _MAV_RETURN_uint8_t_array(msg, requester_mac_address, 6,  7);
}

/**
 * @brief Get field requester_process_id from file_system_manager_node_status message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_get_requester_process_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field last_command_sequence_number from file_system_manager_node_status message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_file_system_manager_node_status_get_last_command_sequence_number(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field command_state_flags from file_system_manager_node_status message
 *
 * @return See COMMAND_STATE_FLAGS enum.
 */
static inline uint8_t mavlink_msg_file_system_manager_node_status_get_command_state_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a file_system_manager_node_status message into a struct
 *
 * @param msg The message to decode
 * @param file_system_manager_node_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_file_system_manager_node_status_decode(const mavlink_message_t* msg, mavlink_file_system_manager_node_status_t* file_system_manager_node_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    file_system_manager_node_status->last_command_sequence_number = mavlink_msg_file_system_manager_node_status_get_last_command_sequence_number(msg);
    file_system_manager_node_status->requester_process_id = mavlink_msg_file_system_manager_node_status_get_requester_process_id(msg);
    file_system_manager_node_status->version = mavlink_msg_file_system_manager_node_status_get_version(msg);
    mavlink_msg_file_system_manager_node_status_get_requester_mac_address(msg, file_system_manager_node_status->requester_mac_address);
    file_system_manager_node_status->command_state_flags = mavlink_msg_file_system_manager_node_status_get_command_state_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN;
        memset(file_system_manager_node_status, 0, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_LEN);
    memcpy(file_system_manager_node_status, _MAV_PAYLOAD(msg), len);
#endif
}
