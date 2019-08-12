#pragma once
// MESSAGE IMAGE_CAPTURE_INFORMATION PACKING

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION 212

MAVPACKED(
typedef struct __mavlink_image_capture_information_t {
 uint16_t image_capture_unavailable_flags; /*< */
 uint16_t supported_image_formats; /*< */
 uint16_t hfov; /*< Imager horizontal field of view.*/
 uint16_t vfov; /*< Imager horizontal field of view.*/
 uint16_t resolution_X; /*< Image X Resolution*/
 uint16_t resolution_Y; /*< Image Y Resolution*/
 uint16_t downsample_ratios[8]; /*< The downsample ratios*/
 uint8_t version; /*< */
 uint8_t recommended_quality; /*< Image offset*/
 uint8_t recommended_downsample_ratio; /*< The recommended downsample ratio to use*/
 uint8_t downsample_index; /*< */
 uint8_t num_quality_settings; /*< The number of quality settings.*/
 uint8_t downsample_ratio_count; /*< The number of downsample ratios included*/
}) mavlink_image_capture_information_t;

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN 34
#define MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN 34
#define MAVLINK_MSG_ID_212_LEN 34
#define MAVLINK_MSG_ID_212_MIN_LEN 34

#define MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC 166
#define MAVLINK_MSG_ID_212_CRC 166

#define MAVLINK_MSG_IMAGE_CAPTURE_INFORMATION_FIELD_DOWNSAMPLE_RATIOS_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_INFORMATION { \
    212, \
    "IMAGE_CAPTURE_INFORMATION", \
    13, \
    {  { "image_capture_unavailable_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_image_capture_information_t, image_capture_unavailable_flags) }, \
         { "supported_image_formats", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_image_capture_information_t, supported_image_formats) }, \
         { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_image_capture_information_t, hfov) }, \
         { "vfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_image_capture_information_t, vfov) }, \
         { "resolution_X", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_image_capture_information_t, resolution_X) }, \
         { "resolution_Y", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_image_capture_information_t, resolution_Y) }, \
         { "downsample_ratios", NULL, MAVLINK_TYPE_UINT16_T, 8, 12, offsetof(mavlink_image_capture_information_t, downsample_ratios) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_image_capture_information_t, version) }, \
         { "recommended_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_image_capture_information_t, recommended_quality) }, \
         { "recommended_downsample_ratio", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_image_capture_information_t, recommended_downsample_ratio) }, \
         { "downsample_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_image_capture_information_t, downsample_index) }, \
         { "num_quality_settings", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_image_capture_information_t, num_quality_settings) }, \
         { "downsample_ratio_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_image_capture_information_t, downsample_ratio_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_INFORMATION { \
    "IMAGE_CAPTURE_INFORMATION", \
    13, \
    {  { "image_capture_unavailable_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_image_capture_information_t, image_capture_unavailable_flags) }, \
         { "supported_image_formats", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_image_capture_information_t, supported_image_formats) }, \
         { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_image_capture_information_t, hfov) }, \
         { "vfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_image_capture_information_t, vfov) }, \
         { "resolution_X", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_image_capture_information_t, resolution_X) }, \
         { "resolution_Y", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_image_capture_information_t, resolution_Y) }, \
         { "downsample_ratios", NULL, MAVLINK_TYPE_UINT16_T, 8, 12, offsetof(mavlink_image_capture_information_t, downsample_ratios) }, \
         { "version", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_image_capture_information_t, version) }, \
         { "recommended_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_image_capture_information_t, recommended_quality) }, \
         { "recommended_downsample_ratio", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_image_capture_information_t, recommended_downsample_ratio) }, \
         { "downsample_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_image_capture_information_t, downsample_index) }, \
         { "num_quality_settings", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_image_capture_information_t, num_quality_settings) }, \
         { "downsample_ratio_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_image_capture_information_t, downsample_ratio_count) }, \
         } \
}
#endif

