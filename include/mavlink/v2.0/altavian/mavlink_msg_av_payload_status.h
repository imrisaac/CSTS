#pragma once
// MESSAGE AV_PAYLOAD_STATUS PACKING

#define MAVLINK_MSG_ID_AV_PAYLOAD_STATUS 202

MAVPACKED(
typedef struct __mavlink_av_payload_status_t {
 uint16_t hfov; /*<  Horizontal Field of View of widest field. Angle is from left edge to right edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)*/
 uint16_t vfov; /*< Verical Field of View of widest field. Angle is from top edge to bottom	edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)*/
 uint16_t hfov_list[15]; /*< HFOV values for zoom levels 1-15*/
 uint16_t vfov_list[15]; /*< VFOV values for zoom levels 1-15*/
 int16_t pan; /*< Horizontal CFOV look angle offset with respect to AV front in level flight.	Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2.(range: -pi to pi; rad * 10000) */
 int16_t tilt; /*< Vertical CFOV look angle uplook with respect to AV in level flight.	Frontlook tilt is about AV pitch axis; sidelook, roll.	Positive up. Nominally the down-look angle of the payload, nominally negative. Side-look camera tilt is nominally -pi/6. (range: -pi to pi; rad * 10000)*/
 uint8_t type; /*< The type of payload the status describes (see PAYLOAD_TYPE)*/
 uint8_t status_flags; /*< Defines Payload capabilities and reports selected state of Payload (see PAYLOAD_STATUS_FLAGS)*/
 uint8_t zoom_limit_and_index; /*< Bits 7-4:	Zoom Limit:	Number of highest zoom index of which payload is capable. | Bits 3-0: Currently-selected zoom index. 0 = not zoomed, i.e. fully zoomed out.*/
 uint8_t expanded_config_flags; /*< example*/
}) mavlink_av_payload_status_t;

#define MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN 72
#define MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN 72
#define MAVLINK_MSG_ID_202_LEN 72
#define MAVLINK_MSG_ID_202_MIN_LEN 72

#define MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC 251
#define MAVLINK_MSG_ID_202_CRC 251

