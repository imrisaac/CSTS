#pragma once
// MESSAGE DELETE_FILE PACKING

#define MAVLINK_MSG_ID_DELETE_FILE 234

MAVPACKED(
typedef struct __mavlink_delete_file_t {
 uint8_t version; /*< */
 uint8_t filename_length; /*< The length of the file name.*/
 char filename[32]; /*< the name of the file.*/
 char extension[3]; /*< The extension of the file.*/
}) mavlink_delete_file_t;

#define MAVLINK_MSG_ID_DELETE_FILE_LEN 37
#define MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN 37
#define MAVLINK_MSG_ID_234_LEN 37
#define MAVLINK_MSG_ID_234_MIN_LEN 37

#define MAVLINK_MSG_ID_DELETE_FILE_CRC 120
#define MAVLINK_MSG_ID_234_CRC 120

#define MAVLINK_MSG_DELETE_FILE_FIELD_FILENAME_LEN 32
#define MAVLINK_MSG_DELETE_FILE_FIELD_EXTENSION_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DELETE_FILE { \
    234, \
    "DELETE_FILE", \
    4, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_delete_file_t, version) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_delete_file_t, filename_length) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_delete_file_t, filename) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 34, offsetof(mavlink_delete_file_t, extension) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DELETE_FILE { \
    "DELETE_FILE", \
    4, \
    {  { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_delete_file_t, version) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_delete_file_t, filename_length) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 2, offsetof(mavlink_delete_file_t, filename) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 34, offsetof(mavlink_delete_file_t, extension) }, \
         } \
}
#endif

/**
 * @brief Pack a delete_file message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param filename_length The length of the file name.
 * @param filename the name of the file.
 * @param extension The extension of the file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_delete_file_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, uint8_t filename_length, const char *filename, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DELETE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, filename_length);
    _mav_put_char_array(buf, 2, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DELETE_FILE_LEN);
#else
    mavlink_delete_file_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DELETE_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DELETE_FILE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
}

/**
 * @brief Pack a delete_file message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param filename_length The length of the file name.
 * @param filename the name of the file.
 * @param extension The extension of the file.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_delete_file_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,uint8_t filename_length,const char *filename,const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DELETE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, filename_length);
    _mav_put_char_array(buf, 2, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DELETE_FILE_LEN);
#else
    mavlink_delete_file_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DELETE_FILE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DELETE_FILE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
}

/**
 * @brief Encode a delete_file struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param delete_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_delete_file_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_delete_file_t* delete_file)
{
    return mavlink_msg_delete_file_pack(system_id, component_id, msg, delete_file->version, delete_file->filename_length, delete_file->filename, delete_file->extension);
}

/**
 * @brief Encode a delete_file struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param delete_file C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_delete_file_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_delete_file_t* delete_file)
{
    return mavlink_msg_delete_file_pack_chan(system_id, component_id, chan, msg, delete_file->version, delete_file->filename_length, delete_file->filename, delete_file->extension);
}

/**
 * @brief Send a delete_file message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param filename_length The length of the file name.
 * @param filename the name of the file.
 * @param extension The extension of the file.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_delete_file_send(mavlink_channel_t chan, uint8_t version, uint8_t filename_length, const char *filename, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DELETE_FILE_LEN];
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, filename_length);
    _mav_put_char_array(buf, 2, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DELETE_FILE, buf, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
#else
    mavlink_delete_file_t packet;
    packet.version = version;
    packet.filename_length = filename_length;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DELETE_FILE, (const char *)&packet, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
#endif
}

/**
 * @brief Send a delete_file message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_delete_file_send_struct(mavlink_channel_t chan, const mavlink_delete_file_t* delete_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_delete_file_send(chan, delete_file->version, delete_file->filename_length, delete_file->filename, delete_file->extension);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DELETE_FILE, (const char *)delete_file, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
#endif
}

#if MAVLINK_MSG_ID_DELETE_FILE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_delete_file_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, uint8_t filename_length, const char *filename, const char *extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, version);
    _mav_put_uint8_t(buf, 1, filename_length);
    _mav_put_char_array(buf, 2, filename, 32);
    _mav_put_char_array(buf, 34, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DELETE_FILE, buf, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
#else
    mavlink_delete_file_t *packet = (mavlink_delete_file_t *)msgbuf;
    packet->version = version;
    packet->filename_length = filename_length;
    mav_array_memcpy(packet->filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet->extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DELETE_FILE, (const char *)packet, MAVLINK_MSG_ID_DELETE_FILE_MIN_LEN, MAVLINK_MSG_ID_DELETE_FILE_LEN, MAVLINK_MSG_ID_DELETE_FILE_CRC);
#endif
}
#endif

#endif

// MESSAGE DELETE_FILE UNPACKING


/**
 * @brief Get field version from delete_file message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_delete_file_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field filename_length from delete_file message
 *
 * @return The length of the file name.
 */
static inline uint8_t mavlink_msg_delete_file_get_filename_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field filename from delete_file message
 *
 * @return the name of the file.
 */
static inline uint16_t mavlink_msg_delete_file_get_filename(const mavlink_message_t* msg, char *filename)
{
    return _MAV_RETURN_char_array(msg, filename, 32,  2);
}

/**
 * @brief Get field extension from delete_file message
 *
 * @return The extension of the file.
 */
static inline uint16_t mavlink_msg_delete_file_get_extension(const mavlink_message_t* msg, char *extension)
{
    return _MAV_RETURN_char_array(msg, extension, 3,  34);
}

/**
 * @brief Decode a delete_file message into a struct
 *
 * @param msg The message to decode
 * @param delete_file C-struct to decode the message contents into
 */
static inline void mavlink_msg_delete_file_decode(const mavlink_message_t* msg, mavlink_delete_file_t* delete_file)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    delete_file->version = mavlink_msg_delete_file_get_version(msg);
    delete_file->filename_length = mavlink_msg_delete_file_get_filename_length(msg);
    mavlink_msg_delete_file_get_filename(msg, delete_file->filename);
    mavlink_msg_delete_file_get_extension(msg, delete_file->extension);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DELETE_FILE_LEN? msg->len : MAVLINK_MSG_ID_DELETE_FILE_LEN;
        memset(delete_file, 0, MAVLINK_MSG_ID_DELETE_FILE_LEN);
    memcpy(delete_file, _MAV_PAYLOAD(msg), len);
#endif
}
