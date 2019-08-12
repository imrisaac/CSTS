#pragma once
// MESSAGE BEACON_CONTROL PACKING

#define MAVLINK_MSG_ID_BEACON_CONTROL 188

MAVPACKED(
typedef struct __mavlink_beacon_control_t {
 uint8_t strobe_command; /*< See STROBE_COMMAND_FLAGS enum.*/
 uint8_t locator_command; /*< See LOCATOR_COMMAND_FLAGS, LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS, LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS enums. */
 uint8_t frequency_band; /*< Frequency band in which Locator is transmittino. or will transmit when ON. For pre-FRP equipment, this byte is not transmitted, and the 1O-channelform of byte index 6 is used. The locator is 10 channels only, on 216 MHz. Bit 3 of byte 6 was not used. This byte is transmitted, and the 20channel format of Locator command byte used, only if Locator is capable of accepting the corresponding setup. 200-255*/
}) mavlink_beacon_control_t;

#define MAVLINK_MSG_ID_BEACON_CONTROL_LEN 3
#define MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN 3
#define MAVLINK_MSG_ID_188_LEN 3
#define MAVLINK_MSG_ID_188_MIN_LEN 3

#define MAVLINK_MSG_ID_BEACON_CONTROL_CRC 143
#define MAVLINK_MSG_ID_188_CRC 143



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BEACON_CONTROL { \
    188, \
    "BEACON_CONTROL", \
    3, \
    {  { "strobe_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_beacon_control_t, strobe_command) }, \
         { "locator_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_beacon_control_t, locator_command) }, \
         { "frequency_band", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_beacon_control_t, frequency_band) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BEACON_CONTROL { \
    "BEACON_CONTROL", \
    3, \
    {  { "strobe_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_beacon_control_t, strobe_command) }, \
         { "locator_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_beacon_control_t, locator_command) }, \
         { "frequency_band", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_beacon_control_t, frequency_band) }, \
         } \
}
#endif

