#pragma once
// MESSAGE FILE_INFORMATION PACKING

#define MAVLINK_MSG_ID_FILE_INFORMATION 224

MAVPACKED(
typedef struct __mavlink_file_information_t {
 uint32_t file_size; /*< File size in bytes. This should be 0 if the file does not exist.*/
 uint16_t file_id; /*< A unique lD assigned to the file by the file system manager for purposes of identifying the file by means other than the filename and extension.*/
 uint8_t version; /*< */
 char filename[32]; /*< the name of the file.*/
 uint8_t filename_length; /*< The length of the file name.*/
 char extension[3]; /*< The extension of the file.*/
 uint8_t file_information_flags; /*< Additional file information in the form of flags.*/
}) mavlink_file_information_t;

#define MAVLINK_MSG_ID_FILE_INFORMATION_LEN 44
#define MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN 44
#define MAVLINK_MSG_ID_224_LEN 44
#define MAVLINK_MSG_ID_224_MIN_LEN 44

#define MAVLINK_MSG_ID_FILE_INFORMATION_CRC 91
#define MAVLINK_MSG_ID_224_CRC 91

#define MAVLINK_MSG_FILE_INFORMATION_FIELD_FILENAME_LEN 32
#define MAVLINK_MSG_FILE_INFORMATION_FIELD_EXTENSION_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FILE_INFORMATION { \
    224, \
    "FILE_INFORMATION", \
    7, \
    {  { "file_size", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_file_information_t, file_size) }, \
         { "file_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_file_information_t, file_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_file_information_t, version) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 7, offsetof(mavlink_file_information_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_file_information_t, filename_length) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 40, offsetof(mavlink_file_information_t, extension) }, \
         { "file_information_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_file_information_t, file_information_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FILE_INFORMATION { \
    "FILE_INFORMATION", \
    7, \
    {  { "file_size", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_file_information_t, file_size) }, \
         { "file_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_file_information_t, file_id) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_file_information_t, version) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 7, offsetof(mavlink_file_information_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_file_information_t, filename_length) }, \
         { "extension", NULL, MAVLINK_TYPE_CHAR, 3, 40, offsetof(mavlink_file_information_t, extension) }, \
         { "file_information_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_file_information_t, file_information_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a file_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 * @param file_information_flags Additional file information in the form of flags.
 * @param file_size File size in bytes. This should be 0 if the file does not exist.
 * @param file_id A unique lD assigned to the file by the file system manager for purposes of identifying the file by means other than the filename and extension.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, const char *filename, uint8_t filename_length, const char *extension, uint8_t file_information_flags, uint32_t file_size, uint16_t file_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, file_size);
    _mav_put_uint16_t(buf, 4, file_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 39, filename_length);
    _mav_put_uint8_t(buf, 43, file_information_flags);
    _mav_put_char_array(buf, 7, filename, 32);
    _mav_put_char_array(buf, 40, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_INFORMATION_LEN);
#else
    mavlink_file_information_t packet;
    packet.file_size = file_size;
    packet.file_id = file_id;
    packet.version = version;
    packet.filename_length = filename_length;
    packet.file_information_flags = file_information_flags;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
}

/**
 * @brief Pack a file_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 * @param file_information_flags Additional file information in the form of flags.
 * @param file_size File size in bytes. This should be 0 if the file does not exist.
 * @param file_id A unique lD assigned to the file by the file system manager for purposes of identifying the file by means other than the filename and extension.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_file_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,const char *filename,uint8_t filename_length,const char *extension,uint8_t file_information_flags,uint32_t file_size,uint16_t file_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, file_size);
    _mav_put_uint16_t(buf, 4, file_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 39, filename_length);
    _mav_put_uint8_t(buf, 43, file_information_flags);
    _mav_put_char_array(buf, 7, filename, 32);
    _mav_put_char_array(buf, 40, extension, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_INFORMATION_LEN);
#else
    mavlink_file_information_t packet;
    packet.file_size = file_size;
    packet.file_id = file_id;
    packet.version = version;
    packet.filename_length = filename_length;
    packet.file_information_flags = file_information_flags;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FILE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FILE_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
}

/**
 * @brief Encode a file_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param file_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_file_information_t* file_information)
{
    return mavlink_msg_file_information_pack(system_id, component_id, msg, file_information->version, file_information->filename, file_information->filename_length, file_information->extension, file_information->file_information_flags, file_information->file_size, file_information->file_id);
}

/**
 * @brief Encode a file_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param file_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_file_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_file_information_t* file_information)
{
    return mavlink_msg_file_information_pack_chan(system_id, component_id, chan, msg, file_information->version, file_information->filename, file_information->filename_length, file_information->extension, file_information->file_information_flags, file_information->file_size, file_information->file_id);
}

/**
 * @brief Send a file_information message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param filename the name of the file.
 * @param filename_length The length of the file name.
 * @param extension The extension of the file.
 * @param file_information_flags Additional file information in the form of flags.
 * @param file_size File size in bytes. This should be 0 if the file does not exist.
 * @param file_id A unique lD assigned to the file by the file system manager for purposes of identifying the file by means other than the filename and extension.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_file_information_send(mavlink_channel_t chan, uint8_t version, const char *filename, uint8_t filename_length, const char *extension, uint8_t file_information_flags, uint32_t file_size, uint16_t file_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FILE_INFORMATION_LEN];
    _mav_put_uint32_t(buf, 0, file_size);
    _mav_put_uint16_t(buf, 4, file_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 39, filename_length);
    _mav_put_uint8_t(buf, 43, file_information_flags);
    _mav_put_char_array(buf, 7, filename, 32);
    _mav_put_char_array(buf, 40, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION, buf, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
#else
    mavlink_file_information_t packet;
    packet.file_size = file_size;
    packet.file_id = file_id;
    packet.version = version;
    packet.filename_length = filename_length;
    packet.file_information_flags = file_information_flags;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a file_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_file_information_send_struct(mavlink_channel_t chan, const mavlink_file_information_t* file_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_file_information_send(chan, file_information->version, file_information->filename, file_information->filename_length, file_information->extension, file_information->file_information_flags, file_information->file_size, file_information->file_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION, (const char *)file_information, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_FILE_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_file_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, const char *filename, uint8_t filename_length, const char *extension, uint8_t file_information_flags, uint32_t file_size, uint16_t file_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, file_size);
    _mav_put_uint16_t(buf, 4, file_id);
    _mav_put_uint8_t(buf, 6, version);
    _mav_put_uint8_t(buf, 39, filename_length);
    _mav_put_uint8_t(buf, 43, file_information_flags);
    _mav_put_char_array(buf, 7, filename, 32);
    _mav_put_char_array(buf, 40, extension, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION, buf, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
#else
    mavlink_file_information_t *packet = (mavlink_file_information_t *)msgbuf;
    packet->file_size = file_size;
    packet->file_id = file_id;
    packet->version = version;
    packet->filename_length = filename_length;
    packet->file_information_flags = file_information_flags;
    mav_array_memcpy(packet->filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet->extension, extension, sizeof(char)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FILE_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_FILE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_LEN, MAVLINK_MSG_ID_FILE_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE FILE_INFORMATION UNPACKING


/**
 * @brief Get field version from file_information message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_file_information_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field filename from file_information message
 *
 * @return the name of the file.
 */
static inline uint16_t mavlink_msg_file_information_get_filename(const mavlink_message_t* msg, char *filename)
{
    return _MAV_RETURN_char_array(msg, filename, 32,  7);
}

/**
 * @brief Get field filename_length from file_information message
 *
 * @return The length of the file name.
 */
static inline uint8_t mavlink_msg_file_information_get_filename_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field extension from file_information message
 *
 * @return The extension of the file.
 */
static inline uint16_t mavlink_msg_file_information_get_extension(const mavlink_message_t* msg, char *extension)
{
    return _MAV_RETURN_char_array(msg, extension, 3,  40);
}

/**
 * @brief Get field file_information_flags from file_information message
 *
 * @return Additional file information in the form of flags.
 */
static inline uint8_t mavlink_msg_file_information_get_file_information_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  43);
}

