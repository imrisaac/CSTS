#pragma once
// MESSAGE FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST PACKING

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST 221

MAVPACKED(
typedef struct __mavlink_file_system_manager_node_status_request_t {
 uint16_t requester_process_id; /*< */
 uint8_t version; /*< */
 uint8_t requester_mac_address[6]; /*< */
}) mavlink_file_system_manager_node_status_request_t;

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN 9
#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN 9
#define MAVLINK_MSG_ID_221_LEN 9
#define MAVLINK_MSG_ID_221_MIN_LEN 9

#define MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC 103
#define MAVLINK_MSG_ID_221_CRC 103

#define MAVLINK_MSG_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_FIELD_REQUESTER_MAC_ADDRESS_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST { \
    221, \
    "FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST", \
    3, \
    {  { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_file_system_manager_node_status_request_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_file_system_manager_node_status_request_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 3, offsetof(mavlink_file_system_manager_node_status_request_t, requester_mac_address) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST { \
    "FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST", \
    3, \
    {  { "requester_process_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_file_system_manager_node_status_request_t, requester_process_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_file_system_manager_node_status_request_t, version) }, \
         { "requester_mac_address", NULL, MAVLINK_TYPE_UINT8_T, 6, 3, offsetof(mavlink_file_system_manager_node_status_request_t, requester_mac_address) }, \
         } \
}
#endif

/**
 * @brief Pack a file_system_manager_node_status_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, requester_process_id);
    _mav_put_uint8_t(buf, 2, version);
    _mav_put_uint8_t_array(buf, 3, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN);
#else
    mavlink_file_system_manager_node_status_request_t packet;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
}

/**
 * @brief Pack a file_system_manager_node_status_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const uint8_t *requester_mac_address,uint16_t requester_process_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, requester_process_id);
    _mav_put_uint8_t(buf, 2, version);
    _mav_put_uint8_t_array(buf, 3, requester_mac_address, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN);
#else
    mavlink_file_system_manager_node_status_request_t packet;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
}

/**
 * @brief Encode a file_system_manager_node_status_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param file_system_manager_node_status_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_file_system_manager_node_status_request_t* file_system_manager_node_status_request)
{
    return mavlink_msg_file_system_manager_node_status_request_pack(system_id, component_id, msg, file_system_manager_node_status_request->version, file_system_manager_node_status_request->requester_mac_address, file_system_manager_node_status_request->requester_process_id);
}

/**
 * @brief Encode a file_system_manager_node_status_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_system_manager_node_status_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_file_system_manager_node_status_request_t* file_system_manager_node_status_request)
{
    return mavlink_msg_file_system_manager_node_status_request_pack_chan(system_id, component_id, chan, msg, file_system_manager_node_status_request->version, file_system_manager_node_status_request->requester_mac_address, file_system_manager_node_status_request->requester_process_id);
}

/**
 * @brief Send a file_system_manager_node_status_request message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param requester_mac_address 
 * @param requester_process_id 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_file_system_manager_node_status_request_send(mavlink_channel_t chan, uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN];
    _mav_put_uint16_t(buf, 0, requester_process_id);
    _mav_put_uint8_t(buf, 2, version);
    _mav_put_uint8_t_array(buf, 3, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
#else
    mavlink_file_system_manager_node_status_request_t packet;
    packet.requester_process_id = requester_process_id;
    packet.version = version;
    mav_array_memcpy(packet.requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
#endif
}

/**
 * @brief Send a file_system_manager_node_status_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_file_system_manager_node_status_request_send_struct(mavlink_channel_t chan, const mavlink_file_system_manager_node_status_request_t* file_system_manager_node_status_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_file_system_manager_node_status_request_send(chan, file_system_manager_node_status_request->version, file_system_manager_node_status_request->requester_mac_address, file_system_manager_node_status_request->requester_process_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, (const char *)file_system_manager_node_status_request, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_file_system_manager_node_status_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const uint8_t *requester_mac_address, uint16_t requester_process_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, requester_process_id);
    _mav_put_uint8_t(buf, 2, version);
    _mav_put_uint8_t_array(buf, 3, requester_mac_address, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, buf, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
#else
    mavlink_file_system_manager_node_status_request_t *packet = (mavlink_file_system_manager_node_status_request_t *)msgbuf;
    packet->requester_process_id = requester_process_id;
    packet->version = version;
    mav_array_memcpy(packet->requester_mac_address, requester_mac_address, sizeof(uint8_t)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, (const char *)packet, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST UNPACKING


/**
 * @brief Get field version from file_system_manager_node_status_request message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_file_system_manager_node_status_request_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field requester_mac_address from file_system_manager_node_status_request message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_get_requester_mac_address(const mavlink_message_t* msg, uint8_t *requester_mac_address)
{
    return _MAV_RETURN_uint8_t_array(msg, requester_mac_address, 6,  3);
}

/**
 * @brief Get field requester_process_id from file_system_manager_node_status_request message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_file_system_manager_node_status_request_get_requester_process_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a file_system_manager_node_status_request message into a struct
 *
 * @param msg The message to decode
 * @param file_system_manager_node_status_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_file_system_manager_node_status_request_decode(const mavlink_message_t* msg, mavlink_file_system_manager_node_status_request_t* file_system_manager_node_status_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    file_system_manager_node_status_request->requester_process_id = mavlink_msg_file_system_manager_node_status_request_get_requester_process_id(msg);
    file_system_manager_node_status_request->version = mavlink_msg_file_system_manager_node_status_request_get_version(msg);
    mavlink_msg_file_system_manager_node_status_request_get_requester_mac_address(msg, file_system_manager_node_status_request->requester_mac_address);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN;
        memset(file_system_manager_node_status_request, 0, MAVLINK_MSG_ID_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST_LEN);
    memcpy(file_system_manager_node_status_request, _MAV_PAYLOAD(msg), len);
#endif
}
