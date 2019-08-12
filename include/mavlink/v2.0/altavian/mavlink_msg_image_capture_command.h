#pragma once
// MESSAGE IMAGE_CAPTURE_COMMAND PACKING

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND 211

MAVPACKED(
typedef struct __mavlink_image_capture_command_t {
 uint16_t captured_image_formats; /*< */
 uint16_t horizontal_resolution; /*< */
 uint16_t vertical_resolution; /*< */
 uint16_t horizontal_offset; /*< */
 uint16_t vertical_offset; /*< */
 uint8_t version; /*< */
 uint8_t image_capture_command_flags; /*< If set to 1, space will be made as needed in the file system.*/
 char filename[32]; /*< */
 uint8_t filename_length; /*< The length of the file name.*/
 uint8_t quality; /*< */
 uint8_t downsample_index; /*< */
 uint8_t additional_behavior_block1[12]; /*< */
 uint8_t additional_behavior_block2[12]; /*< */
 uint8_t additional_behavior_block3[12]; /*< */
}) mavlink_image_capture_command_t;

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN 83
#define MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN 83
#define MAVLINK_MSG_ID_211_LEN 83
#define MAVLINK_MSG_ID_211_MIN_LEN 83

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC 38
#define MAVLINK_MSG_ID_211_CRC 38

