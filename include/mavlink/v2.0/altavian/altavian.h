/** @file
 *  @brief MAVLink comm protocol generated from altavian.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ALTAVIAN_H
#define MAVLINK_ALTAVIAN_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ALTAVIAN.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {0, 0, 0, 0, 0, 0, 0, 0, 15, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 42, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 4, 12, 0, 0, 0, 0, 14, 20, 44, 1, 9, 0, 0, 72, 4, 7, 9, 226, 2, 2, 44, 12, 83, 34, 3, 0, 0, 0, 6, 30, 3, 14, 9, 3, 2, 44, 37, 0, 0, 13, 21, 0, 0, 0, 0, 37, 4, 2, 2, 2, 22, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {0, 0, 0, 0, 0, 0, 0, 0, 179, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 20, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 143, 249, 136, 0, 0, 0, 0, 35, 33, 156, 184, 214, 0, 0, 251, 136, 149, 242, 194, 173, 91, 210, 5, 38, 166, 127, 0, 0, 0, 181, 247, 205, 18, 103, 225, 214, 91, 104, 0, 0, 165, 253, 0, 0, 0, 0, 120, 247, 125, 22, 183, 47, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ALTAVIAN

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_RAVEN_MSG_VERSION
#define HAVE_ENUM_RAVEN_MSG_VERSION
typedef enum RAVEN_MSG_VERSION
{
   RAVEN_MSG_VERSION_PRODUCT=1, /*  | */
   RAVEN_MSG_VERSION_MAJOR=2, /*  | */
   RAVEN_MSG_VERSION_MINOR=3, /*  | */
   RAVEN_MSG_VERSION_BUILD=4, /*  | */
   RAVEN_MSG_VERSION_ENUM_END=5, /*  | */
} RAVEN_MSG_VERSION;
#endif