/**
 * @brief Pack a image_capture_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param version 
 * @param image_capture_unavailable_flags 
 * @param supported_image_formats 
 * @param hfov Imager horizontal field of view.
 * @param vfov Imager horizontal field of view.
 * @param resolution_X Image X Resolution
 * @param resolution_Y Image Y Resolution
 * @param recommended_quality Image offset
 * @param recommended_downsample_ratio The recommended downsample ratio to use
 * @param downsample_index 
 * @param num_quality_settings The number of quality settings.
 * @param downsample_ratio_count The number of downsample ratios included
 * @param downsample_ratios The downsample ratios
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_capture_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t version, uint16_t image_capture_unavailable_flags, uint16_t supported_image_formats, uint16_t hfov, uint16_t vfov, uint16_t resolution_X, uint16_t resolution_Y, uint8_t recommended_quality, uint8_t recommended_downsample_ratio, uint8_t downsample_index, uint8_t num_quality_settings, uint8_t downsample_ratio_count, const uint16_t *downsample_ratios)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, image_capture_unavailable_flags);
    _mav_put_uint16_t(buf, 2, supported_image_formats);
    _mav_put_uint16_t(buf, 4, hfov);
    _mav_put_uint16_t(buf, 6, vfov);
    _mav_put_uint16_t(buf, 8, resolution_X);
    _mav_put_uint16_t(buf, 10, resolution_Y);
    _mav_put_uint8_t(buf, 28, version);
    _mav_put_uint8_t(buf, 29, recommended_quality);
    _mav_put_uint8_t(buf, 30, recommended_downsample_ratio);
    _mav_put_uint8_t(buf, 31, downsample_index);
    _mav_put_uint8_t(buf, 32, num_quality_settings);
    _mav_put_uint8_t(buf, 33, downsample_ratio_count);
    _mav_put_uint16_t_array(buf, 12, downsample_ratios, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN);
#else
    mavlink_image_capture_information_t packet;
    packet.image_capture_unavailable_flags = image_capture_unavailable_flags;
    packet.supported_image_formats = supported_image_formats;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.resolution_X = resolution_X;
    packet.resolution_Y = resolution_Y;
    packet.version = version;
    packet.recommended_quality = recommended_quality;
    packet.recommended_downsample_ratio = recommended_downsample_ratio;
    packet.downsample_index = downsample_index;
    packet.num_quality_settings = num_quality_settings;
    packet.downsample_ratio_count = downsample_ratio_count;
    mav_array_memcpy(packet.downsample_ratios, downsample_ratios, sizeof(uint16_t)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
}

/**
 * @brief Pack a image_capture_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param version 
 * @param image_capture_unavailable_flags 
 * @param supported_image_formats 
 * @param hfov Imager horizontal field of view.
 * @param vfov Imager horizontal field of view.
 * @param resolution_X Image X Resolution
 * @param resolution_Y Image Y Resolution
 * @param recommended_quality Image offset
 * @param recommended_downsample_ratio The recommended downsample ratio to use
 * @param downsample_index 
 * @param num_quality_settings The number of quality settings.
 * @param downsample_ratio_count The number of downsample ratios included
 * @param downsample_ratios The downsample ratios
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_image_capture_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t version,uint16_t image_capture_unavailable_flags,uint16_t supported_image_formats,uint16_t hfov,uint16_t vfov,uint16_t resolution_X,uint16_t resolution_Y,uint8_t recommended_quality,uint8_t recommended_downsample_ratio,uint8_t downsample_index,uint8_t num_quality_settings,uint8_t downsample_ratio_count,const uint16_t *downsample_ratios)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, image_capture_unavailable_flags);
    _mav_put_uint16_t(buf, 2, supported_image_formats);
    _mav_put_uint16_t(buf, 4, hfov);
    _mav_put_uint16_t(buf, 6, vfov);
    _mav_put_uint16_t(buf, 8, resolution_X);
    _mav_put_uint16_t(buf, 10, resolution_Y);
    _mav_put_uint8_t(buf, 28, version);
    _mav_put_uint8_t(buf, 29, recommended_quality);
    _mav_put_uint8_t(buf, 30, recommended_downsample_ratio);
    _mav_put_uint8_t(buf, 31, downsample_index);
    _mav_put_uint8_t(buf, 32, num_quality_settings);
    _mav_put_uint8_t(buf, 33, downsample_ratio_count);
    _mav_put_uint16_t_array(buf, 12, downsample_ratios, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN);
#else
    mavlink_image_capture_information_t packet;
    packet.image_capture_unavailable_flags = image_capture_unavailable_flags;
    packet.supported_image_formats = supported_image_formats;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.resolution_X = resolution_X;
    packet.resolution_Y = resolution_Y;
    packet.version = version;
    packet.recommended_quality = recommended_quality;
    packet.recommended_downsample_ratio = recommended_downsample_ratio;
    packet.downsample_index = downsample_index;
    packet.num_quality_settings = num_quality_settings;
    packet.downsample_ratio_count = downsample_ratio_count;
    mav_array_memcpy(packet.downsample_ratios, downsample_ratios, sizeof(uint16_t)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
}

/**
 * @brief Encode a image_capture_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param image_capture_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_image_capture_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_image_capture_information_t* image_capture_information)
{
    return mavlink_msg_image_capture_information_pack(system_id, component_id, msg, image_capture_information->version, image_capture_information->image_capture_unavailable_flags, image_capture_information->supported_image_formats, image_capture_information->hfov, image_capture_information->vfov, image_capture_information->resolution_X, image_capture_information->resolution_Y, image_capture_information->recommended_quality, image_capture_information->recommended_downsample_ratio, image_capture_information->downsample_index, image_capture_information->num_quality_settings, image_capture_information->downsample_ratio_count, image_capture_information->downsample_ratios);
}

/**
 * @brief Encode a image_capture_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param image_capture_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_image_capture_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_image_capture_information_t* image_capture_information)
{
    return mavlink_msg_image_capture_information_pack_chan(system_id, component_id, chan, msg, image_capture_information->version, image_capture_information->image_capture_unavailable_flags, image_capture_information->supported_image_formats, image_capture_information->hfov, image_capture_information->vfov, image_capture_information->resolution_X, image_capture_information->resolution_Y, image_capture_information->recommended_quality, image_capture_information->recommended_downsample_ratio, image_capture_information->downsample_index, image_capture_information->num_quality_settings, image_capture_information->downsample_ratio_count, image_capture_information->downsample_ratios);
}

/**
 * @brief Send a image_capture_information message
 * @param chan MAVLink channel to send the message
 *
 * @param version 
 * @param image_capture_unavailable_flags 
 * @param supported_image_formats 
 * @param hfov Imager horizontal field of view.
 * @param vfov Imager horizontal field of view.
 * @param resolution_X Image X Resolution
 * @param resolution_Y Image Y Resolution
 * @param recommended_quality Image offset
 * @param recommended_downsample_ratio The recommended downsample ratio to use
 * @param downsample_index 
 * @param num_quality_settings The number of quality settings.
 * @param downsample_ratio_count The number of downsample ratios included
 * @param downsample_ratios The downsample ratios
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_image_capture_information_send(mavlink_channel_t chan, uint8_t version, uint16_t image_capture_unavailable_flags, uint16_t supported_image_formats, uint16_t hfov, uint16_t vfov, uint16_t resolution_X, uint16_t resolution_Y, uint8_t recommended_quality, uint8_t recommended_downsample_ratio, uint8_t downsample_index, uint8_t num_quality_settings, uint8_t downsample_ratio_count, const uint16_t *downsample_ratios)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, image_capture_unavailable_flags);
    _mav_put_uint16_t(buf, 2, supported_image_formats);
    _mav_put_uint16_t(buf, 4, hfov);
    _mav_put_uint16_t(buf, 6, vfov);
    _mav_put_uint16_t(buf, 8, resolution_X);
    _mav_put_uint16_t(buf, 10, resolution_Y);
    _mav_put_uint8_t(buf, 28, version);
    _mav_put_uint8_t(buf, 29, recommended_quality);
    _mav_put_uint8_t(buf, 30, recommended_downsample_ratio);
    _mav_put_uint8_t(buf, 31, downsample_index);
    _mav_put_uint8_t(buf, 32, num_quality_settings);
    _mav_put_uint8_t(buf, 33, downsample_ratio_count);
    _mav_put_uint16_t_array(buf, 12, downsample_ratios, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION, buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
#else
    mavlink_image_capture_information_t packet;
    packet.image_capture_unavailable_flags = image_capture_unavailable_flags;
    packet.supported_image_formats = supported_image_formats;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.resolution_X = resolution_X;
    packet.resolution_Y = resolution_Y;
    packet.version = version;
    packet.recommended_quality = recommended_quality;
    packet.recommended_downsample_ratio = recommended_downsample_ratio;
    packet.downsample_index = downsample_index;
    packet.num_quality_settings = num_quality_settings;
    packet.downsample_ratio_count = downsample_ratio_count;
    mav_array_memcpy(packet.downsample_ratios, downsample_ratios, sizeof(uint16_t)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a image_capture_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_image_capture_information_send_struct(mavlink_channel_t chan, const mavlink_image_capture_information_t* image_capture_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_image_capture_information_send(chan, image_capture_information->version, image_capture_information->image_capture_unavailable_flags, image_capture_information->supported_image_formats, image_capture_information->hfov, image_capture_information->vfov, image_capture_information->resolution_X, image_capture_information->resolution_Y, image_capture_information->recommended_quality, image_capture_information->recommended_downsample_ratio, image_capture_information->downsample_index, image_capture_information->num_quality_settings, image_capture_information->downsample_ratio_count, image_capture_information->downsample_ratios);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION, (const char *)image_capture_information, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_image_capture_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t version, uint16_t image_capture_unavailable_flags, uint16_t supported_image_formats, uint16_t hfov, uint16_t vfov, uint16_t resolution_X, uint16_t resolution_Y, uint8_t recommended_quality, uint8_t recommended_downsample_ratio, uint8_t downsample_index, uint8_t num_quality_settings, uint8_t downsample_ratio_count, const uint16_t *downsample_ratios)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, image_capture_unavailable_flags);
    _mav_put_uint16_t(buf, 2, supported_image_formats);
    _mav_put_uint16_t(buf, 4, hfov);
    _mav_put_uint16_t(buf, 6, vfov);
    _mav_put_uint16_t(buf, 8, resolution_X);
    _mav_put_uint16_t(buf, 10, resolution_Y);
    _mav_put_uint8_t(buf, 28, version);
    _mav_put_uint8_t(buf, 29, recommended_quality);
    _mav_put_uint8_t(buf, 30, recommended_downsample_ratio);
    _mav_put_uint8_t(buf, 31, downsample_index);
    _mav_put_uint8_t(buf, 32, num_quality_settings);
    _mav_put_uint8_t(buf, 33, downsample_ratio_count);
    _mav_put_uint16_t_array(buf, 12, downsample_ratios, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION, buf, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
#else
    mavlink_image_capture_information_t *packet = (mavlink_image_capture_information_t *)msgbuf;
    packet->image_capture_unavailable_flags = image_capture_unavailable_flags;
    packet->supported_image_formats = supported_image_formats;
    packet->hfov = hfov;
    packet->vfov = vfov;
    packet->resolution_X = resolution_X;
    packet->resolution_Y = resolution_Y;
    packet->version = version;
    packet->recommended_quality = recommended_quality;
    packet->recommended_downsample_ratio = recommended_downsample_ratio;
    packet->downsample_index = downsample_index;
    packet->num_quality_settings = num_quality_settings;
    packet->downsample_ratio_count = downsample_ratio_count;
    mav_array_memcpy(packet->downsample_ratios, downsample_ratios, sizeof(uint16_t)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE IMAGE_CAPTURE_INFORMATION UNPACKING


/**
 * @brief Get field version from image_capture_information message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_image_capture_information_get_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field image_capture_unavailable_flags from image_capture_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_information_get_image_capture_unavailable_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field supported_image_formats from image_capture_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_image_capture_information_get_supported_image_formats(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field hfov from image_capture_information message
 *
 * @return Imager horizontal field of view.
 */