#define MAVLINK_MSG_IMAGE_CAPTURE_COMMAND_FIELD_FILENAME_LEN 32
#define MAVLINK_MSG_IMAGE_CAPTURE_COMMAND_FIELD_ADDITIONAL_BEHAVIOR_BLOCK1_LEN 12
#define MAVLINK_MSG_IMAGE_CAPTURE_COMMAND_FIELD_ADDITIONAL_BEHAVIOR_BLOCK2_LEN 12
#define MAVLINK_MSG_IMAGE_CAPTURE_COMMAND_FIELD_ADDITIONAL_BEHAVIOR_BLOCK3_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_COMMAND { \
    211, \
    "IMAGE_CAPTURE_COMMAND", \
    14, \
    {  { "captured_image_formats", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_image_capture_command_t, captured_image_formats) }, \
         { "horizontal_resolution", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_image_capture_command_t, horizontal_resolution) }, \
         { "vertical_resolution", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_image_capture_command_t, vertical_resolution) }, \
         { "horizontal_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_image_capture_command_t, horizontal_offset) }, \
         { "vertical_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_image_capture_command_t, vertical_offset) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_image_capture_command_t, version) }, \
         { "image_capture_command_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_image_capture_command_t, image_capture_command_flags) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 12, offsetof(mavlink_image_capture_command_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_image_capture_command_t, filename_length) }, \
         { "quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_image_capture_command_t, quality) }, \
         { "downsample_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_image_capture_command_t, downsample_index) }, \
         { "additional_behavior_block1", NULL, MAVLINK_TYPE_UINT8_T, 12, 47, offsetof(mavlink_image_capture_command_t, additional_behavior_block1) }, \
         { "additional_behavior_block2", NULL, MAVLINK_TYPE_UINT8_T, 12, 59, offsetof(mavlink_image_capture_command_t, additional_behavior_block2) }, \
         { "additional_behavior_block3", NULL, MAVLINK_TYPE_UINT8_T, 12, 71, offsetof(mavlink_image_capture_command_t, additional_behavior_block3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_COMMAND { \
    "IMAGE_CAPTURE_COMMAND", \
    14, \
    {  { "captured_image_formats", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_image_capture_command_t, captured_image_formats) }, \
         { "horizontal_resolution", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_image_capture_command_t, horizontal_resolution) }, \
         { "vertical_resolution", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_image_capture_command_t, vertical_resolution) }, \
         { "horizontal_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_image_capture_command_t, horizontal_offset) }, \
         { "vertical_offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_image_capture_command_t, vertical_offset) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_image_capture_command_t, version) }, \
         { "image_capture_command_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_image_capture_command_t, image_capture_command_flags) }, \
         { "filename", NULL, MAVLINK_TYPE_CHAR, 32, 12, offsetof(mavlink_image_capture_command_t, filename) }, \
         { "filename_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_image_capture_command_t, filename_length) }, \
         { "quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_image_capture_command_t, quality) }, \
         { "downsample_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_image_capture_command_t, downsample_index) }, \
         { "additional_behavior_block1", NULL, MAVLINK_TYPE_UINT8_T, 12, 47, offsetof(mavlink_image_capture_command_t, additional_behavior_block1) }, \
         { "additional_behavior_block2", NULL, MAVLINK_TYPE_UINT8_T, 12, 59, offsetof(mavlink_image_capture_command_t, additional_behavior_block2) }, \
         { "additional_behavior_block3", NULL, MAVLINK_TYPE_UINT8_T, 12, 71, offsetof(mavlink_image_capture_command_t, additional_behavior_block3) }, \
         } \
}
#endif

/**
 * @brief Pack a image_capture_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param image_capture_command_flags If set to 1, space will be made as needed in the file system.
 * @param filename 
 * @param filename_length The length of the file name.
 * @param captured_image_formats 
 * @param horizontal_resolution 
 * @param vertical_resolution 
 * @param horizontal_offset 
 * @param vertical_offset 
 * @param quality 
 * @param downsample_index 
 * @param additional_behavior_block1 
 * @param additional_behavior_block2 
 * @param additional_behavior_block3 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_capture_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, uint8_t image_capture_command_flags, const char *filename, uint8_t filename_length, uint16_t captured_image_formats, uint16_t horizontal_resolution, uint16_t vertical_resolution, uint16_t horizontal_offset, uint16_t vertical_offset, uint8_t quality, uint8_t downsample_index, const uint8_t *additional_behavior_block1, const uint8_t *additional_behavior_block2, const uint8_t *additional_behavior_block3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN];
    _mav_put_uint16_t(buf, 0, captured_image_formats);
    _mav_put_uint16_t(buf, 2, horizontal_resolution);
    _mav_put_uint16_t(buf, 4, vertical_resolution);
    _mav_put_uint16_t(buf, 6, horizontal_offset);
    _mav_put_uint16_t(buf, 8, vertical_offset);
    _mav_put_uint8_t(buf, 10, version);
    _mav_put_uint8_t(buf, 11, image_capture_command_flags);
    _mav_put_uint8_t(buf, 44, filename_length);
    _mav_put_uint8_t(buf, 45, quality);
    _mav_put_uint8_t(buf, 46, downsample_index);
    _mav_put_char_array(buf, 12, filename, 32);
    _mav_put_uint8_t_array(buf, 47, additional_behavior_block1, 12);
    _mav_put_uint8_t_array(buf, 59, additional_behavior_block2, 12);
    _mav_put_uint8_t_array(buf, 71, additional_behavior_block3, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN);
#else
    mavlink_image_capture_command_t packet;
    packet.captured_image_formats = captured_image_formats;
    packet.horizontal_resolution = horizontal_resolution;
    packet.vertical_resolution = vertical_resolution;
    packet.horizontal_offset = horizontal_offset;
    packet.vertical_offset = vertical_offset;
    packet.version = version;
    packet.image_capture_command_flags = image_capture_command_flags;
    packet.filename_length = filename_length;
    packet.quality = quality;
    packet.downsample_index = downsample_index;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.additional_behavior_block1, additional_behavior_block1, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block2, additional_behavior_block2, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block3, additional_behavior_block3, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
}

/**
 * @brief Pack a image_capture_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param image_capture_command_flags If set to 1, space will be made as needed in the file system.
 * @param filename 
 * @param filename_length The length of the file name.
 * @param captured_image_formats 
 * @param horizontal_resolution 
 * @param vertical_resolution 
 * @param horizontal_offset 
 * @param vertical_offset 
 * @param quality 
 * @param downsample_index 
 * @param additional_behavior_block1 
 * @param additional_behavior_block2 
 * @param additional_behavior_block3 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_capture_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,uint8_t image_capture_command_flags,const char *filename,uint8_t filename_length,uint16_t captured_image_formats,uint16_t horizontal_resolution,uint16_t vertical_resolution,uint16_t horizontal_offset,uint16_t vertical_offset,uint8_t quality,uint8_t downsample_index,const uint8_t *additional_behavior_block1,const uint8_t *additional_behavior_block2,const uint8_t *additional_behavior_block3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN];
    _mav_put_uint16_t(buf, 0, captured_image_formats);
    _mav_put_uint16_t(buf, 2, horizontal_resolution);
    _mav_put_uint16_t(buf, 4, vertical_resolution);
    _mav_put_uint16_t(buf, 6, horizontal_offset);
    _mav_put_uint16_t(buf, 8, vertical_offset);
    _mav_put_uint8_t(buf, 10, version);
    _mav_put_uint8_t(buf, 11, image_capture_command_flags);
    _mav_put_uint8_t(buf, 44, filename_length);
    _mav_put_uint8_t(buf, 45, quality);
    _mav_put_uint8_t(buf, 46, downsample_index);
    _mav_put_char_array(buf, 12, filename, 32);
    _mav_put_uint8_t_array(buf, 47, additional_behavior_block1, 12);
    _mav_put_uint8_t_array(buf, 59, additional_behavior_block2, 12);
    _mav_put_uint8_t_array(buf, 71, additional_behavior_block3, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN);
#else
    mavlink_image_capture_command_t packet;
    packet.captured_image_formats = captured_image_formats;
    packet.horizontal_resolution = horizontal_resolution;
    packet.vertical_resolution = vertical_resolution;
    packet.horizontal_offset = horizontal_offset;
    packet.vertical_offset = vertical_offset;
    packet.version = version;
    packet.image_capture_command_flags = image_capture_command_flags;
    packet.filename_length = filename_length;
    packet.quality = quality;
    packet.downsample_index = downsample_index;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.additional_behavior_block1, additional_behavior_block1, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block2, additional_behavior_block2, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block3, additional_behavior_block3, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
}

/**
 * @brief Encode a image_capture_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param image_capture_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_image_capture_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_image_capture_command_t* image_capture_command)
{
    return mavlink_msg_image_capture_command_pack(system_id, component_id, msg, image_capture_command->version, image_capture_command->image_capture_command_flags, image_capture_command->filename, image_capture_command->filename_length, image_capture_command->captured_image_formats, image_capture_command->horizontal_resolution, image_capture_command->vertical_resolution, image_capture_command->horizontal_offset, image_capture_command->vertical_offset, image_capture_command->quality, image_capture_command->downsample_index, image_capture_command->additional_behavior_block1, image_capture_command->additional_behavior_block2, image_capture_command->additional_behavior_block3);
}

/**
 * @brief Encode a image_capture_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param image_capture_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_image_capture_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_image_capture_command_t* image_capture_command)
{
    return mavlink_msg_image_capture_command_pack_chan(system_id, component_id, chan, msg, image_capture_command->version, image_capture_command->image_capture_command_flags, image_capture_command->filename, image_capture_command->filename_length, image_capture_command->captured_image_formats, image_capture_command->horizontal_resolution, image_capture_command->vertical_resolution, image_capture_command->horizontal_offset, image_capture_command->vertical_offset, image_capture_command->quality, image_capture_command->downsample_index, image_capture_command->additional_behavior_block1, image_capture_command->additional_behavior_block2, image_capture_command->additional_behavior_block3);
}

/**
 * @brief Send a image_capture_command message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param image_capture_command_flags If set to 1, space will be made as needed in the file system.
 * @param filename 
 * @param filename_length The length of the file name.
 * @param captured_image_formats 
 * @param horizontal_resolution 
 * @param vertical_resolution 
 * @param horizontal_offset 
 * @param vertical_offset 
 * @param quality 
 * @param downsample_index 
 * @param additional_behavior_block1 
 * @param additional_behavior_block2 
 * @param additional_behavior_block3 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_image_capture_command_send(mavlink_channel_t chan, uint8_t version, uint8_t image_capture_command_flags, const char *filename, uint8_t filename_length, uint16_t captured_image_formats, uint16_t horizontal_resolution, uint16_t vertical_resolution, uint16_t horizontal_offset, uint16_t vertical_offset, uint8_t quality, uint8_t downsample_index, const uint8_t *additional_behavior_block1, const uint8_t *additional_behavior_block2, const uint8_t *additional_behavior_block3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN];
    _mav_put_uint16_t(buf, 0, captured_image_formats);
    _mav_put_uint16_t(buf, 2, horizontal_resolution);
    _mav_put_uint16_t(buf, 4, vertical_resolution);
    _mav_put_uint16_t(buf, 6, horizontal_offset);
    _mav_put_uint16_t(buf, 8, vertical_offset);
    _mav_put_uint8_t(buf, 10, version);
    _mav_put_uint8_t(buf, 11, image_capture_command_flags);
    _mav_put_uint8_t(buf, 44, filename_length);
    _mav_put_uint8_t(buf, 45, quality);
    _mav_put_uint8_t(buf, 46, downsample_index);
    _mav_put_char_array(buf, 12, filename, 32);
    _mav_put_uint8_t_array(buf, 47, additional_behavior_block1, 12);
    _mav_put_uint8_t_array(buf, 59, additional_behavior_block2, 12);
    _mav_put_uint8_t_array(buf, 71, additional_behavior_block3, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND, buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
#else
    mavlink_image_capture_command_t packet;
    packet.captured_image_formats = captured_image_formats;
    packet.horizontal_resolution = horizontal_resolution;
    packet.vertical_resolution = vertical_resolution;
    packet.horizontal_offset = horizontal_offset;
    packet.vertical_offset = vertical_offset;
    packet.version = version;
    packet.image_capture_command_flags = image_capture_command_flags;
    packet.filename_length = filename_length;
    packet.quality = quality;
    packet.downsample_index = downsample_index;
    mav_array_memcpy(packet.filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet.additional_behavior_block1, additional_behavior_block1, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block2, additional_behavior_block2, sizeof(uint8_t)*12);
    mav_array_memcpy(packet.additional_behavior_block3, additional_behavior_block3, sizeof(uint8_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
#endif
}

/**
 * @brief Send a image_capture_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_image_capture_command_send_struct(mavlink_channel_t chan, const mavlink_image_capture_command_t* image_capture_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_image_capture_command_send(chan, image_capture_command->version, image_capture_command->image_capture_command_flags, image_capture_command->filename, image_capture_command->filename_length, image_capture_command->captured_image_formats, image_capture_command->horizontal_resolution, image_capture_command->vertical_resolution, image_capture_command->horizontal_offset, image_capture_command->vertical_offset, image_capture_command->quality, image_capture_command->downsample_index, image_capture_command->additional_behavior_block1, image_capture_command->additional_behavior_block2, image_capture_command->additional_behavior_block3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND, (const char *)image_capture_command, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_image_capture_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, uint8_t image_capture_command_flags, const char *filename, uint8_t filename_length, uint16_t captured_image_formats, uint16_t horizontal_resolution, uint16_t vertical_resolution, uint16_t horizontal_offset, uint16_t vertical_offset, uint8_t quality, uint8_t downsample_index, const uint8_t *additional_behavior_block1, const uint8_t *additional_behavior_block2, const uint8_t *additional_behavior_block3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, captured_image_formats);
    _mav_put_uint16_t(buf, 2, horizontal_resolution);
    _mav_put_uint16_t(buf, 4, vertical_resolution);
    _mav_put_uint16_t(buf, 6, horizontal_offset);
    _mav_put_uint16_t(buf, 8, vertical_offset);
    _mav_put_uint8_t(buf, 10, version);
    _mav_put_uint8_t(buf, 11, image_capture_command_flags);
    _mav_put_uint8_t(buf, 44, filename_length);
    _mav_put_uint8_t(buf, 45, quality);
    _mav_put_uint8_t(buf, 46, downsample_index);
    _mav_put_char_array(buf, 12, filename, 32);
    _mav_put_uint8_t_array(buf, 47, additional_behavior_block1, 12);
    _mav_put_uint8_t_array(buf, 59, additional_behavior_block2, 12);
    _mav_put_uint8_t_array(buf, 71, additional_behavior_block3, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND, buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
#else
    mavlink_image_capture_command_t *packet = (mavlink_image_capture_command_t *)msgbuf;
    packet->captured_image_formats = captured_image_formats;
    packet->horizontal_resolution = horizontal_resolution;
    packet->vertical_resolution = vertical_resolution;
    packet->horizontal_offset = horizontal_offset;
    packet->vertical_offset = vertical_offset;
    packet->version = version;
    packet->image_capture_command_flags = image_capture_command_flags;
    packet->filename_length = filename_length;
    packet->quality = quality;
    packet->downsample_index = downsample_index;
    mav_array_memcpy(packet->filename, filename, sizeof(char)*32);
    mav_array_memcpy(packet->additional_behavior_block1, additional_behavior_block1, sizeof(uint8_t)*12);
    mav_array_memcpy(packet->additional_behavior_block2, additional_behavior_block2, sizeof(uint8_t)*12);
    mav_array_memcpy(packet->additional_behavior_block3, additional_behavior_block3, sizeof(uint8_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND, (const char *)packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE IMAGE_CAPTURE_COMMAND UNPACKING


/**
 * @brief Get field version from image_capture_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_image_capture_command_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field image_capture_command_flags from image_capture_command message
 *
 * @return If set to 1, space will be made as needed in the file system.
 */
static inline uint8_t mavlink_msg_image_capture_command_get_image_capture_command_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field filename from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_filename(const mavlink_message_t* msg, char *filename)
{
    return _MAV_RETURN_char_array(msg, filename, 32,  12);
}

/**
 * @brief Get field filename_length from image_capture_command message
 *
 * @return The length of the file name.
 */
static inline uint8_t mavlink_msg_image_capture_command_get_filename_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  44);
}