/** @brief Enumeration of KLV Types */
#ifndef HAVE_ENUM_PAYLOAD_KLV_TYPE
#define HAVE_ENUM_PAYLOAD_KLV_TYPE
typedef enum PAYLOAD_KLV_TYPE
{
   MISP_INFO=1, /* MISP information (16Hz) | */
   PRIVATE_INFO=2, /* Private information (16Hz) | */
   MISP_DATA=3, /* MISP data (2Hz) | */
   PRIVATE_DATA=4, /* Private data (2Hz) | */
   PAYLOAD_KLV_TYPE_ENUM_END=5, /*  | */
} PAYLOAD_KLV_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_COMMANDS
#define HAVE_ENUM_PAYLOAD_COMMANDS
typedef enum PAYLOAD_COMMANDS
{
   SEND_ID=1, /*  Send ID (always set)  | */
   CAMERA_FRONT_POWER=2, /*  Set if front camera powered on.  | */
   CAMERA_SIDE_POWER=4, /*  Set if side camera powered on.  | */
   CAMERA_SELECT=8, /*  1: side camera, 0: front camera  | */
   IR_MODE_SELECT=16, /*  1: Black Hot, 0: White Hot  | */
   PAYLOAD_COMMANDS_ENUM_END=17, /*  | */
} PAYLOAD_COMMANDS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SUPPORTED_IMAGE_FORMATS
#define HAVE_ENUM_SUPPORTED_IMAGE_FORMATS
typedef enum SUPPORTED_IMAGE_FORMATS
{
   NITF=1, /*  | */
   JPEG=2, /*  | */
   RAW=4, /*  | */
   LOG=8, /* Diagnostic log | */
   THUMBNAIL=16, /* Thumbnail | */
   SUPPORTED_IMAGE_FORMATS_ENUM_END=17, /*  | */
} SUPPORTED_IMAGE_FORMATS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_FILE_INFORMATION_FLAGS
#define HAVE_ENUM_FILE_INFORMATION_FLAGS
typedef enum FILE_INFORMATION_FLAGS
{
   FILE_EXISTS=1, /*  If set, a file with the specified filename and extension exist in the directory tree. | */
   FILE_INFORMATION_FLAGS_ENUM_END=2, /*  | */
} FILE_INFORMATION_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_COMMAND_STATE_FLAGS
#define HAVE_ENUM_COMMAND_STATE_FLAGS
typedef enum COMMAND_STATE_FLAGS
{
   SERVICING_COMMAND=1, /*  If set, the file system manager is in the process of servicing the request.  | */
   COMPLETED_COMMAND=2, /*  If set, the file system manager has completed servicing the command.  | */
   FILE_ID_INVALID=4, /*  lf set, the file name specified in the request does not exist.  | */
   COMMAND_STATE_FLAGS_ENUM_END=5, /*  | */
} COMMAND_STATE_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_BATTERY_COMMAND_FLAGS
#define HAVE_ENUM_BATTERY_COMMAND_FLAGS
typedef enum BATTERY_COMMAND_FLAGS
{
   SYSTEM_VOLTAGE_OUTPUT=1, /*   | */
   MOTOR_VOLTAGE_OUTPUT=2, /*   | */
   INTERCELL_VOLTAGE_OUTPUT=4, /*   | */
   SYSTEM_COMMAND=16, /*   | */
   MOTOR_VOLTAGE_COMMAND=32, /*   | */
   INTERCELL_VOLTAGE_COMMAND=64, /*  | */
   BATTERY_COMMAND_FLAGS_ENUM_END=65, /*  | */
} BATTERY_COMMAND_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_DEVICE_TYPE_BITS
#define HAVE_ENUM_DEVICE_TYPE_BITS
typedef enum DEVICE_TYPE_BITS
{
   UNIT_BITS=15, /*  Bitmask for the bits of the unit type of the device. | */
   CATEGORY_BITS=240, /*  Bitmask for the bits of the category  | */
   DEVICE_TYPE_BITS_ENUM_END=241, /*  | */
} DEVICE_TYPE_BITS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_DEVICE_TYPE_CATEGORIES
#define HAVE_ENUM_DEVICE_TYPE_CATEGORIES
typedef enum DEVICE_TYPE_CATEGORIES
{
   GROUND=0, /*   | */
   AIR_VEHICLE=32, /*   | */
   SENSORS=64, /*   | */
   POWER_PROPULSION=96, /*   | */
   CONTROL_SURFACES=128, /*   | */
   DATA_LINK=160, /*   | */
   PAYLOAD=192, /*    | */
   DEVICE_TYPE_CATEGORIES_ENUM_END=193, /*  | */
} DEVICE_TYPE_CATEGORIES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GROUND_DEVICE_TYPES
#define HAVE_ENUM_GROUND_DEVICE_TYPES
typedef enum GROUND_DEVICE_TYPES
{
   HANDCONTROLLER=0, /*  HandController  | */
   FALCONVIEW_TOOLBAR=1, /*  FalconView Toolbar  | */
   HUB=2, /*  Hub  | */
   RF_HEAD=3, /*  RF Head (pre-DDL)  | */
   AV_TRACKER=4, /*  AVTracker  | */
   ARM_DDL_RF_HEAD=5, /*  DDL RF Head (ARM)  | */
   DSP_DDL_RF_HEAD=6, /*  DDL RF HEAD (DSP)  | */
   DDLT_DDL_RF_HEAD=7, /*  DDL RF HEAD (DDLT)  | */
   GROUND_DEVICE_TYPES_ENUM_END=8, /*  | */
} GROUND_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_AIR_DEVICE_TYPES
#define HAVE_ENUM_AIR_DEVICE_TYPES
typedef enum AIR_DEVICE_TYPES
{
   AUTOPILOT=0, /*  Autopilot  | */
   AIR_DEVICE_TYPES_ENUM_END=1, /*  | */
} AIR_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SENSOR_DEVICE_TYPES
#define HAVE_ENUM_SENSOR_DEVICE_TYPES
typedef enum SENSOR_DEVICE_TYPES
{
   MAGNETOMETER=0, /* Magnetometer | */
   GPS=1, /* GPS | */
   SENSOR_DEVICE_TYPES_ENUM_END=2, /*  | */
} SENSOR_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CONTROL_SURFACE_DEVICE_TYPES
#define HAVE_ENUM_CONTROL_SURFACE_DEVICE_TYPES
typedef enum CONTROL_SURFACE_DEVICE_TYPES
{
   RUDDER_ELEVATOR_STROBE=0, /*  Rudder/Elevator/Strobe  | */
   CONTROL_SURFACE_DEVICE_TYPES_ENUM_END=1, /*  | */
} CONTROL_SURFACE_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_DATA_LINK_DEVICE_TYPES
#define HAVE_ENUM_DATA_LINK_DEVICE_TYPES
typedef enum DATA_LINK_DEVICE_TYPES
{
   RX=0, /*  RX  | */
   TX=1, /*  TX  | */
   DATA_LINK_DEVICE_TYPES_ENUM_END=2, /*  | */
} DATA_LINK_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_DEVICE_TYPES
#define HAVE_ENUM_PAYLOAD_DEVICE_TYPES
typedef enum PAYLOAD_DEVICE_TYPES
{
   PAYLOAD_DEVICE_PRIMARY=0, /*  Primary Payload  | */
   PAYLOAD_DEVICE_PAN_BOARD=1, /*  Pan Board  | */
   PAYLOAD_DEVICE_TILT_BOARD=2, /*  Tilt Board  | */
   PAYLOAD_DEVICE_CAMERA_BOARD=3, /*  Camera Board  | */
   PAYLOAD_DEVICE_IR_CAMERA=4, /*  IR Camera  | */
   PAYLOAD_DEVICE_VIDEO_COMPRESSOR_BOARD=5, /*  Video compressor board | */
   PAYLOAD_DEVICE_TYPES_ENUM_END=6, /*  | */
} PAYLOAD_DEVICE_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_COMPONENT_RESPONSE_FLAGS
#define HAVE_ENUM_COMPONENT_RESPONSE_FLAGS
typedef enum COMPONENT_RESPONSE_FLAGS
{
   BIT_CAPABLE=1, /*  Whether the component is capable of BIT (Built-in-Test)  | */
   BIT_RUNNING=2, /*  Whether BIT is currently running.  | */
   BIT_COMPLETE=4, /*  Whether BIT is complete.  | */
   BIT_PASSED=8, /*  Whether BIT has passed. Not valid unless BIT completed.  | */
   SAFEMODE_CAPABLE=16, /*  Whether the component is capable of SafeMode.  | */
   SAFEMODE_ENABLED=32, /*  Whether SafeMode is enabled.  | */
   SAFEMODE_ACTIVATED=64, /*  Whether SafeMode is activated.  | */
   COMMUNICATION_OK=128, /*  Whether communication with the component is OK.  | */
   COMPONENT_RESPONSE_FLAGS_ENUM_END=129, /*  | */
} COMPONENT_RESPONSE_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GPS_KEY_STATUS
#define HAVE_ENUM_GPS_KEY_STATUS
typedef enum GPS_KEY_STATUS
{
   NOT_LOADED=0, /*  | */
   NO_KEY=1, /*  | */
   TODAYS_KEY=2, /*  | */
   INCORRECT_KEY=3, /*  | */
   WAITING_FOR_SV=4, /*  | */
   ZEROIZE_SUCCESSFUL=5, /*  | */
   ZEROIZE_FAILED=6, /*  | */
   KEY_LOADED=7, /*  | */
   GPS_KEY_STATUS_ENUM_END=8, /*  | */
} GPS_KEY_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_STROBE_COMMAND_FLAGS
#define HAVE_ENUM_STROBE_COMMAND_FLAGS
typedef enum STROBE_COMMAND_FLAGS
{
   IR_LEDS_ON=1, /*  Whether IR LEDs are on.  | */
   IR_LEDS_ENABLED=2, /*  Whether IR LEDs are armed to turn on upon landing. | */
   RG_LEDS_ON=16, /*  Whether R/G LEDs are on. | */
   RG_LEDS_ENABLED=32, /* Whether R/G LEDs are armed to turn on upon landing. | */
   STROBE_COMMAND_FLAGS_ENUM_END=33, /*  | */
} STROBE_COMMAND_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LOCATOR_COMMAND_FLAGS
#define HAVE_ENUM_LOCATOR_COMMAND_FLAGS
typedef enum LOCATOR_COMMAND_FLAGS
{
   LOCATOR_ON=1, /*  | */
   LOCATOR_ARMED=2, /*  | */
   MULTI_BAND_FLAG=4, /*  Whether the transmitter is multi-band. | */
   SINGLE_BAND_TRANSMIT_CHANNEL_BITS=240, /*  Bits containing the single band transmit channel information. | */
   MULTI_BAND_TRANSMIT_CHANNEL_BITS=248, /*  Bits containing the multi band transmit channel information. | */
   LOCATOR_COMMAND_FLAGS_ENUM_END=249, /*  | */
} LOCATOR_COMMAND_FLAGS;
#endif