static inline uint16_t mavlink_msg_image_capture_information_get_hfov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field vfov from image_capture_information message
 *
 * @return Imager horizontal field of view.
 */
static inline uint16_t mavlink_msg_image_capture_information_get_vfov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field resolution_X from image_capture_information message
 *
 * @return Image X Resolution
 */
static inline uint16_t mavlink_msg_image_capture_information_get_resolution_X(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field resolution_Y from image_capture_information message
 *
 * @return Image Y Resolution
 */
static inline uint16_t mavlink_msg_image_capture_information_get_resolution_Y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field recommended_quality from image_capture_information message
 *
 * @return Image offset
 */
static inline uint8_t mavlink_msg_image_capture_information_get_recommended_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field recommended_downsample_ratio from image_capture_information message
 *
 * @return The recommended downsample ratio to use
 */
static inline uint8_t mavlink_msg_image_capture_information_get_recommended_downsample_ratio(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field downsample_index from image_capture_information message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_image_capture_information_get_downsample_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field num_quality_settings from image_capture_information message
 *
 * @return The number of quality settings.
 */
static inline uint8_t mavlink_msg_image_capture_information_get_num_quality_settings(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field downsample_ratio_count from image_capture_information message
 *
 * @return The number of downsample ratios included
 */
static inline uint8_t mavlink_msg_image_capture_information_get_downsample_ratio_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field downsample_ratios from image_capture_information message
 *
 * @return The downsample ratios
 */
static inline uint16_t mavlink_msg_image_capture_information_get_downsample_ratios(const mavlink_message_t* msg, uint16_t *downsample_ratios)
{
    return _MAV_RETURN_uint16_t_array(msg, downsample_ratios, 8,  12);
}

/**
 * @brief Decode a image_capture_information message into a struct
 *
 * @param msg The message to decode
 * @param image_capture_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_image_capture_information_decode(const mavlink_message_t* msg, mavlink_image_capture_information_t* image_capture_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    image_capture_information->image_capture_unavailable_flags = mavlink_msg_image_capture_information_get_image_capture_unavailable_flags(msg);
    image_capture_information->supported_image_formats = mavlink_msg_image_capture_information_get_supported_image_formats(msg);
    image_capture_information->hfov = mavlink_msg_image_capture_information_get_hfov(msg);
    image_capture_information->vfov = mavlink_msg_image_capture_information_get_vfov(msg);
    image_capture_information->resolution_X = mavlink_msg_image_capture_information_get_resolution_X(msg);
    image_capture_information->resolution_Y = mavlink_msg_image_capture_information_get_resolution_Y(msg);
    mavlink_msg_image_capture_information_get_downsample_ratios(msg, image_capture_information->downsample_ratios);
    image_capture_information->version = mavlink_msg_image_capture_information_get_version(msg);
    image_capture_information->recommended_quality = mavlink_msg_image_capture_information_get_recommended_quality(msg);
    image_capture_information->recommended_downsample_ratio = mavlink_msg_image_capture_information_get_recommended_downsample_ratio(msg);
    image_capture_information->downsample_index = mavlink_msg_image_capture_information_get_downsample_index(msg);
    image_capture_information->num_quality_settings = mavlink_msg_image_capture_information_get_num_quality_settings(msg);
    image_capture_information->downsample_ratio_count = mavlink_msg_image_capture_information_get_downsample_ratio_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN;
        memset(image_capture_information, 0, MAVLINK_MSG_ID_IMAGE_CAPTURE_INFORMATION_LEN);
    memcpy(image_capture_information, _MAV_PAYLOAD(msg), len);
#endif
}
