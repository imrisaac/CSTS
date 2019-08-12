#pragma once
// MESSAGE AV_COMPONENT_INFORMATION PACKING

#define MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION 98

MAVPACKED(
typedef struct __mavlink_av_component_information_t {
 uint16_t component_response; /*< See COMPONENT_RESPONSE_FLAGS enum.*/
 uint16_t number_of_flights; /*< Number of non-flying to flying transitions.*/
 uint8_t index; /*< Index of the originating device.*/
 uint8_t total_devices; /*< Total number of devices.*/
 uint8_t device_type; /*< Device type sending message.*/
 uint8_t hobbs_timer[3]; /*< Number of minutes with main power applied. Updated at least every 10 minutes.*/
 char device_string[16]; /*< */
 char additional_info[16]; /*< */
}) mavlink_av_component_information_t;

#define MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN 42
#define MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN 42
#define MAVLINK_MSG_ID_98_LEN 42
#define MAVLINK_MSG_ID_98_MIN_LEN 42

#define MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC 20
#define MAVLINK_MSG_ID_98_CRC 20

#define MAVLINK_MSG_AV_COMPONENT_INFORMATION_FIELD_HOBBS_TIMER_LEN 3
#define MAVLINK_MSG_AV_COMPONENT_INFORMATION_FIELD_DEVICE_STRING_LEN 16
#define MAVLINK_MSG_AV_COMPONENT_INFORMATION_FIELD_ADDITIONAL_INFO_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AV_COMPONENT_INFORMATION { \
    98, \
    "AV_COMPONENT_INFORMATION", \
    8, \
    {  { "component_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_component_information_t, component_response) }, \
         { "number_of_flights", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_component_information_t, number_of_flights) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_component_information_t, index) }, \
         { "total_devices", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_av_component_information_t, total_devices) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_av_component_information_t, device_type) }, \
         { "hobbs_timer", NULL, MAVLINK_TYPE_UINT8_T, 3, 7, offsetof(mavlink_av_component_information_t, hobbs_timer) }, \
         { "device_string", NULL, MAVLINK_TYPE_CHAR, 16, 10, offsetof(mavlink_av_component_information_t, device_string) }, \
         { "additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 26, offsetof(mavlink_av_component_information_t, additional_info) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AV_COMPONENT_INFORMATION { \
    "AV_COMPONENT_INFORMATION", \
    8, \
    {  { "component_response", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_av_component_information_t, component_response) }, \
         { "number_of_flights", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_av_component_information_t, number_of_flights) }, \
         { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_av_component_information_t, index) }, \
         { "total_devices", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_av_component_information_t, total_devices) }, \
         { "device_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_av_component_information_t, device_type) }, \
         { "hobbs_timer", NULL, MAVLINK_TYPE_UINT8_T, 3, 7, offsetof(mavlink_av_component_information_t, hobbs_timer) }, \
         { "device_string", NULL, MAVLINK_TYPE_CHAR, 16, 10, offsetof(mavlink_av_component_information_t, device_string) }, \
         { "additional_info", NULL, MAVLINK_TYPE_CHAR, 16, 26, offsetof(mavlink_av_component_information_t, additional_info) }, \
         } \
}
#endif

/**
 * @brief Pack a av_component_information message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index Index of the originating device.
 * @param total_devices Total number of devices.
 * @param device_type Device type sending message.
 * @param component_response See COMPONENT_RESPONSE_FLAGS enum.
 * @param hobbs_timer Number of minutes with main power applied. Updated at least every 10 minutes.
 * @param number_of_flights Number of non-flying to flying transitions.
 * @param device_string 
 * @param additional_info 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_component_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, uint8_t total_devices, uint8_t device_type, uint16_t component_response, const uint8_t *hobbs_timer, uint16_t number_of_flights, const char *device_string, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, component_response);
    _mav_put_uint16_t(buf, 2, number_of_flights);
    _mav_put_uint8_t(buf, 4, index);
    _mav_put_uint8_t(buf, 5, total_devices);
    _mav_put_uint8_t(buf, 6, device_type);
    _mav_put_uint8_t_array(buf, 7, hobbs_timer, 3);
    _mav_put_char_array(buf, 10, device_string, 16);
    _mav_put_char_array(buf, 26, additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN);
#else
    mavlink_av_component_information_t packet;
    packet.component_response = component_response;
    packet.number_of_flights = number_of_flights;
    packet.index = index;
    packet.total_devices = total_devices;
    packet.device_type = device_type;
    mav_array_memcpy(packet.hobbs_timer, hobbs_timer, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
}

/**
 * @brief Pack a av_component_information message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index Index of the originating device.
 * @param total_devices Total number of devices.
 * @param device_type Device type sending message.
 * @param component_response See COMPONENT_RESPONSE_FLAGS enum.
 * @param hobbs_timer Number of minutes with main power applied. Updated at least every 10 minutes.
 * @param number_of_flights Number of non-flying to flying transitions.
 * @param device_string 
 * @param additional_info 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_av_component_information_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,uint8_t total_devices,uint8_t device_type,uint16_t component_response,const uint8_t *hobbs_timer,uint16_t number_of_flights,const char *device_string,const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, component_response);
    _mav_put_uint16_t(buf, 2, number_of_flights);
    _mav_put_uint8_t(buf, 4, index);
    _mav_put_uint8_t(buf, 5, total_devices);
    _mav_put_uint8_t(buf, 6, device_type);
    _mav_put_uint8_t_array(buf, 7, hobbs_timer, 3);
    _mav_put_char_array(buf, 10, device_string, 16);
    _mav_put_char_array(buf, 26, additional_info, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN);
#else
    mavlink_av_component_information_t packet;
    packet.component_response = component_response;
    packet.number_of_flights = number_of_flights;
    packet.index = index;
    packet.total_devices = total_devices;
    packet.device_type = device_type;
    mav_array_memcpy(packet.hobbs_timer, hobbs_timer, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
}

/**
 * @brief Encode a av_component_information struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param av_component_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_component_information_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_av_component_information_t* av_component_information)
{
    return mavlink_msg_av_component_information_pack(system_id, component_id, msg, av_component_information->index, av_component_information->total_devices, av_component_information->device_type, av_component_information->component_response, av_component_information->hobbs_timer, av_component_information->number_of_flights, av_component_information->device_string, av_component_information->additional_info);
}

/**
 * @brief Encode a av_component_information struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param av_component_information C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_av_component_information_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_av_component_information_t* av_component_information)
{
    return mavlink_msg_av_component_information_pack_chan(system_id, component_id, chan, msg, av_component_information->index, av_component_information->total_devices, av_component_information->device_type, av_component_information->component_response, av_component_information->hobbs_timer, av_component_information->number_of_flights, av_component_information->device_string, av_component_information->additional_info);
}

/**
 * @brief Send a av_component_information message
 * @param chan MAVLink channel to send the message
 *
 * @param index Index of the originating device.
 * @param total_devices Total number of devices.
 * @param device_type Device type sending message.
 * @param component_response See COMPONENT_RESPONSE_FLAGS enum.
 * @param hobbs_timer Number of minutes with main power applied. Updated at least every 10 minutes.
 * @param number_of_flights Number of non-flying to flying transitions.
 * @param device_string 
 * @param additional_info 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_av_component_information_send(mavlink_channel_t chan, uint8_t index, uint8_t total_devices, uint8_t device_type, uint16_t component_response, const uint8_t *hobbs_timer, uint16_t number_of_flights, const char *device_string, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN];
    _mav_put_uint16_t(buf, 0, component_response);
    _mav_put_uint16_t(buf, 2, number_of_flights);
    _mav_put_uint8_t(buf, 4, index);
    _mav_put_uint8_t(buf, 5, total_devices);
    _mav_put_uint8_t(buf, 6, device_type);
    _mav_put_uint8_t_array(buf, 7, hobbs_timer, 3);
    _mav_put_char_array(buf, 10, device_string, 16);
    _mav_put_char_array(buf, 26, additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION, buf, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
#else
    mavlink_av_component_information_t packet;
    packet.component_response = component_response;
    packet.number_of_flights = number_of_flights;
    packet.index = index;
    packet.total_devices = total_devices;
    packet.device_type = device_type;
    mav_array_memcpy(packet.hobbs_timer, hobbs_timer, sizeof(uint8_t)*3);
    mav_array_memcpy(packet.device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet.additional_info, additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION, (const char *)&packet, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
#endif
}

/**
 * @brief Send a av_component_information message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_av_component_information_send_struct(mavlink_channel_t chan, const mavlink_av_component_information_t* av_component_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_av_component_information_send(chan, av_component_information->index, av_component_information->total_devices, av_component_information->device_type, av_component_information->component_response, av_component_information->hobbs_timer, av_component_information->number_of_flights, av_component_information->device_string, av_component_information->additional_info);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION, (const char *)av_component_information, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_av_component_information_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, uint8_t total_devices, uint8_t device_type, uint16_t component_response, const uint8_t *hobbs_timer, uint16_t number_of_flights, const char *device_string, const char *additional_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, component_response);
    _mav_put_uint16_t(buf, 2, number_of_flights);
    _mav_put_uint8_t(buf, 4, index);
    _mav_put_uint8_t(buf, 5, total_devices);
    _mav_put_uint8_t(buf, 6, device_type);
    _mav_put_uint8_t_array(buf, 7, hobbs_timer, 3);
    _mav_put_char_array(buf, 10, device_string, 16);
    _mav_put_char_array(buf, 26, additional_info, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION, buf, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
#else
    mavlink_av_component_information_t *packet = (mavlink_av_component_information_t *)msgbuf;
    packet->component_response = component_response;
    packet->number_of_flights = number_of_flights;
    packet->index = index;
    packet->total_devices = total_devices;
    packet->device_type = device_type;
    mav_array_memcpy(packet->hobbs_timer, hobbs_timer, sizeof(uint8_t)*3);
    mav_array_memcpy(packet->device_string, device_string, sizeof(char)*16);
    mav_array_memcpy(packet->additional_info, additional_info, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION, (const char *)packet, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_CRC);
#endif
}
#endif

#endif

// MESSAGE AV_COMPONENT_INFORMATION UNPACKING


/**
 * @brief Get field index from av_component_information message
 *
 * @return Index of the originating device.
 */
static inline uint8_t mavlink_msg_av_component_information_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field total_devices from av_component_information message
 *
 * @return Total number of devices.
 */
static inline uint8_t mavlink_msg_av_component_information_get_total_devices(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field device_type from av_component_information message
 *
 * @return Device type sending message.
 */
static inline uint8_t mavlink_msg_av_component_information_get_device_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field component_response from av_component_information message
 *
 * @return See COMPONENT_RESPONSE_FLAGS enum.
 */
static inline uint16_t mavlink_msg_av_component_information_get_component_response(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field hobbs_timer from av_component_information message
 *
 * @return Number of minutes with main power applied. Updated at least every 10 minutes.
 */
static inline uint16_t mavlink_msg_av_component_information_get_hobbs_timer(const mavlink_message_t* msg, uint8_t *hobbs_timer)
{
    return _MAV_RETURN_uint8_t_array(msg, hobbs_timer, 3,  7);
}

/**
 * @brief Get field number_of_flights from av_component_information message
 *
 * @return Number of non-flying to flying transitions.
 */
static inline uint16_t mavlink_msg_av_component_information_get_number_of_flights(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field device_string from av_component_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_information_get_device_string(const mavlink_message_t* msg, char *device_string)
{
    return _MAV_RETURN_char_array(msg, device_string, 16,  10);
}

/**
 * @brief Get field additional_info from av_component_information message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_av_component_information_get_additional_info(const mavlink_message_t* msg, char *additional_info)
{
    return _MAV_RETURN_char_array(msg, additional_info, 16,  26);
}

/**
 * @brief Decode a av_component_information message into a struct
 *
 * @param msg The message to decode
 * @param av_component_information C-struct to decode the message contents into
 */
static inline void mavlink_msg_av_component_information_decode(const mavlink_message_t* msg, mavlink_av_component_information_t* av_component_information)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    av_component_information->component_response = mavlink_msg_av_component_information_get_component_response(msg);
    av_component_information->number_of_flights = mavlink_msg_av_component_information_get_number_of_flights(msg);
    av_component_information->index = mavlink_msg_av_component_information_get_index(msg);
    av_component_information->total_devices = mavlink_msg_av_component_information_get_total_devices(msg);
    av_component_information->device_type = mavlink_msg_av_component_information_get_device_type(msg);
    mavlink_msg_av_component_information_get_hobbs_timer(msg, av_component_information->hobbs_timer);
    mavlink_msg_av_component_information_get_device_string(msg, av_component_information->device_string);
    mavlink_msg_av_component_information_get_additional_info(msg, av_component_information->additional_info);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN? msg->len : MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN;
        memset(av_component_information, 0, MAVLINK_MSG_ID_AV_COMPONENT_INFORMATION_LEN);
    memcpy(av_component_information, _MAV_PAYLOAD(msg), len);
#endif
}