/** @brief The channel values for bits 7-4 of the locator command byte if the locator is single-band. */
#ifndef HAVE_ENUM_LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS
#define HAVE_ENUM_LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS
typedef enum LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS
{
   SINGLE_BAND_CHANNEL_1=1, /*  216.005 MHz | */
   SINGLE_BAND_CHANNEL_2=2, /*  216.015 MHz | */
   SINGLE_BAND_CHANNEL_3=3, /*  216.025 MHz | */
   SINGLE_BAND_CHANNEL_4=4, /*  216.035 MHz | */
   SINGLE_BAND_CHANNEL_5=5, /*  216.045 MHz | */
   SINGLE_BAND_CHANNEL_6=6, /*  216.055 MHz | */
   SINGLE_BAND_CHANNEL_7=7, /*  216.065 MHz | */
   SINGLE_BAND_CHANNEL_8=8, /*  216.075 MHz | */
   SINGLE_BAND_CHANNEL_9=9, /*  216.085 MHz | */
   SINGLE_BAND_CHANNEL_10=10, /*  216.095 MHz | */
   LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS_ENUM_END=11, /*  | */
} LOCATOR_SINGLE_BAND_TRANSMIT_CHANNELS;
#endif

/** @brief The channel values for bits 7-3 of the locator command byte if the locator is single-band. */
#ifndef HAVE_ENUM_LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS
#define HAVE_ENUM_LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS
typedef enum LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS
{
   MULTI_BAND_CHANNEL_1=1, /*  2nn.005 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_2=2, /*  2nn.015 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_3=3, /*  2nn.025 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_4=4, /*  2nn.035 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_5=5, /*  2nn.045 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_6=6, /*  2nn.055 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_7=7, /*  2nn.065 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_8=8, /*  2nn.075 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_9=9, /*  2nn.085 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_10=10, /*  2nn.095 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_11=11, /*  2nn.105 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_12=12, /*  2nn.115 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_13=13, /*  2nn.125 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_14=14, /*  2nn.135 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_15=15, /*  2nn.145 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_16=16, /*  2nn.155 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_17=17, /*  2nn.165 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_18=18, /*  2nn.175 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_19=19, /*  2nn.185 MHz where nn is the selected frequency band. | */
   MULTI_BAND_CHANNEL_20=20, /*  2nn.195 MHz where nn is the selected frequency band. | */
   LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS_ENUM_END=21, /*  | */
} LOCATOR_MULTI_BAND_TRANSMIT_CHANNELS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_RALLY_MODE_BEHAVIOR
#define HAVE_ENUM_RALLY_MODE_BEHAVIOR
typedef enum RALLY_MODE_BEHAVIOR
{
   RALLY_LAND=0, /*  | */
   RALLY_RALLY=1, /*  | */
   RALLY_CONTINUE=2, /*  | */
   RALLY_MODE_BEHAVIOR_ENUM_END=3, /*  | */
} RALLY_MODE_BEHAVIOR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_AV_PLANE_TYPE
#define HAVE_ENUM_AV_PLANE_TYPE
typedef enum AV_PLANE_TYPE
{
   GENERIC=0, /*  Generic  | */
   POINTER=1, /*  Pointer  | */
   RAVEN=2, /*  Raven  | */
   MPUAV=3, /*  MPUAV/Swift  | */
   PUMA=4, /*  PUMA  | */
   RPUAV=5, /*  PRUAV (Raven B or Raven B DDL)  | */
   WASP=6, /*  Wasp  | */
   PUMA_AE=8, /*  Puma AE  | */
   AV_PLANE_TYPE_ENUM_END=9, /*  | */
} AV_PLANE_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_EXPANDED_STATUS_FLAGS
#define HAVE_ENUM_EXPANDED_STATUS_FLAGS
typedef enum EXPANDED_STATUS_FLAGS
{
   IN_ORBIT_STATUS_FLAG=4, /*  UAV is capable of sending in orbit status.  | */
   IN_ORBIT_FLAG=8, /*  UAV is in orbit.  | */
   UAV_BATTERY_WARNING_CAPABLE=64, /*  Present if battery can warn for low voltage.  | */
   UAV_BATTERY_WARNING_FLAG=128, /*  Present if battery voltage is low.  | */
   EXPANDED_STATUS_FLAGS_ENUM_END=129, /*  | */
} EXPANDED_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GPS_STATUS_FLAGS
#define HAVE_ENUM_GPS_STATUS_FLAGS
typedef enum GPS_STATUS_FLAGS
{
   GPS_SOLUTION_BITS=7, /*  These 3 bits represent the strength of the GPS solution. See GPS_SOLUTION_FLAGS (Range: 0-7)	 | */
   FIX_VALID=32, /*    | */
   P_CODE=64, /*  P Code  | */
   LOW_BACKUP_BATTERY=128, /*  Low backup battery  | */
   GPS_STATUS_FLAGS_ENUM_END=129, /*  | */
} GPS_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GPS_SOLUTION_FLAGS
#define HAVE_ENUM_GPS_SOLUTION_FLAGS
typedef enum GPS_SOLUTION_FLAGS
{
   GPS_NO_NAV_SOLUTION=0, /*  | */
   GPS_1_SAT_SOLUTION=1, /*  | */
   GPS_2_SAT_SOLUTION=2, /*  | */
   GPS_3_SAT_SOLUTION=3, /*  | */
   GPS_4_SAT_SOLUTION=4, /*  | */
   GPS_2D_POINT_SOLUTION=5, /*  | */
   GPS_3D_POINT_SOLUTION=6, /*  | */
   GPS_DEAD_RECKONING_SOLUTION=7, /*  | */
   GPS_SOLUTION_FLAGS_ENUM_END=8, /*  | */
} GPS_SOLUTION_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_AIRSPEED_MODES
#define HAVE_ENUM_AIRSPEED_MODES
typedef enum AIRSPEED_MODES
{
   AIRSPEED_MODE_ENDURANCE=0, /*  Max endurance  | */
   AIRSPEED_MODE_SLOW=1, /*  Slow airspeed  | */
   AIRSPEED_MODE_FAR=2, /*  Max range  | */
   AIRSPEED_MODE_FAST=4, /*  Max airspeed  | */
   AIRSPEED_MODE_INVALID=255, /*  Invalid  | */
   AIRSPEED_MODES_ENUM_END=256, /*  | */
} AIRSPEED_MODES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_DDL_SECURITY_MODE
#define HAVE_ENUM_DDL_SECURITY_MODE
typedef enum DDL_SECURITY_MODE
{
   OFF=0, /*  Not encrypted. (In the clear.)	 | */
   KEY=1, /*  Encrypted using built-in key.	 | */
   PASSWORD=2, /*  Encrypted using built-in key and operator-entered password.  | */
   DDL_SECURITY_MODE_ENUM_END=3, /*  | */
} DDL_SECURITY_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_TYPE
#define HAVE_ENUM_PAYLOAD_TYPE
typedef enum PAYLOAD_TYPE
{
   EO_COLOR_CAMERA=1, /*  EO Color Camera  | */
   VISIBLE_LASER_ILLUMINATOR=2, /*  Visible Laser Illuminator  | */
   IR_CAMERA=3, /*  IR Camera  | */
   IR_LASER=4, /*  IR Laser  | */
   I2_CAMERA=5, /*  I2 Camera (Image-Intensified)  | */
   GIMBAL=6, /*  Gimbal  | */
   EO_WIDE_CAMERA=7, /*  Wide Angle Color Camera  | */
   PAYLOAD_ION=8, /*  Ion M440 Payload  | */
   PAYLOAD_TYPE_ENUM_END=9, /*  | */
} PAYLOAD_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UAV_STATUS_FLAGS
#define HAVE_ENUM_UAV_STATUS_FLAGS
typedef enum UAV_STATUS_FLAGS
{
   FLIGHT_MODE_LSB=1, /*  | */
   FLIGHT_MODE_MSB=8, /*  Uplink - 0: manual, 1: rate (not used), 2: speed (not used), 3: altitude, 4: nav, 5: home, 6: loiter, 7: follow me (batmav only); Downlink - 0: manual, 1: rate | */
   STATUS_AUTOLAND=16, /*  Uplink - 0: Do not autoland, 1: Autoland; Downlink - 0: Not autolanding, 1: autolanding. | */
   ABORT_RALLY=32, /*  0: initiate rally mode, 1: abort rally mode (uplink only)  | */
   VIDEO_SELECT=64, /*  0: Front, 1: Side  | */
   VIDEO_POWER=128, /*  Set if camera power is on (Used for 'dumb' payload interfaces - ignored in Puma AE DLL)  | */
   TX_LOW_POWER=256, /*  Set if Video Tx power is high (not used by hand controller).  | */
   GAINS_ON=512, /*  If set, send gains to GCS (not used by hand controller).  | */
   MISSION_GENERATION=1024, /*  0: Gen 2, 1: Gen 1 (Obsolete)  | */
   CHANNEL_NUMBER_LSB=2048, /*  Channel number's least significant bit; reports aircraft's channel number (1-8)  | */
   CHANNEL_NUMBER_MSB=8192, /*  Channel number's most significant bit; reports aircraft's channel number (1-8). (CLAIRREQ)  | */
   LOITER_FIGURE_8=16384, /*  Reserved  | */
   FIELD_TC_OFFSET=32768, /*  Set if Field TC offset for gyro calibration table is in use.  | */
   GROUND_TRACK_STALE=65536, /*  Always set for PUMA. (CLAIRREQ)  | */
   STATUS_FLYING=131072, /*  | */
   GPS_TIMEOUT=262144, /*  Set if GPS has timed out.  | */
   UPLINK_TIMEOUT=524288, /*  Set if uplink has timed out.  | */
   BATTERY_LOW_THROTTLE=1048576, /*  Set if aircraft battery is below operational minimum.  | */
   LATCHED_AUTOLAND=2097152, /*  Set if aircraft battery is below operational minimum. (CLAIRREQ) | */
   IN_ROUTE_RALLY=4194304, /*  LOL behavior.  | */
   COMPUTED_MAG_DEV=8388608, /*  Set once GPS has been acquired. (CLAIRREQ) | */
   ORIGIN_SET=16777216, /*  Set if aircraft has acquired valid GPS readings at least once. (CLAIRREQ) | */
   GYRO_CAL=33554432, /*  Set if gyro temperature calibration is valid and in use.  | */
   MAG_X_Y_CAL=67108864, /*  Set when Mag Calibration XY or Mag Calibration XYZ command is received. Cleared when calibration data saved or power off.  | */
   MAG_Z_CAL=134217728, /*  Set when Mag Calibration Z or Mag Calibration XYZ command is received. Cleared when calibration data saved or power off.  | */
   DTED_ALT_BIAS=268435456, /*  Set if using DTED altitude from Falcon View. (CLAIRREQ) | */
   IN_LANDING_SEQUENCE=536870912, /*  Set if UAV is performing a landing sequence.  | */
   MSL_ATTITUDE=1073741824, /*  Set when aircraft acquired valid GPS reading once. (CLAIRREQ) | */
   EEPROM_FAILURE=2147483648, /*  Set if EEPROM block failure.  | */
   UAV_STATUS_FLAGS_ENUM_END=2147483649, /*  | */
} UAV_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_STATUS_FLAGS
#define HAVE_ENUM_PAYLOAD_STATUS_FLAGS
typedef enum PAYLOAD_STATUS_FLAGS
{
   POWER_ON=1, /*  Set if payload power is on.  | */
   CONNECTED=2, /*  set if camera is connected to video downlink.  | */
   IR_CAMERA_POLARITY=4, /*  0: IR camera is set to white hot, 1: IR camera is set to black hot.  | */
   ZOOM_CAPABLE=8, /*  Set if camera can zoom.  | */
   PAN_CAPABLE=16, /*  Set if camera can pan.  | */
   TILT_CAPABLE=32, /*  Set if camera can tilt.  | */
   AUTONOMOUS_PAN_TILT=64, /*  0: Pan/Tilt controlled from ground, 1: Pan/Tilt controlled by AP  | */
   SIDE_LOOK=128, /*  0: Forward looking, 1: Side looking  | */
   PAYLOAD_STATUS_FLAGS_ENUM_END=129, /*  | */
} PAYLOAD_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_STATUS_FLAGS_ADVANCED
#define HAVE_ENUM_PAYLOAD_STATUS_FLAGS_ADVANCED
typedef enum PAYLOAD_STATUS_FLAGS_ADVANCED
{
   RESERVED_0=1, /*  | */
   RESERVED_1=2, /*  | */
   RESERVED_2=4, /*  | */
   RESERVED_3=8, /*  | */
   RESERVED_4=16, /*  | */
   RESERVED_5=32, /*  | */
   SCENE_TRACK_SUSPEND=64, /*  0: No effect, 1: Pauses scene track for a predetermined amount of time before automatically resuming  | */
   RESERVED_7=128, /*  | */
   PAYLOAD_STATUS_FLAGS_ADVANCED_ENUM_END=129, /*  | */
} PAYLOAD_STATUS_FLAGS_ADVANCED;
#endif