/**
 * @brief Get field file_size from file_information message
 *
 * @return File size in bytes. This should be 0 if the file does not exist.
 */
static inline uint32_t mavlink_msg_file_information_get_file_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field file_id from file_information message
 *
 * @return A unique lD assigned to the file by the file system manager for purposes of identifying the file by means other than the filename and extension.
 */
static inline uint16_t mavlink_msg_file_information_get_file_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a file_information message into a struct
 *
 * @param msg The message to decode
 * @param file_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_file_information_decode(const mavlink_message_t* msg, mavlink_file_information_t* file_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    file_information->file_size = mavlink_msg_file_information_get_file_size(msg);
    file_information->file_id = mavlink_msg_file_information_get_file_id(msg);
    file_information->version = mavlink_msg_file_information_get_version(msg);
    mavlink_msg_file_information_get_filename(msg, file_information->filename);
    file_information->filename_length = mavlink_msg_file_information_get_filename_length(msg);
    mavlink_msg_file_information_get_extension(msg, file_information->extension);
    file_information->file_information_flags = mavlink_msg_file_information_get_file_information_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FILE_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_FILE_INFORMATION_LEN;
        memset(file_information, 0, MAVLINK_MSG_ID_FILE_INFORMATION_LEN);
    memcpy(file_information, _MAV_PAYLOAD(msg), len);
#endif
}