/**
 * @brief Get field captured_image_formats from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_captured_image_formats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field horizontal_resolution from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_horizontal_resolution(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field vertical_resolution from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_vertical_resolution(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field horizontal_offset from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_horizontal_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field vertical_offset from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_vertical_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field quality from image_capture_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_image_capture_command_get_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  45);
}

/**
 * @brief Get field downsample_index from image_capture_command message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_image_capture_command_get_downsample_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  46);
}

/**
 * @brief Get field additional_behavior_block1 from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_additional_behavior_block1(const mavlink_message_t* msg, uint8_t *additional_behavior_block1)
{
    return _MAV_RETURN_uint8_t_array(msg, additional_behavior_block1, 12,  47);
}

/**
 * @brief Get field additional_behavior_block2 from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_additional_behavior_block2(const mavlink_message_t* msg, uint8_t *additional_behavior_block2)
{
    return _MAV_RETURN_uint8_t_array(msg, additional_behavior_block2, 12,  59);
}

/**
 * @brief Get field additional_behavior_block3 from image_capture_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_command_get_additional_behavior_block3(const mavlink_message_t* msg, uint8_t *additional_behavior_block3)
{
    return _MAV_RETURN_uint8_t_array(msg, additional_behavior_block3, 12,  71);
}

/**
 * @brief Decode a image_capture_command message into a struct
 *
 * @param msg The message to decode
 * @param image_capture_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_image_capture_command_decode(const mavlink_message_t* msg, mavlink_image_capture_command_t* image_capture_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    image_capture_command->captured_image_formats = mavlink_msg_image_capture_command_get_captured_image_formats(msg);
    image_capture_command->horizontal_resolution = mavlink_msg_image_capture_command_get_horizontal_resolution(msg);
    image_capture_command->vertical_resolution = mavlink_msg_image_capture_command_get_vertical_resolution(msg);
    image_capture_command->horizontal_offset = mavlink_msg_image_capture_command_get_horizontal_offset(msg);
    image_capture_command->vertical_offset = mavlink_msg_image_capture_command_get_vertical_offset(msg);
    image_capture_command->version = mavlink_msg_image_capture_command_get_version(msg);
    image_capture_command->image_capture_command_flags = mavlink_msg_image_capture_command_get_image_capture_command_flags(msg);
    mavlink_msg_image_capture_command_get_filename(msg, image_capture_command->filename);
    image_capture_command->filename_length = mavlink_msg_image_capture_command_get_filename_length(msg);
    image_capture_command->quality = mavlink_msg_image_capture_command_get_quality(msg);
    image_capture_command->downsample_index = mavlink_msg_image_capture_command_get_downsample_index(msg);
    mavlink_msg_image_capture_command_get_additional_behavior_block1(msg, image_capture_command->additional_behavior_block1);
    mavlink_msg_image_capture_command_get_additional_behavior_block2(msg, image_capture_command->additional_behavior_block2);
    mavlink_msg_image_capture_command_get_additional_behavior_block3(msg, image_capture_command->additional_behavior_block3);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN;
        memset(image_capture_command, 0, MAVLINK_MSG_ID_IMAGE_CAPTURE_COMMAND_LEN);
    memcpy(image_capture_command, _MAV_PAYLOAD(msg), len);
#endif
}