/** @brief High and Low rate Payload IO messages. These messages contain control and status messages to anf from the payload. Messages may originate from an onboard system or OTA  */
#ifndef HAVE_ENUM_PAYLOAD_IO
#define HAVE_ENUM_PAYLOAD_IO
typedef enum PAYLOAD_IO
{
   EmptyEmpty=1, /* Dont forget this |Empty| Empty| Empty| Empty|  */
   PAYLOAD_IO_CONTROL_PAN_TILT_ROLL=2, /* Control message for directly controlling pan, tilt, and roll of a gimbaled payload payload |Relative frame 0: Earth 1: Airframe| Pan| Tilt| Roll|  */
   PAYLOAD_IO_STATUS_SRR2=3, /* Status message for the SRR block 2 payload |Bitfield for system health bitstatus| Bitfield for current active camera| Bitfield for tracking status| Empty|  */
   PAYLOAD_IO_STATUS_SRR3=4, /* Status message for the SRR block 3 payload |Bitfield for system health bitstatus| Bitfield for current active camera| Bitfield for tracking status| Empty|  */
   PAYLOAD_IO_STATUS_APM_PILOT_OVERRIDE=6, /* Indicates weather or not APM is currently executing manual control messages from pilot |Bitfield 0 = false, 8:APM executing THROTTLE overrides from pilot 4:APM executing ROLL overrides from pilot 2:APM executing PITCH overrides from pilot 1:APM executing YAW overrides from pilot| x| y| z|  */
   PAYLOAD_IO_CONTROL_TAMRON=7, /* Control message for Tamron camera,  |Empty| Zoom| Filter| Empty|  */
   PAYLOAD_IO_CONTROL_FLIR=8, /* Control message for directly controlling pan tilt of the payload |FLIR camera control and status| Zoom| Filter| Empty|  */
   PAYLOAD_IO_CONTROL_EO=9, /* Control message for directly controlling pan tilt of the payload |FLIR camera control and status| Zoom| Filter| Empty|  */
   PAYLOAD_IO_CONTROL_COFV=501, /* Command the payload to look at the given location |Empty| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
   PAYLOAD_IO_CONTROL_SECURITY_POINT=502, /* Command the payload to executa a defined behavior for security mode |Selected Camera| Selected Zoom| Empty| Empty| CFOV Latitude| CFOV Longitude| CFOV Altitude|  */
   PAYLOAD_IO_ENUM_END=503, /*  | */
} PAYLOAD_IO;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PAYLOAD_CUSTOM_MODE
#define HAVE_ENUM_PAYLOAD_CUSTOM_MODE
typedef enum PAYLOAD_CUSTOM_MODE
{
   PAYLOAD_CUSTOM_MODE_INITIALIZE=0, /*  | */
   PAYLOAD_CUSTOM_MODE_CALIBRATE=1, /*  | */
   PAYLOAD_CUSTOM_MODE_FIXED=2, /*  | */
   PAYLOAD_CUSTOM_MODE_SCENE_TRACK=3, /*  | */
   PAYLOAD_CUSTOM_MODE_TARGET_TRACK=4, /*  | */
   PAYLOAD_CUSTOM_MODE_USER_CONTROL=5, /*  | */
   PAYLOAD_CUSTOM_MODE_WAYPOINT_SLEW=6, /*  | */
   PAYLOAD_CUSTOM_MODE_ENUM_END=7, /*  | */
} PAYLOAD_CUSTOM_MODE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_target_waypoint.h"
#include "./mavlink_msg_mission_data_waypoint.h"
#include "./mavlink_msg_gps_key_state.h"
#include "./mavlink_msg_av_component_information.h"
#include "./mavlink_msg_av_component_version_information.h"
#include "./mavlink_msg_av_uplink_control.h"
#include "./mavlink_msg_beacon_status.h"
#include "./mavlink_msg_beacon_control.h"
#include "./mavlink_msg_motor_status.h"
#include "./mavlink_msg_av_battery_status.h"
#include "./mavlink_msg_gps_extended_info.h"
#include "./mavlink_msg_downlink_data_low_rate.h"
#include "./mavlink_msg_downlink_data_high_rate.h"
#include "./mavlink_msg_autopilot_time_sync_init.h"
#include "./mavlink_msg_autopilot_time_sync_set.h"
#include "./mavlink_msg_av_payload_status.h"
#include "./mavlink_msg_av_payload_pan_and_tilt.h"
#include "./mavlink_msg_av_payload_control.h"
#include "./mavlink_msg_av_payload_high_rate_control.h"
#include "./mavlink_msg_av_payload_klv_stream.h"
#include "./mavlink_msg_av_payload_video_compressor_bit_rate.h"
#include "./mavlink_msg_av_payload_interface_dumb.h"
#include "./mavlink_msg_gps_command.h"
#include "./mavlink_msg_av_payload_high_rate_av_commanded_data.h"
#include "./mavlink_msg_image_capture_command.h"
#include "./mavlink_msg_image_capture_information.h"
#include "./mavlink_msg_tracker_information.h"
#include "./mavlink_msg_payload_high.h"
#include "./mavlink_msg_payload_low.h"
#include "./mavlink_msg_payload_ack.h"
#include "./mavlink_msg_file_system_manager_node_status.h"
#include "./mavlink_msg_file_system_manager_node_status_request.h"
#include "./mavlink_msg_file_system_status.h"
#include "./mavlink_msg_set_file_system_bandwidth.h"
#include "./mavlink_msg_file_information.h"
#include "./mavlink_msg_file_information_request.h"
#include "./mavlink_msg_cancel_file_block_downlink.h"
#include "./mavlink_msg_downlink_file_blocks_command.h"
#include "./mavlink_msg_delete_file.h"
#include "./mavlink_msg_feed_forward_turn_rates.h"
#include "./mavlink_msg_feed_forward_joystick_positions.h"
#include "./mavlink_msg_set_bandwidth_limit.h"
#include "./mavlink_msg_set_bandwidth_limit_ack.h"
#include "./mavlink_msg_cfov.h"
#include "./mavlink_msg_cfov_waypoint.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {{"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_TARGET_WAYPOINT, MAVLINK_MESSAGE_INFO_MISSION_DATA_WAYPOINT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GPS_KEY_STATE, MAVLINK_MESSAGE_INFO_AV_COMPONENT_INFORMATION, MAVLINK_MESSAGE_INFO_AV_COMPONENT_VERSION_INFORMATION, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_AV_UPLINK_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_BEACON_STATUS, MAVLINK_MESSAGE_INFO_BEACON_CONTROL, MAVLINK_MESSAGE_INFO_MOTOR_STATUS, MAVLINK_MESSAGE_INFO_AV_BATTERY_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GPS_EXTENDED_INFO, MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_LOW_RATE, MAVLINK_MESSAGE_INFO_DOWNLINK_DATA_HIGH_RATE, MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_INIT, MAVLINK_MESSAGE_INFO_AUTOPILOT_TIME_SYNC_SET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_STATUS, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_PAN_AND_TILT, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_CONTROL, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_CONTROL, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_KLV_STREAM, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_VIDEO_COMPRESSOR_BIT_RATE, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_INTERFACE_DUMB, MAVLINK_MESSAGE_INFO_GPS_COMMAND, MAVLINK_MESSAGE_INFO_AV_PAYLOAD_HIGH_RATE_AV_COMMANDED_DATA, MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_COMMAND, MAVLINK_MESSAGE_INFO_IMAGE_CAPTURE_INFORMATION, MAVLINK_MESSAGE_INFO_TRACKER_INFORMATION, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PAYLOAD_HIGH, MAVLINK_MESSAGE_INFO_PAYLOAD_LOW, MAVLINK_MESSAGE_INFO_PAYLOAD_ACK, MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS, MAVLINK_MESSAGE_INFO_FILE_SYSTEM_MANAGER_NODE_STATUS_REQUEST, MAVLINK_MESSAGE_INFO_FILE_SYSTEM_STATUS, MAVLINK_MESSAGE_INFO_SET_FILE_SYSTEM_BANDWIDTH, MAVLINK_MESSAGE_INFO_FILE_INFORMATION, MAVLINK_MESSAGE_INFO_FILE_INFORMATION_REQUEST, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CANCEL_FILE_BLOCK_DOWNLINK, MAVLINK_MESSAGE_INFO_DOWNLINK_FILE_BLOCKS_COMMAND, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_DELETE_FILE, MAVLINK_MESSAGE_INFO_FEED_FORWARD_TURN_RATES, MAVLINK_MESSAGE_INFO_FEED_FORWARD_JOYSTICK_POSITIONS, MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT, MAVLINK_MESSAGE_INFO_SET_BANDWIDTH_LIMIT_ACK, MAVLINK_MESSAGE_INFO_CFOV, MAVLINK_MESSAGE_INFO_CFOV_WAYPOINT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ALTAVIAN_H
