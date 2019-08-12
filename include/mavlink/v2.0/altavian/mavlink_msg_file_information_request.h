#pragma once
// MESSAGE FILE_INFORMATION_REQUEST PACKING

#define MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST 225

MAVPACKED(
typedef struct __mavlink_file_information_request_t {
 uint8_t version; /*< */
 char filename[32]; /*< the name of the file.*/
 uint8_t filename_length; /*< The length of the file name.*/
 char extension[3]; /*< The extension of the file.*/
}) mavlink_file_information_request_t;

#define MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN 37
#define MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN 37
#define MAVLINK_MSG_ID_225_LEN 37
#define MAVLINK_MSG_ID_225_MIN_LEN 37

#define MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC 104
#define MAVLINK_MSG_ID_225_CRC 104

#define MAVLINK_MSG_FILE_INFORMATION_REQUEST_FIELD_FILENAME_LEN 32
#define MAVLINK_MSG_FILE_INFORMATION_REQUEST_FIELD_EXTENSION_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FILE_INFORMATION_REQUEST { \
    225, \
    "FILE_INFORMATION_REQUEST", \
    4, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_file_information_request_t, version) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 1, offsetof(mavlink_file_information_request_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_file_information_request_t, filename_length) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 34, offsetof(mavlink_file_information_request_t, extension) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FILE_INFORMATION_REQUEST { \
    "FILE_INFORMATION_REQUEST", \
    4, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_file_information_request_t, version) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 1, offsetof(mavlink_file_information_request_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_file_information_request_t, filename_length) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 34, offsetof(mavlink_file_information_request_t, extension) }, \
         } \
}
#endif

/**
 * @brief Pack a file_information_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_information_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const char *filename, uint8_t filename_length, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 33, filename_length);
    _mav_put_char_array(buf, 1, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN);
#else
    mavlink_file_information_request_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
}

/**
 * @brief Pack a file_information_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_information_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const char *filename,uint8_t filename_length,const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 33, filename_length);
    _mav_put_char_array(buf, 1, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN);
#else
    mavlink_file_information_request_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
}

/**
 * @brief Encode a file_information_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param file_information_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_information_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_file_information_request_t* file_information_request)
{
    return mavlink_msg_file_information_request_pack(system_id, component_id, msg, file_information_request->version, file_information_request->filename, file_information_request->filename_length, file_information_request->extension);
}

/**
 * @brief Encode a file_information_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_information_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_information_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_file_information_request_t* file_information_request)
{
    return mavlink_msg_file_information_request_pack_chan(system_id, component_id, chan, msg, file_information_request->version, file_information_request->filename, file_information_request->filename_length, file_information_request->extension);
}

/**
 * @brief Send a file_information_request message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_file_information_request_send(mavlink_channel_t chan, uint8_t version, const char *filename, uint8_t filename_length, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 33, filename_length);
    _mav_put_char_array(buf, 1, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST, buf, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
#else
    mavlink_file_information_request_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
#endif
}

/**
 * @brief Send a file_information_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_file_information_request_send_struct(mavlink_channel_t chan, const mavlink_file_information_request_t* file_information_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_file_information_request_send(chan, file_information_request->version, file_information_request->filename, file_information_request->filename_length, file_information_request->extension);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST, (const char *)file_information_request, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_file_information_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const char *filename, uint8_t filename_length, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 33, filename_length);
    _mav_put_char_array(buf, 1, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST, buf, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
#else
    mavlink_file_information_request_t *packet = (mavlink_file_information_request_t *)msgbuf;
    packet->version = version;
    packet->filename_length = filename_length;
    mav_array_memcpy(packet->filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet->extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST, (const char *)packet, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE FILE_INFORMATION_REQUEST UNPACKING


/**
 * @brief Get field version from file_information_request message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_file_information_request_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field filename from file_information_request message
 *
 * @return the name of the file.
 */
static inline uint16_t mavlink_msg_file_information_request_get_filename(const mavlink_message_t* msg, char *filename)
{
    return _MAV_RETURN_char_array(msg, filename, 32,  1);
}

/**
 * @brief Get field filename_length from file_information_request message
 *
 * @return The length of the file name.
 */
static inline uint8_t mavlink_msg_file_information_request_get_filename_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field extension from file_information_request message
 *
 * @return The extension of the file.
 */
static inline uint16_t mavlink_msg_file_information_request_get_extension(const mavlink_message_t* msg, char *extension)
{
    return _MAV_RETURN_char_array(msg, extension, 3,  34);
}

/**
 * @brief Decode a file_information_request message into a struct
 *
 * @param msg The message to decode
 * @param file_information_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_file_information_request_decode(const mavlink_message_t* msg, mavlink_file_information_request_t* file_information_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    file_information_request->version = mavlink_msg_file_information_request_get_version(msg);
    mavlink_msg_file_information_request_get_filename(msg, file_information_request->filename);
    file_information_request->filename_length = mavlink_msg_file_information_request_get_filename_length(msg);
    mavlink_msg_file_information_request_get_extension(msg, file_information_request->extension);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN;
        memset(file_information_request, 0, MAVLINK_MSG_ID_FILE_INFORMATION_REQUEST_LEN);
    memcpy(file_information_request, _MAV_PAYLOAD(msg), len);
#endif
}