#define MAVLINK_MSG_AV_PAYLOAD_STATUS_FIELD_HFOV_LIST_LEN 15
#define MAVLINK_MSG_AV_PAYLOAD_STATUS_FIELD_VFOV_LIST_LEN 15

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_STATUS { \
    202, \
    "AV_PAYLOAD_STATUS", \
    10, \
    {  { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_payload_status_t, hfov) }, \
         { "vfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_payload_status_t, vfov) }, \
         { "hfov_list", NULL, MAVLINK_TYPE_UINT16_T, 15, 4, offsetof(mavlink_av_payload_status_t, hfov_list) }, \
         { "vfov_list", NULL, MAVLINK_TYPE_UINT16_T, 15, 34, offsetof(mavlink_av_payload_status_t, vfov_list) }, \
         { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_av_payload_status_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_av_payload_status_t, tilt) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_av_payload_status_t, type) }, \
         { "status_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_av_payload_status_t, status_flags) }, \
         { "zoom_limit_and_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 70, offsetof(mavlink_av_payload_status_t, zoom_limit_and_index) }, \
         { "expanded_config_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 71, offsetof(mavlink_av_payload_status_t, expanded_config_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_PAYLOAD_STATUS { \
    "AV_PAYLOAD_STATUS", \
    10, \
    {  { "hfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_payload_status_t, hfov) }, \
         { "vfov", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_payload_status_t, vfov) }, \
         { "hfov_list", NULL, MAVLINK_TYPE_UINT16_T, 15, 4, offsetof(mavlink_av_payload_status_t, hfov_list) }, \
         { "vfov_list", NULL, MAVLINK_TYPE_UINT16_T, 15, 34, offsetof(mavlink_av_payload_status_t, vfov_list) }, \
         { "pan", NULL, MAVLINK_TYPE_INT16_T, 0, 64, offsetof(mavlink_av_payload_status_t, pan) }, \
         { "tilt", NULL, MAVLINK_TYPE_INT16_T, 0, 66, offsetof(mavlink_av_payload_status_t, tilt) }, \
         { "type", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_av_payload_status_t, type) }, \
         { "status_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_av_payload_status_t, status_flags) }, \
         { "zoom_limit_and_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 70, offsetof(mavlink_av_payload_status_t, zoom_limit_and_index) }, \
         { "expanded_config_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 71, offsetof(mavlink_av_payload_status_t, expanded_config_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a av_payload_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param type The type of payload the status describes (see PAYLOAD_TYPE)
 * @param status_flags Defines Payload capabilities and reports selected state of Payload (see PAYLOAD_STATUS_FLAGS)
 * @param hfov  Horizontal Field of View of widest field. Angle is from left edge to right edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param vfov Verical Field of View of widest field. Angle is from top edge to bottom	edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param zoom_limit_and_index Bits 7-4:	Zoom Limit:	Number of highest zoom index of which payload is capable. | Bits 3-0: Currently-selected zoom index. 0 = not zoomed, i.e. fully zoomed out.
 * @param hfov_list HFOV values for zoom levels 1-15
 * @param vfov_list VFOV values for zoom levels 1-15
 * @param pan Horizontal CFOV look angle offset with respect to AV front in level flight.	Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2.(range: -pi to pi; rad * 10000) 
 * @param tilt Vertical CFOV look angle uplook with respect to AV in level flight.	Frontlook tilt is about AV pitch axis; sidelook, roll.	Positive up. Nominally the down-look angle of the payload, nominally negative. Side-look camera tilt is nominally -pi/6. (range: -pi to pi; rad * 10000)
 * @param expanded_config_flags example
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t type, uint8_t status_flags, uint16_t hfov, uint16_t vfov, uint8_t zoom_limit_and_index, const uint16_t *hfov_list, const uint16_t *vfov_list, int16_t pan, int16_t tilt, uint8_t expanded_config_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, hfov);
    _mav_put_uint16_t(buf, 2, vfov);
    _mav_put_int16_t(buf, 64, pan);
    _mav_put_int16_t(buf, 66, tilt);
    _mav_put_uint8_t(buf, 68, type);
    _mav_put_uint8_t(buf, 69, status_flags);
    _mav_put_uint8_t(buf, 70, zoom_limit_and_index);
    _mav_put_uint8_t(buf, 71, expanded_config_flags);
    _mav_put_uint16_t_array(buf, 4, hfov_list, 15);
    _mav_put_uint16_t_array(buf, 34, vfov_list, 15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN);
#else
    mavlink_av_payload_status_t packet;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.type = type;
    packet.status_flags = status_flags;
    packet.zoom_limit_and_index = zoom_limit_and_index;
    packet.expanded_config_flags = expanded_config_flags;
    mav_array_memcpy(packet.hfov_list, hfov_list, sizeof(uint16_t)*15);
    mav_array_memcpy(packet.vfov_list, vfov_list, sizeof(uint16_t)*15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Pack a av_payload_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param type The type of payload the status describes (see PAYLOAD_TYPE)
 * @param status_flags Defines Payload capabilities and reports selected state of Payload (see PAYLOAD_STATUS_FLAGS)
 * @param hfov  Horizontal Field of View of widest field. Angle is from left edge to right edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param vfov Verical Field of View of widest field. Angle is from top edge to bottom	edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param zoom_limit_and_index Bits 7-4:	Zoom Limit:	Number of highest zoom index of which payload is capable. | Bits 3-0: Currently-selected zoom index. 0 = not zoomed, i.e. fully zoomed out.
 * @param hfov_list HFOV values for zoom levels 1-15
 * @param vfov_list VFOV values for zoom levels 1-15
 * @param pan Horizontal CFOV look angle offset with respect to AV front in level flight.	Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2.(range: -pi to pi; rad * 10000) 
 * @param tilt Vertical CFOV look angle uplook with respect to AV in level flight.	Frontlook tilt is about AV pitch axis; sidelook, roll.	Positive up. Nominally the down-look angle of the payload, nominally negative. Side-look camera tilt is nominally -pi/6. (range: -pi to pi; rad * 10000)
 * @param expanded_config_flags example
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_payload_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t type,uint8_t status_flags,uint16_t hfov,uint16_t vfov,uint8_t zoom_limit_and_index,const uint16_t *hfov_list,const uint16_t *vfov_list,int16_t pan,int16_t tilt,uint8_t expanded_config_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, hfov);
    _mav_put_uint16_t(buf, 2, vfov);
    _mav_put_int16_t(buf, 64, pan);
    _mav_put_int16_t(buf, 66, tilt);
    _mav_put_uint8_t(buf, 68, type);
    _mav_put_uint8_t(buf, 69, status_flags);
    _mav_put_uint8_t(buf, 70, zoom_limit_and_index);
    _mav_put_uint8_t(buf, 71, expanded_config_flags);
    _mav_put_uint16_t_array(buf, 4, hfov_list, 15);
    _mav_put_uint16_t_array(buf, 34, vfov_list, 15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN);
#else
    mavlink_av_payload_status_t packet;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.type = type;
    packet.status_flags = status_flags;
    packet.zoom_limit_and_index = zoom_limit_and_index;
    packet.expanded_config_flags = expanded_config_flags;
    mav_array_memcpy(packet.hfov_list, hfov_list, sizeof(uint16_t)*15);
    mav_array_memcpy(packet.vfov_list, vfov_list, sizeof(uint16_t)*15);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_PAYLOAD_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Encode a av_payload_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_payload_status_t* av_payload_status)
{
    return mavlink_msg_av_payload_status_pack(system_id, component_id, msg, av_payload_status->type, av_payload_status->status_flags, av_payload_status->hfov, av_payload_status->vfov, av_payload_status->zoom_limit_and_index, av_payload_status->hfov_list, av_payload_status->vfov_list, av_payload_status->pan, av_payload_status->tilt, av_payload_status->expanded_config_flags);
}

/**
 * @brief Encode a av_payload_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_payload_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_payload_status_t* av_payload_status)
{
    return mavlink_msg_av_payload_status_pack_chan(system_id, component_id, chan, msg, av_payload_status->type, av_payload_status->status_flags, av_payload_status->hfov, av_payload_status->vfov, av_payload_status->zoom_limit_and_index, av_payload_status->hfov_list, av_payload_status->vfov_list, av_payload_status->pan, av_payload_status->tilt, av_payload_status->expanded_config_flags);
}

/**
 * @brief Send a av_payload_status message
 * @param chan MAVLink channel to send the message
 *
 * @param type The type of payload the status describes (see PAYLOAD_TYPE)
 * @param status_flags Defines Payload capabilities and reports selected state of Payload (see PAYLOAD_STATUS_FLAGS)
 * @param hfov  Horizontal Field of View of widest field. Angle is from left edge to right edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param vfov Verical Field of View of widest field. Angle is from top edge to bottom	edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 * @param zoom_limit_and_index Bits 7-4:	Zoom Limit:	Number of highest zoom index of which payload is capable. | Bits 3-0: Currently-selected zoom index. 0 = not zoomed, i.e. fully zoomed out.
 * @param hfov_list HFOV values for zoom levels 1-15
 * @param vfov_list VFOV values for zoom levels 1-15
 * @param pan Horizontal CFOV look angle offset with respect to AV front in level flight.	Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2.(range: -pi to pi; rad * 10000) 
 * @param tilt Vertical CFOV look angle uplook with respect to AV in level flight.	Frontlook tilt is about AV pitch axis; sidelook, roll.	Positive up. Nominally the down-look angle of the payload, nominally negative. Side-look camera tilt is nominally -pi/6. (range: -pi to pi; rad * 10000)
 * @param expanded_config_flags example
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_payload_status_send(mavlink_channel_t chan, uint8_t type, uint8_t status_flags, uint16_t hfov, uint16_t vfov, uint8_t zoom_limit_and_index, const uint16_t *hfov_list, const uint16_t *vfov_list, int16_t pan, int16_t tilt, uint8_t expanded_config_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, hfov);
    _mav_put_uint16_t(buf, 2, vfov);
    _mav_put_int16_t(buf, 64, pan);
    _mav_put_int16_t(buf, 66, tilt);
    _mav_put_uint8_t(buf, 68, type);
    _mav_put_uint8_t(buf, 69, status_flags);
    _mav_put_uint8_t(buf, 70, zoom_limit_and_index);
    _mav_put_uint8_t(buf, 71, expanded_config_flags);
    _mav_put_uint16_t_array(buf, 4, hfov_list, 15);
    _mav_put_uint16_t_array(buf, 34, vfov_list, 15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
#else
    mavlink_av_payload_status_t packet;
    packet.hfov = hfov;
    packet.vfov = vfov;
    packet.pan = pan;
    packet.tilt = tilt;
    packet.type = type;
    packet.status_flags = status_flags;
    packet.zoom_limit_and_index = zoom_limit_and_index;
    packet.expanded_config_flags = expanded_config_flags;
    mav_array_memcpy(packet.hfov_list, hfov_list, sizeof(uint16_t)*15);
    mav_array_memcpy(packet.vfov_list, vfov_list, sizeof(uint16_t)*15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
#endif
}

/**
 * @brief Send a av_payload_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_payload_status_send_struct(mavlink_channel_t chan, const mavlink_av_payload_status_t* av_payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_payload_status_send(chan, av_payload_status->type, av_payload_status->status_flags, av_payload_status->hfov, av_payload_status->vfov, av_payload_status->zoom_limit_and_index, av_payload_status->hfov_list, av_payload_status->vfov_list, av_payload_status->pan, av_payload_status->tilt, av_payload_status->expanded_config_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS, (const char *)av_payload_status, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_payload_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t type, uint8_t status_flags, uint16_t hfov, uint16_t vfov, uint8_t zoom_limit_and_index, const uint16_t *hfov_list, const uint16_t *vfov_list, int16_t pan, int16_t tilt, uint8_t expanded_config_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, hfov);
    _mav_put_uint16_t(buf, 2, vfov);
    _mav_put_int16_t(buf, 64, pan);
    _mav_put_int16_t(buf, 66, tilt);
    _mav_put_uint8_t(buf, 68, type);
    _mav_put_uint8_t(buf, 69, status_flags);
    _mav_put_uint8_t(buf, 70, zoom_limit_and_index);
    _mav_put_uint8_t(buf, 71, expanded_config_flags);
    _mav_put_uint16_t_array(buf, 4, hfov_list, 15);
    _mav_put_uint16_t_array(buf, 34, vfov_list, 15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
#else
    mavlink_av_payload_status_t *packet = (mavlink_av_payload_status_t *)msgbuf;
    packet->hfov = hfov;
    packet->vfov = vfov;
    packet->pan = pan;
    packet->tilt = tilt;
    packet->type = type;
    packet->status_flags = status_flags;
    packet->zoom_limit_and_index = zoom_limit_and_index;
    packet->expanded_config_flags = expanded_config_flags;
    mav_array_memcpy(packet->hfov_list, hfov_list, sizeof(uint16_t)*15);
    mav_array_memcpy(packet->vfov_list, vfov_list, sizeof(uint16_t)*15);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS, (const char *)packet, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_PAYLOAD_STATUS UNPACKING


/**
 * @brief Get field type from av_payload_status message
 *
 * @return The type of payload the status describes (see PAYLOAD_TYPE)
 */
static inline uint8_t mavlink_msg_av_payload_status_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field status_flags from av_payload_status message
 *
 * @return Defines Payload capabilities and reports selected state of Payload (see PAYLOAD_STATUS_FLAGS)
 */
static inline uint8_t mavlink_msg_av_payload_status_get_status_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  69);
}

/**
 * @brief Get field hfov from av_payload_status message
 *
 * @return  Horizontal Field of View of widest field. Angle is from left edge to right edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 */
static inline uint16_t mavlink_msg_av_payload_status_get_hfov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field vfov from av_payload_status message
 *
 * @return Verical Field of View of widest field. Angle is from top edge to bottom	edge of video. This is considered to be Zoom Level 0. (Range: 0 to 2pi; rad * 10000)
 */
static inline uint16_t mavlink_msg_av_payload_status_get_vfov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field zoom_limit_and_index from av_payload_status message
 *
 * @return Bits 7-4:	Zoom Limit:	Number of highest zoom index of which payload is capable. | Bits 3-0: Currently-selected zoom index. 0 = not zoomed, i.e. fully zoomed out.
 */
static inline uint8_t mavlink_msg_av_payload_status_get_zoom_limit_and_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  70);
}

