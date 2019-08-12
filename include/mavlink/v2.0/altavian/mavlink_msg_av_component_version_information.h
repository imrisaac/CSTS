#pragma once
// MESSAGE AV_COMPONENT_VERSION_INFORMATION PACKING

#define MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION 99

MAVPACKED(
typedef struct __mavlink_av_component_version_information_t {
 uint8_t index; /*< Index of the originating device.*/
 uint8_t device_type; /*< Device type sending message.*/
 char software_version[32]; /*< */
 char device_string[16]; /*< */
 char assembly_part_number[32]; /*< */
 char assembly_hardware_version[4]; /*< */
 char assembly_serial_number[32]; /*< */
 char additional_info[16]; /*< */
}) mavlink_av_component_version_information_t;

#define MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN 134
#define MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN 134
#define MAVLINK_MSG_ID_99_LEN 134
#define MAVLINK_MSG_ID_99_MIN_LEN 134

#define MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC 106
#define MAVLINK_MSG_ID_99_CRC 106

#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_SOFTWARE_VERSION_LEN 32
#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_DEVICE_STRING_LEN 16
#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_ASSEMBLY_PART_NUMBER_LEN 32
#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_ASSEMBLY_HARDWARE_VERSION_LEN 4
#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_ASSEMBLY_SERIAL_NUMBER_LEN 32
#define MAVLINK_MSG_AV_COMPONENT_VERSION_INFORMATION_FIELD_ADDITIONAL_INFO_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_COMPONENT_VERSION_INFORMATION { \
    99, \
    "AV_COMPONENT_VERSION_INFORMATION", \
    8, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_component_version_information_t, index) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_component_version_information_t, device_type) }, \
         { "software_version", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_av_component_version_information_t, software_version) }, \
         { "device_string", NULL, MAVLINK_TYPE_CHAR, 16, 34, offsetof(mavlink_av_component_version_information_t, device_string) }, \
         { "assembly_part_number", NULL, MAVLINK_TYPE_CHAR, 32, 50, offsetof(mavlink_av_component_version_information_t, assembly_part_number) }, \
         { "assembly_hardware_version", NULL, MAVLINK_TYPE_CHAR, 4, 82, offsetof(mavlink_av_component_version_information_t, assembly_hardware_version) }, \
         { "assembly_serial_number", NULL, MAVLINK_TYPE_CHAR, 32, 86, offsetof(mavlink_av_component_version_information_t, assembly_serial_number) }, \
         { "additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 118, offsetof(mavlink_av_component_version_information_t, additional_info) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_COMPONENT_VERSION_INFORMATION { \
    "AV_COMPONENT_VERSION_INFORMATION", \
    8, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_av_component_version_information_t, index) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_av_component_version_information_t, device_type) }, \
         { "software_version", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_av_component_version_information_t, software_version) }, \
         { "device_string", NULL, MAVLINK_TYPE_CHAR, 16, 34, offsetof(mavlink_av_component_version_information_t, device_string) }, \
         { "assembly_part_number", NULL, MAVLINK_TYPE_CHAR, 32, 50, offsetof(mavlink_av_component_version_information_t, assembly_part_number) }, \
         { "assembly_hardware_version", NULL, MAVLINK_TYPE_CHAR, 4, 82, offsetof(mavlink_av_component_version_information_t, assembly_hardware_version) }, \
         { "assembly_serial_number", NULL, MAVLINK_TYPE_CHAR, 32, 86, offsetof(mavlink_av_component_version_information_t, assembly_serial_number) }, \
         { "additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 118, offsetof(mavlink_av_component_version_information_t, additional_info) }, \
         } \
}
#endif