/**
 * @brief Pack a beacon_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param strobe_command See STROBE_COMMAND_FLAGS enum.
 * @param locator_command See LOCATOR_COMMAND_FLAGS, LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS, LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS enums. 
 * @param frequency_band Frequency band in which Locator is transmittino. or will transmit when ON. For pre-FRP equipment, this byte is not transmitted, and the 1O-channelform of byte index 6 is used. The locator is 10 channels only, on 216 MHz. Bit 3 of byte 6 was not used. This byte is transmitted, and the 20channel format of Locator command byte used, only if Locator is capable of accepting the corresponding setup. 200-255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_beacon_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t strobe_command, uint8_t locator_command, uint8_t frequency_band)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BEACON_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, strobe_command);
    _mav_put_uint8_t(buf, 1, locator_command);
    _mav_put_uint8_t(buf, 2, frequency_band);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BEACON_CONTROL_LEN);
#else
    mavlink_beacon_control_t packet;
    packet.strobe_command = strobe_command;
    packet.locator_command = locator_command;
    packet.frequency_band = frequency_band;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BEACON_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BEACON_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
}

/**
 * @brief Pack a beacon_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param strobe_command See STROBE_COMMAND_FLAGS enum.
 * @param locator_command See LOCATOR_COMMAND_FLAGS, LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS, LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS enums. 
 * @param frequency_band Frequency band in which Locator is transmittino. or will transmit when ON. For pre-FRP equipment, this byte is not transmitted, and the 1O-channelform of byte index 6 is used. The locator is 10 channels only, on 216 MHz. Bit 3 of byte 6 was not used. This byte is transmitted, and the 20channel format of Locator command byte used, only if Locator is capable of accepting the corresponding setup. 200-255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_beacon_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t strobe_command,uint8_t locator_command,uint8_t frequency_band)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BEACON_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, strobe_command);
    _mav_put_uint8_t(buf, 1, locator_command);
    _mav_put_uint8_t(buf, 2, frequency_band);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BEACON_CONTROL_LEN);
#else
    mavlink_beacon_control_t packet;
    packet.strobe_command = strobe_command;
    packet.locator_command = locator_command;
    packet.frequency_band = frequency_band;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BEACON_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BEACON_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
}

/**
 * @brief Encode a beacon_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param beacon_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_beacon_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_beacon_control_t* beacon_control)
{
    return mavlink_msg_beacon_control_pack(system_id, component_id, msg, beacon_control->strobe_command, beacon_control->locator_command, beacon_control->frequency_band);
}

/**
 * @brief Encode a beacon_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param beacon_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_beacon_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_beacon_control_t* beacon_control)
{
    return mavlink_msg_beacon_control_pack_chan(system_id, component_id, chan, msg, beacon_control->strobe_command, beacon_control->locator_command, beacon_control->frequency_band);
}

/**
 * @brief Send a beacon_control message
 * @param chan MAVLink channel to send the message
 *
 * @param strobe_command See STROBE_COMMAND_FLAGS enum.
 * @param locator_command See LOCATOR_COMMAND_FLAGS, LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS, LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS enums. 
 * @param frequency_band Frequency band in which Locator is transmittino. or will transmit when ON. For pre-FRP equipment, this byte is not transmitted, and the 1O-channelform of byte index 6 is used. The locator is 10 channels only, on 216 MHz. Bit 3 of byte 6 was not used. This byte is transmitted, and the 20channel format of Locator command byte used, only if Locator is capable of accepting the corresponding setup. 200-255
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_beacon_control_send(mavlink_channel_t chan, uint8_t strobe_command, uint8_t locator_command, uint8_t frequency_band)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BEACON_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, strobe_command);
    _mav_put_uint8_t(buf, 1, locator_command);
    _mav_put_uint8_t(buf, 2, frequency_band);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BEACON_CONTROL, buf, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
#else
    mavlink_beacon_control_t packet;
    packet.strobe_command = strobe_command;
    packet.locator_command = locator_command;
    packet.frequency_band = frequency_band;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BEACON_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
#endif
}

/**
 * @brief Send a beacon_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_beacon_control_send_struct(mavlink_channel_t chan, const mavlink_beacon_control_t* beacon_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_beacon_control_send(chan, beacon_control->strobe_command, beacon_control->locator_command, beacon_control->frequency_band);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BEACON_CONTROL, (const char *)beacon_control, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_BEACON_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_beacon_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t strobe_command, uint8_t locator_command, uint8_t frequency_band)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, strobe_command);
    _mav_put_uint8_t(buf, 1, locator_command);
    _mav_put_uint8_t(buf, 2, frequency_band);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BEACON_CONTROL, buf, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
#else
    mavlink_beacon_control_t *packet = (mavlink_beacon_control_t *)msgbuf;
    packet->strobe_command = strobe_command;
    packet->locator_command = locator_command;
    packet->frequency_band = frequency_band;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BEACON_CONTROL, (const char *)packet, MAVLINK_MSG_ID_BEACON_CONTROL_MIN_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_LEN, MAVLINK_MSG_ID_BEACON_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE BEACON_CONTROL UNPACKING


/**
 * @brief Get field strobe_command from beacon_control message
 *
 * @return See STROBE_COMMAND_FLAGS enum.
 */
static inline uint8_t mavlink_msg_beacon_control_get_strobe_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field locator_command from beacon_control message
 *
 * @return See LOCATOR_COMMAND_FLAGS, LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS, LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS enums. 
 */
static inline uint8_t mavlink_msg_beacon_control_get_locator_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field frequency_band from beacon_control message
 *
 * @return Frequency band in which Locator is transmittino. or will transmit when ON. For pre-FRP equipment, this byte is not transmitted, and the 1O-channelform of byte index 6 is used. The locator is 10 channels only, on 216 MHz. Bit 3 of byte 6 was not used. This byte is transmitted, and the 20channel format of Locator command byte used, only if Locator is capable of accepting the corresponding setup. 200-255
 */
static inline uint8_t mavlink_msg_beacon_control_get_frequency_band(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a beacon_control message into a struct
 *
 * @param msg The message to decode
 * @param beacon_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_beacon_control_decode(const mavlink_message_t* msg, mavlink_beacon_control_t* beacon_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    beacon_control->strobe_command = mavlink_msg_beacon_control_get_strobe_command(msg);
    beacon_control->locator_command = mavlink_msg_beacon_control_get_locator_command(msg);
    beacon_control->frequency_band = mavlink_msg_beacon_control_get_frequency_band(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BEACON_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_BEACON_CONTROL_LEN;
        memset(beacon_control, 0, MAVLINK_MSG_ID_BEACON_CONTROL_LEN);
    memcpy(beacon_control, _MAV_PAYLOAD(msg), len);
#endif
}