/**
 * @brief Get field hfov_list from av_payload_status message
 *
 * @return HFOV values for zoom levels 1-15
 */
static inline uint16_t mavlink_msg_av_payload_status_get_hfov_list(const mavlink_message_t* msg, uint16_t *hfov_list)
{
    return _MAV_RETURN_uint16_t_array(msg, hfov_list, 15,  4);
}

/**
 * @brief Get field vfov_list from av_payload_status message
 *
 * @return VFOV values for zoom levels 1-15
 */
static inline uint16_t mavlink_msg_av_payload_status_get_vfov_list(const mavlink_message_t* msg, uint16_t *vfov_list)
{
    return _MAV_RETURN_uint16_t_array(msg, vfov_list, 15,  34);
}

/**
 * @brief Get field pan from av_payload_status message
 *
 * @return Horizontal CFOV look angle offset with respect to AV front in level flight.	Pan is about AV yaw axis. Positive clockwise. Side-look camera pan is nominally -pi/2.(range: -pi to pi; rad * 10000) 
 */
static inline int16_t mavlink_msg_av_payload_status_get_pan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  64);
}

/**
 * @brief Get field tilt from av_payload_status message
 *
 * @return Vertical CFOV look angle uplook with respect to AV in level flight.	Frontlook tilt is about AV pitch axis; sidelook, roll.	Positive up. Nominally the down-look angle of the payload, nominally negative. Side-look camera tilt is nominally -pi/6. (range: -pi to pi; rad * 10000)
 */