/**
 * @brief Pack a av_component_version_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index Index of the originating device.
 * @param device_type Device type sending message.
 * @param software_version 
 * @param device_string 
 * @param assembly_part_number 
 * @param assembly_hardware_version 
 * @param assembly_serial_number 
 * @param additional_info 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_component_version_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, uint8_t device_type, const char *software_version, const char *device_string, const char *assembly_part_number, const char *assembly_hardware_version, const char *assembly_serial_number, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, index);
    _mav_put_uint8_t(buf, 1, device_type);
    _mav_put_char_array(buf, 2, software_version, 32);
    _mav_put_char_array(buf, 34, device_string, 16);
    _mav_put_char_array(buf, 50, assembly_part_number, 32);
    _mav_put_char_array(buf, 82, assembly_hardware_version, 4);
    _mav_put_char_array(buf, 86, assembly_serial_number, 32);
    _mav_put_char_array(buf, 118, additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN);
#else
    mavlink_av_component_version_information_t packet;
    packet.index = index;
    packet.device_type = device_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*32);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.assembly_part_number, assembly_part_number, sizeof(char)*32);
    mav_array_memcpy(packet.assembly_hardware_version, assembly_hardware_version, sizeof(char)*4);
    mav_array_memcpy(packet.assembly_serial_number, assembly_serial_number, sizeof(char)*32);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
}

/**
 * @brief Pack a av_component_version_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index Index of the originating device.
 * @param device_type Device type sending message.
 * @param software_version 
 * @param device_string 
 * @param assembly_part_number 
 * @param assembly_hardware_version 
 * @param assembly_serial_number 
 * @param additional_info 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_component_version_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,uint8_t device_type,const char *software_version,const char *device_string,const char *assembly_part_number,const char *assembly_hardware_version,const char *assembly_serial_number,const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, index);
    _mav_put_uint8_t(buf, 1, device_type);
    _mav_put_char_array(buf, 2, software_version, 32);
    _mav_put_char_array(buf, 34, device_string, 16);
    _mav_put_char_array(buf, 50, assembly_part_number, 32);
    _mav_put_char_array(buf, 82, assembly_hardware_version, 4);
    _mav_put_char_array(buf, 86, assembly_serial_number, 32);
    _mav_put_char_array(buf, 118, additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN);
#else
    mavlink_av_component_version_information_t packet;
    packet.index = index;
    packet.device_type = device_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*32);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.assembly_part_number, assembly_part_number, sizeof(char)*32);
    mav_array_memcpy(packet.assembly_hardware_version, assembly_hardware_version, sizeof(char)*4);
    mav_array_memcpy(packet.assembly_serial_number, assembly_serial_number, sizeof(char)*32);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
}

/**
 * @brief Encode a av_component_version_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_component_version_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_component_version_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_component_version_information_t* av_component_version_information)
{
    return mavlink_msg_av_component_version_information_pack(system_id, component_id, msg, av_component_version_information->index, av_component_version_information->device_type, av_component_version_information->software_version, av_component_version_information->device_string, av_component_version_information->assembly_part_number, av_component_version_information->assembly_hardware_version, av_component_version_information->assembly_serial_number, av_component_version_information->additional_info);
}

/**
 * @brief Encode a av_component_version_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_component_version_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_component_version_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_component_version_information_t* av_component_version_information)
{
    return mavlink_msg_av_component_version_information_pack_chan(system_id, component_id, chan, msg, av_component_version_information->index, av_component_version_information->device_type, av_component_version_information->software_version, av_component_version_information->device_string, av_component_version_information->assembly_part_number, av_component_version_information->assembly_hardware_version, av_component_version_information->assembly_serial_number, av_component_version_information->additional_info);
}

/**
 * @brief Send a av_component_version_information message
 * @param chan MAVLink channel to send the message
 *
 * @param index Index of the originating device.
 * @param device_type Device type sending message.
 * @param software_version 
 * @param device_string 
 * @param assembly_part_number 
 * @param assembly_hardware_version 
 * @param assembly_serial_number 
 * @param additional_info 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_component_version_information_send(mavlink_channel_t chan, uint8_t index, uint8_t device_type, const char *software_version, const char *device_string, const char *assembly_part_number, const char *assembly_hardware_version, const char *assembly_serial_number, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN];
    _mav_put_uint8_t(buf, 0, index);
    _mav_put_uint8_t(buf, 1, device_type);
    _mav_put_char_array(buf, 2, software_version, 32);
    _mav_put_char_array(buf, 34, device_string, 16);
    _mav_put_char_array(buf, 50, assembly_part_number, 32);
    _mav_put_char_array(buf, 82, assembly_hardware_version, 4);
    _mav_put_char_array(buf, 86, assembly_serial_number, 32);
    _mav_put_char_array(buf, 118, additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION, buf, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
#else
    mavlink_av_component_version_information_t packet;
    packet.index = index;
    packet.device_type = device_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*32);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.assembly_part_number, assembly_part_number, sizeof(char)*32);
    mav_array_memcpy(packet.assembly_hardware_version, assembly_hardware_version, sizeof(char)*4);
    mav_array_memcpy(packet.assembly_serial_number, assembly_serial_number, sizeof(char)*32);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a av_component_version_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_component_version_information_send_struct(mavlink_channel_t chan, const mavlink_av_component_version_information_t* av_component_version_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_component_version_information_send(chan, av_component_version_information->index, av_component_version_information->device_type, av_component_version_information->software_version, av_component_version_information->device_string, av_component_version_information->assembly_part_number, av_component_version_information->assembly_hardware_version, av_component_version_information->assembly_serial_number, av_component_version_information->additional_info);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION, (const char *)av_component_version_information, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_component_version_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, uint8_t device_type, const char *software_version, const char *device_string, const char *assembly_part_number, const char *assembly_hardware_version, const char *assembly_serial_number, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, index);
    _mav_put_uint8_t(buf, 1, device_type);
    _mav_put_char_array(buf, 2, software_version, 32);
    _mav_put_char_array(buf, 34, device_string, 16);
    _mav_put_char_array(buf, 50, assembly_part_number, 32);
    _mav_put_char_array(buf, 82, assembly_hardware_version, 4);
    _mav_put_char_array(buf, 86, assembly_serial_number, 32);
    _mav_put_char_array(buf, 118, additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION, buf, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
#else
    mavlink_av_component_version_information_t *packet = (mavlink_av_component_version_information_t *)msgbuf;
    packet->index = index;
    packet->device_type = device_type;
    mav_array_memcpy(packet->software_version, software_version, sizeof(char)*32);
    mav_array_memcpy(packet->device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet->assembly_part_number, assembly_part_number, sizeof(char)*32);
    mav_array_memcpy(packet->assembly_hardware_version, assembly_hardware_version, sizeof(char)*4);
    mav_array_memcpy(packet->assembly_serial_number, assembly_serial_number, sizeof(char)*32);
    mav_array_memcpy(packet->additional_info, additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_COMPONENT_VERSION_INFORMATION UNPACKING


/**
 * @brief Get field index from av_component_version_information message
 *
 * @return Index of the originating device.
 */