static inline int16_t mavlink_msg_av_payload_status_get_tilt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  66);
}

/**
 * @brief Get field expanded_config_flags from av_payload_status message
 *
 * @return example
 */
static inline uint8_t mavlink_msg_av_payload_status_get_expanded_config_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  71);
}

/**
 * @brief Decode a av_payload_status message into a struct
 *
 * @param msg The message to decode
 * @param av_payload_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_payload_status_decode(const mavlink_message_t* msg, mavlink_av_payload_status_t* av_payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_payload_status->hfov = mavlink_msg_av_payload_status_get_hfov(msg);
    av_payload_status->vfov = mavlink_msg_av_payload_status_get_vfov(msg);
    mavlink_msg_av_payload_status_get_hfov_list(msg, av_payload_status->hfov_list);
    mavlink_msg_av_payload_status_get_vfov_list(msg, av_payload_status->vfov_list);
    av_payload_status->pan = mavlink_msg_av_payload_status_get_pan(msg);
    av_payload_status->tilt = mavlink_msg_av_payload_status_get_tilt(msg);
    av_payload_status->type = mavlink_msg_av_payload_status_get_type(msg);
    av_payload_status->status_flags = mavlink_msg_av_payload_status_get_status_flags(msg);
    av_payload_status->zoom_limit_and_index = mavlink_msg_av_payload_status_get_zoom_limit_and_index(msg);
    av_payload_status->expanded_config_flags = mavlink_msg_av_payload_status_get_expanded_config_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN? msg->len : MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN;
        memset(av_payload_status, 0, MAVLINK_MSG_ID_AV_PAYLOAD_STATUS_LEN);
    memcpy(av_payload_status, _MAV_PAYLOAD(msg), len);
#endif
}