static inline uint8_t mavlink_msg_av_component_version_information_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field device_type from av_component_version_information message
 *
 * @return Device type sending message.
 */
static inline uint8_t mavlink_msg_av_component_version_information_get_device_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field software_version from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_software_version(const mavlink_message_t* msg, char *software_version)
{
    return _MAV_RETURN_char_array(msg, software_version, 32,  2);
}

/**
 * @brief Get field device_string from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_device_string(const mavlink_message_t* msg, char *device_string)
{
    return _MAV_RETURN_char_array(msg, device_string, 16,  34);
}

/**
 * @brief Get field assembly_part_number from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_assembly_part_number(const mavlink_message_t* msg, char *assembly_part_number)
{
    return _MAV_RETURN_char_array(msg, assembly_part_number, 32,  50);
}

/**
 * @brief Get field assembly_hardware_version from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_assembly_hardware_version(const mavlink_message_t* msg, char *assembly_hardware_version)
{
    return _MAV_RETURN_char_array(msg, assembly_hardware_version, 4,  82);
}

/**
 * @brief Get field assembly_serial_number from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_assembly_serial_number(const mavlink_message_t* msg, char *assembly_serial_number)
{
    return _MAV_RETURN_char_array(msg, assembly_serial_number, 32,  86);
}

/**
 * @brief Get field additional_info from av_component_version_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_version_information_get_additional_info(const mavlink_message_t* msg, char *additional_info)
{
    return _MAV_RETURN_char_array(msg, additional_info, 16,  118);
}

/**
 * @brief Decode a av_component_version_information message into a struct
 *
 * @param msg The message to decode
 * @param av_component_version_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_component_version_information_decode(const mavlink_message_t* msg, mavlink_av_component_version_information_t* av_component_version_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_component_version_information->index = mavlink_msg_av_component_version_information_get_index(msg);
    av_component_version_information->device_type = mavlink_msg_av_component_version_information_get_device_type(msg);
    mavlink_msg_av_component_version_information_get_software_version(msg, av_component_version_information->software_version);
    mavlink_msg_av_component_version_information_get_device_string(msg, av_component_version_information->device_string);
    mavlink_msg_av_component_version_information_get_assembly_part_number(msg, av_component_version_information->assembly_part_number);
    mavlink_msg_av_component_version_information_get_assembly_hardware_version(msg, av_component_version_information->assembly_hardware_version);
    mavlink_msg_av_component_version_information_get_assembly_serial_number(msg, av_component_version_information->assembly_serial_number);
    mavlink_msg_av_component_version_information_get_additional_info(msg, av_component_version_information->additional_info);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN;
        memset(av_component_version_information, 0, MAVLINK_MSG_ID_AV_COMPONENT_VERSION_INFORMATION_LEN);
    memcpy(av_component_version_information, _MAV_PAYLOAD(msg), len);
#endif
}
