/** @file
 *  @brief MAVLink comm protocol generated from development.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_DEVELOPMENT_H
#define MAVLINK_DEVELOPMENT_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_DEVELOPMENT.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_DEVELOPMENT_XML_HASH 310124332056523415

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {1, 124, 31, 43, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {4, 237, 14, 14, 3, 12, 13}, {5, 217, 28, 28, 1, 0, 0}, {6, 104, 3, 3, 0, 0, 0}, {7, 119, 32, 32, 0, 0, 0}, {8, 117, 36, 36, 0, 0, 0}, {11, 89, 6, 6, 1, 4, 0}, {19, 137, 24, 24, 3, 4, 5}, {20, 214, 20, 20, 3, 2, 3}, {21, 159, 2, 2, 3, 0, 1}, {22, 220, 25, 25, 0, 0, 0}, {23, 168, 23, 23, 3, 4, 5}, {24, 24, 30, 52, 0, 0, 0}, {25, 23, 101, 101, 0, 0, 0}, {26, 170, 22, 24, 0, 0, 0}, {27, 144, 26, 29, 0, 0, 0}, {28, 67, 16, 16, 0, 0, 0}, {29, 115, 14, 16, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {31, 246, 32, 48, 0, 0, 0}, {32, 185, 28, 28, 0, 0, 0}, {33, 104, 28, 28, 0, 0, 0}, {34, 237, 22, 22, 0, 0, 0}, {35, 244, 22, 22, 0, 0, 0}, {36, 222, 21, 37, 0, 0, 0}, {37, 212, 6, 7, 3, 4, 5}, {38, 9, 6, 7, 3, 4, 5}, {39, 254, 37, 38, 3, 32, 33}, {40, 230, 4, 5, 3, 2, 3}, {41, 28, 4, 4, 3, 2, 3}, {42, 28, 2, 6, 0, 0, 0}, {43, 132, 2, 3, 3, 0, 1}, {44, 221, 4, 5, 3, 2, 3}, {45, 232, 2, 3, 3, 0, 1}, {46, 11, 2, 2, 0, 0, 0}, {47, 153, 3, 4, 3, 0, 1}, {48, 41, 13, 21, 1, 12, 0}, {49, 39, 12, 20, 0, 0, 0}, {50, 78, 37, 37, 3, 18, 19}, {51, 196, 4, 5, 3, 2, 3}, {53, 3, 5, 5, 0, 0, 0}, {54, 15, 27, 27, 3, 24, 25}, {55, 3, 25, 25, 0, 0, 0}, {61, 167, 72, 72, 0, 0, 0}, {62, 183, 26, 26, 0, 0, 0}, {63, 119, 181, 181, 0, 0, 0}, {64, 191, 225, 225, 0, 0, 0}, {65, 118, 42, 42, 0, 0, 0}, {66, 148, 6, 6, 3, 2, 3}, {67, 21, 4, 4, 0, 0, 0}, {69, 243, 11, 18, 1, 10, 0}, {70, 124, 18, 38, 3, 16, 17}, {73, 38, 37, 38, 3, 32, 33}, {74, 20, 20, 20, 0, 0, 0}, {75, 158, 35, 35, 3, 30, 31}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {80, 14, 4, 4, 3, 2, 3}, {81, 106, 22, 22, 0, 0, 0}, {82, 49, 39, 51, 3, 36, 37}, {83, 22, 37, 37, 0, 0, 0}, {84, 143, 53, 53, 3, 50, 51}, {85, 140, 51, 51, 0, 0, 0}, {86, 5, 53, 53, 3, 50, 51}, {87, 150, 51, 51, 0, 0, 0}, {89, 231, 28, 28, 0, 0, 0}, {90, 183, 56, 56, 0, 0, 0}, {91, 63, 42, 42, 0, 0, 0}, {92, 54, 33, 33, 0, 0, 0}, {93, 47, 81, 81, 0, 0, 0}, {100, 175, 26, 34, 0, 0, 0}, {101, 102, 32, 117, 0, 0, 0}, {102, 158, 32, 117, 0, 0, 0}, {103, 208, 20, 57, 0, 0, 0}, {104, 56, 32, 116, 0, 0, 0}, {105, 93, 62, 63, 0, 0, 0}, {106, 138, 44, 44, 0, 0, 0}, {107, 108, 64, 65, 0, 0, 0}, {108, 32, 84, 92, 0, 0, 0}, {109, 185, 9, 9, 0, 0, 0}, {110, 84, 254, 254, 3, 1, 2}, {111, 34, 16, 18, 3, 16, 17}, {112, 174, 12, 12, 0, 0, 0}, {113, 124, 36, 39, 0, 0, 0}, {114, 237, 44, 44, 0, 0, 0}, {115, 4, 64, 64, 0, 0, 0}, {116, 76, 22, 24, 0, 0, 0}, {117, 128, 6, 6, 3, 4, 5}, {118, 56, 14, 14, 0, 0, 0}, {119, 116, 12, 12, 3, 10, 11}, {120, 134, 97, 97, 0, 0, 0}, {121, 237, 2, 2, 3, 0, 1}, {122, 203, 2, 2, 3, 0, 1}, {123, 250, 113, 113, 3, 0, 1}, {124, 87, 35, 57, 0, 0, 0}, {125, 203, 6, 6, 0, 0, 0}, {126, 220, 79, 81, 3, 79, 80}, {127, 25, 35, 35, 0, 0, 0}, {128, 226, 35, 35, 0, 0, 0}, {129, 46, 22, 24, 0, 0, 0}, {130, 29, 13, 13, 0, 0, 0}, {131, 223, 255, 255, 0, 0, 0}, {132, 85, 14, 39, 0, 0, 0}, {133, 6, 18, 18, 0, 0, 0}, {134, 229, 43, 43, 0, 0, 0}, {135, 203, 8, 8, 0, 0, 0}, {136, 1, 22, 22, 0, 0, 0}, {137, 195, 14, 16, 0, 0, 0}, {138, 109, 36, 120, 0, 0, 0}, {139, 168, 43, 43, 3, 41, 42}, {140, 181, 41, 41, 0, 0, 0}, {141, 47, 32, 32, 0, 0, 0}, {142, 72, 243, 243, 0, 0, 0}, {143, 131, 14, 16, 0, 0, 0}, {144, 127, 93, 93, 0, 0, 0}, {146, 103, 100, 100, 0, 0, 0}, {147, 154, 36, 54, 0, 0, 0}, {148, 178, 60, 78, 0, 0, 0}, {149, 200, 30, 60, 0, 0, 0}, {162, 189, 8, 9, 0, 0, 0}, {192, 36, 44, 54, 0, 0, 0}, {225, 208, 65, 73, 0, 0, 0}, {230, 163, 42, 42, 0, 0, 0}, {231, 105, 40, 40, 0, 0, 0}, {232, 151, 63, 65, 0, 0, 0}, {233, 35, 182, 182, 0, 0, 0}, {234, 150, 40, 40, 0, 0, 0}, {235, 179, 42, 42, 0, 0, 0}, {241, 90, 32, 32, 0, 0, 0}, {242, 104, 52, 60, 0, 0, 0}, {243, 85, 53, 61, 1, 52, 0}, {244, 95, 6, 6, 0, 0, 0}, {245, 130, 2, 2, 0, 0, 0}, {246, 184, 38, 38, 0, 0, 0}, {247, 81, 19, 19, 0, 0, 0}, {248, 8, 254, 254, 3, 3, 4}, {249, 204, 36, 36, 0, 0, 0}, {250, 49, 30, 30, 0, 0, 0}, {251, 170, 18, 18, 0, 0, 0}, {252, 44, 18, 18, 0, 0, 0}, {253, 83, 51, 54, 0, 0, 0}, {254, 46, 9, 9, 0, 0, 0}, {256, 71, 42, 42, 3, 8, 9}, {257, 131, 9, 9, 0, 0, 0}, {258, 187, 32, 232, 3, 0, 1}, {259, 92, 235, 235, 0, 0, 0}, {260, 146, 5, 13, 0, 0, 0}, {261, 179, 27, 61, 0, 0, 0}, {262, 12, 18, 22, 0, 0, 0}, {263, 133, 255, 255, 0, 0, 0}, {264, 49, 28, 28, 0, 0, 0}, {265, 26, 16, 20, 0, 0, 0}, {266, 193, 255, 255, 3, 2, 3}, {267, 35, 255, 255, 3, 2, 3}, {268, 14, 4, 4, 3, 2, 3}, {269, 109, 213, 213, 0, 0, 0}, {270, 59, 19, 19, 0, 0, 0}, {271, 22, 52, 52, 0, 0, 0}, {275, 126, 31, 31, 0, 0, 0}, {276, 18, 49, 49, 0, 0, 0}, {280, 70, 33, 33, 0, 0, 0}, {281, 48, 13, 13, 0, 0, 0}, {282, 123, 35, 35, 3, 32, 33}, {283, 74, 144, 144, 0, 0, 0}, {284, 99, 32, 32, 3, 30, 31}, {285, 137, 40, 48, 3, 38, 39}, {286, 210, 53, 57, 3, 50, 51}, {287, 1, 23, 23, 3, 20, 21}, {288, 20, 23, 23, 3, 20, 21}, {290, 251, 46, 46, 0, 0, 0}, {291, 10, 57, 57, 0, 0, 0}, {295, 234, 12, 12, 0, 0, 0}, {298, 237, 37, 37, 0, 0, 0}, {299, 19, 96, 98, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {301, 243, 58, 58, 0, 0, 0}, {310, 28, 17, 17, 0, 0, 0}, {311, 95, 116, 116, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {330, 23, 158, 167, 0, 0, 0}, {331, 91, 230, 233, 0, 0, 0}, {332, 236, 239, 239, 0, 0, 0}, {333, 231, 109, 109, 0, 0, 0}, {334, 72, 10, 10, 0, 0, 0}, {335, 225, 24, 24, 0, 0, 0}, {336, 245, 84, 84, 0, 0, 0}, {339, 199, 5, 5, 0, 0, 0}, {340, 99, 70, 70, 0, 0, 0}, {350, 232, 20, 252, 0, 0, 0}, {360, 11, 25, 25, 0, 0, 0}, {361, 93, 33, 33, 0, 0, 0}, {369, 151, 24, 24, 0, 0, 0}, {370, 75, 87, 109, 0, 0, 0}, {373, 117, 42, 42, 0, 0, 0}, {375, 251, 140, 140, 0, 0, 0}, {380, 232, 20, 20, 0, 0, 0}, {385, 147, 133, 133, 3, 2, 3}, {386, 132, 16, 16, 3, 4, 5}, {387, 4, 72, 72, 3, 4, 5}, {388, 8, 37, 37, 3, 32, 33}, {390, 156, 238, 238, 0, 0, 0}, {395, 0, 212, 212, 0, 0, 0}, {396, 129, 156, 156, 0, 0, 0}, {397, 182, 108, 108, 0, 0, 0}, {400, 110, 254, 254, 3, 4, 5}, {401, 183, 6, 6, 3, 4, 5}, {410, 160, 53, 53, 0, 0, 0}, {411, 106, 3, 3, 0, 0, 0}, {412, 33, 6, 6, 3, 4, 5}, {413, 77, 7, 7, 3, 4, 5}, {414, 109, 16, 16, 0, 0, 0}, {415, 161, 16, 16, 0, 0, 0}, {435, 134, 46, 46, 0, 0, 0}, {436, 193, 9, 9, 0, 0, 0}, {437, 30, 1, 1, 0, 0, 0}, {510, 245, 106, 106, 0, 0, 0}, {511, 28, 71, 71, 0, 0, 0}, {9000, 113, 137, 137, 0, 0, 0}, {9005, 117, 34, 34, 0, 0, 0}, {12900, 114, 44, 44, 3, 0, 1}, {12901, 254, 59, 59, 3, 30, 31}, {12902, 140, 53, 53, 3, 4, 5}, {12903, 249, 46, 46, 3, 0, 1}, {12904, 77, 54, 54, 3, 28, 29}, {12905, 49, 43, 43, 3, 0, 1}, {12915, 94, 249, 249, 3, 0, 1}, {12918, 139, 51, 51, 0, 0, 0}, {12919, 7, 18, 18, 3, 16, 17}, {12920, 20, 5, 5, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_DEVELOPMENT

// ENUM DEFINITIONS


/** @brief WiFi wireless security protocols. */
#ifndef HAVE_ENUM_WIFI_NETWORK_SECURITY
#define HAVE_ENUM_WIFI_NETWORK_SECURITY
typedef enum WIFI_NETWORK_SECURITY
{
   WIFI_NETWORK_SECURITY_UNDEFINED=0, /* Undefined or unknown security protocol. | */
   WIFI_NETWORK_SECURITY_OPEN=1, /* Open network, no security. | */
   WIFI_NETWORK_SECURITY_WEP=2, /* WEP. | */
   WIFI_NETWORK_SECURITY_WPA1=3, /* WPA1. | */
   WIFI_NETWORK_SECURITY_WPA2=4, /* WPA2. | */
   WIFI_NETWORK_SECURITY_WPA3=5, /* WPA3. | */
   WIFI_NETWORK_SECURITY_ENUM_END=6, /*  | */
} WIFI_NETWORK_SECURITY;
#endif

/** @brief Airspeed sensor flags */
#ifndef HAVE_ENUM_AIRSPEED_SENSOR_FLAGS
#define HAVE_ENUM_AIRSPEED_SENSOR_FLAGS
typedef enum AIRSPEED_SENSOR_FLAGS
{
   AIRSPEED_SENSOR_UNHEALTHY=0, /* Airspeed sensor is unhealthy | */
   AIRSPEED_SENSOR_USING=1, /* True if the data from this sensor is being actively used by the flight controller for guidance, navigation or control. | */
   AIRSPEED_SENSOR_FLAGS_ENUM_END=2, /*  | */
} AIRSPEED_SENSOR_FLAGS;
#endif

/** @brief Possible transport layers to set and get parameters via mavlink during a parameter transaction. */
#ifndef HAVE_ENUM_PARAM_TRANSACTION_TRANSPORT
#define HAVE_ENUM_PARAM_TRANSACTION_TRANSPORT
typedef enum PARAM_TRANSACTION_TRANSPORT
{
   PARAM_TRANSACTION_TRANSPORT_PARAM=0, /* Transaction over param transport. | */
   PARAM_TRANSACTION_TRANSPORT_PARAM_EXT=1, /* Transaction over param_ext transport. | */
   PARAM_TRANSACTION_TRANSPORT_ENUM_END=2, /*  | */
} PARAM_TRANSACTION_TRANSPORT;
#endif

/** @brief Possible parameter transaction actions. */
#ifndef HAVE_ENUM_PARAM_TRANSACTION_ACTION
#define HAVE_ENUM_PARAM_TRANSACTION_ACTION
typedef enum PARAM_TRANSACTION_ACTION
{
   PARAM_TRANSACTION_ACTION_START=0, /* Commit the current parameter transaction. | */
   PARAM_TRANSACTION_ACTION_COMMIT=1, /* Commit the current parameter transaction. | */
   PARAM_TRANSACTION_ACTION_CANCEL=2, /* Cancel the current parameter transaction. | */
   PARAM_TRANSACTION_ACTION_ENUM_END=3, /*  | */
} PARAM_TRANSACTION_ACTION;
#endif

/** @brief Standard modes with a well understood meaning across flight stacks and vehicle types.
        For example, most flight stack have the concept of a "return" or "RTL" mode that takes a vehicle to safety, even though the precise mechanics of this mode may differ.
        Modes may be set using MAV_CMD_DO_SET_STANDARD_MODE.
       */
#ifndef HAVE_ENUM_MAV_STANDARD_MODE
#define HAVE_ENUM_MAV_STANDARD_MODE
typedef enum MAV_STANDARD_MODE
{
   MAV_STANDARD_MODE_NON_STANDARD=0, /* Non standard mode.
          This may be used when reporting the mode if the current flight mode is not a standard mode.
         | */
   MAV_STANDARD_MODE_POSITION_HOLD=1, /* Position mode (manual).
          Position-controlled and stabilized manual mode.
          When sticks are released vehicles return to their level-flight orientation and hold both position and altitude against wind and external forces.
          This mode can only be set by vehicles that can hold a fixed position.
          Multicopter (MC) vehicles actively brake and hold both position and altitude against wind and external forces.
          Hybrid MC/FW ("VTOL") vehicles first transition to multicopter mode (if needed) but otherwise behave in the same way as MC vehicles.
          Fixed-wing (FW) vehicles must not support this mode.
          Other vehicle types must not support this mode (this may be revisited through the PR process).
         | */
   MAV_STANDARD_MODE_ORBIT=2, /* Orbit (manual).
          Position-controlled and stabilized manual mode.
          The vehicle circles around a fixed setpoint in the horizontal plane at a particular radius, altitude, and direction.
          Flight stacks may further allow manual control over the setpoint position, radius, direction, speed, and/or altitude of the circle, but this is not mandated.
          Flight stacks may support the [MAV_CMD_DO_ORBIT](https://mavlink.io/en/messages/common.html#MAV_CMD_DO_ORBIT) for changing the orbit parameters.
          MC and FW vehicles may support this mode.
          Hybrid MC/FW ("VTOL") vehicles may support this mode in MC/FW or both modes; if the mode is not supported by the current configuration the vehicle should transition to the supported configuration.
          Other vehicle types must not support this mode (this may be revisited through the PR process).
         | */
   MAV_STANDARD_MODE_CRUISE=3, /* Cruise mode (manual).
          Position-controlled and stabilized manual mode.
          When sticks are released vehicles return to their level-flight orientation and hold their original track against wind and external forces.
          Fixed-wing (FW) vehicles level orientation and maintain current track and altitude against wind and external forces.
          Hybrid MC/FW ("VTOL") vehicles first transition to FW mode (if needed) but otherwise behave in the same way as MC vehicles.
          Multicopter (MC) vehicles must not support this mode.
          Other vehicle types must not support this mode (this may be revisited through the PR process).
         | */
   MAV_STANDARD_MODE_ALTITUDE_HOLD=4, /* Altitude hold (manual).
          Altitude-controlled and stabilized manual mode.
          When sticks are released vehicles return to their level-flight orientation and hold their altitude.
          MC vehicles continue with existing momentum and may move with wind (or other external forces).
          FW vehicles continue with current heading, but may be moved off-track by wind.
          Hybrid MC/FW ("VTOL") vehicles behave according to their current configuration/mode (FW or MC).
          Other vehicle types must not support this mode (this may be revisited through the PR process).
         | */
   MAV_STANDARD_MODE_RETURN_HOME=5, /* Return home mode (auto).
          Automatic mode that returns vehicle to home via a safe flight path.
          It may also automatically land the vehicle (i.e. RTL).
          The precise flight path and landing behaviour depend on vehicle configuration and type.
         | */
   MAV_STANDARD_MODE_SAFE_RECOVERY=6, /* Safe recovery mode (auto).
          Automatic mode that takes vehicle to a predefined safe location via a safe flight path (rally point or mission defined landing) .
          It may also automatically land the vehicle.
          The precise return location, flight path, and landing behaviour depend on vehicle configuration and type.
         | */
   MAV_STANDARD_MODE_MISSION=7, /* Mission mode (automatic).
          Automatic mode that executes MAVLink missions.
          Missions are executed from the current waypoint as soon as the mode is enabled.
         | */
   MAV_STANDARD_MODE_LAND=8, /* Land mode (auto).
          Automatic mode that lands the vehicle at the current location.
          The precise landing behaviour depends on vehicle configuration and type.
         | */
   MAV_STANDARD_MODE_TAKEOFF=9, /* Takeoff mode (auto).
          Automatic takeoff mode.
          The precise takeoff behaviour depends on vehicle configuration and type.
         | */
   MAV_STANDARD_MODE_ENUM_END=10, /*  | */
} MAV_STANDARD_MODE;
#endif

/** @brief Mode properties.
       */
#ifndef HAVE_ENUM_MAV_MODE_PROPERTY
#define HAVE_ENUM_MAV_MODE_PROPERTY
typedef enum MAV_MODE_PROPERTY
{
   MAV_MODE_PROPERTY_ADVANCED=1, /* If set, this mode is an advanced mode.
          For example a rate-controlled manual mode might be advanced, whereas a position-controlled manual mode is not.
          A GCS can optionally use this flag to configure the UI for its intended users.
         | */
   MAV_MODE_PROPERTY_NOT_USER_SELECTABLE=2, /* If set, this mode should not be added to the list of selectable modes.
          The mode might still be selected by the FC directly (for example as part of a failsafe).
         | */
   MAV_MODE_PROPERTY_ENUM_END=3, /*  | */
} MAV_MODE_PROPERTY;
#endif

/** @brief Commands to be executed by the MAV. They can be executed on user request, or as part of a mission script. If the action is used in a mission, the parameter mapping to the waypoint/mission message is as follows: Param 1, Param 2, Param 3, Param 4, X: Param 5, Y:Param 6, Z:Param 7. This command list is similar what ARINC 424 is for commercial aircraft: A data format how to interpret waypoint/mission data. NaN and INT32_MAX may be used in float/integer params (respectively) to indicate optional/default values (e.g. to use the component's current yaw or latitude rather than a specific value). See https://mavlink.io/en/guide/xml_schema.html#MAV_CMD for information about the structure of the MAV_CMD entries */
#ifndef HAVE_ENUM_MAV_CMD
#define HAVE_ENUM_MAV_CMD
typedef enum MAV_CMD
{
   MAV_CMD_NAV_WAYPOINT=16, /* Navigate to waypoint. This is intended for use in missions (for guided commands outside of missions use MAV_CMD_DO_REPOSITION). |Hold time. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Acceptance radius (if the sphere with this radius is hit, the waypoint counts as reached)| 0 to pass through the WP, if > 0 radius to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit. Allows trajectory control.| Desired yaw angle at waypoint (rotary wing). NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_UNLIM=17, /* Loiter around this waypoint an unlimited amount of time |Empty| Empty| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise| Desired yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_TURNS=18, /* Loiter around this waypoint for X turns |Number of turns.| Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_TIME=19, /* Loiter at the specified latitude, longitude and altitude for a certain amount of time. Multicopter vehicles stop at the point (within a vehicle-specific acceptance radius). Forward-only moving vehicles (e.g. fixed-wing) circle the point with the specified radius/direction. If the Heading Required parameter (2) is non-zero forward moving aircraft will only leave the loiter circle once heading towards the next waypoint. |Loiter time (only starts once Lat, Lon and Alt is reached).| Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, else counter-clockwise.| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_RETURN_TO_LAUNCH=20, /* Return to launch location |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_NAV_LAND=21, /* Land at location. |Minimum target altitude if landing is aborted (0 = undefined/use system default).| Precision land mode.| Empty.| Desired yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude.| Longitude.| Landing altitude (ground level in current frame).|  */
   MAV_CMD_NAV_TAKEOFF=22, /* Takeoff from ground / hand. Vehicles that support multiple takeoff modes (e.g. VTOL quadplane) should take off using the currently configured mode. |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Empty| Yaw angle (if magnetometer present), ignored without magnetometer. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LAND_LOCAL=23, /* Land at local position (local frame only) |Landing target number (if available)| Maximum accepted offset from desired landing position - computed magnitude from spherical coordinates: d = sqrt(x^2 + y^2 + z^2), which gives the maximum accepted distance between the desired landing position and the position where the vehicle is about to land| Landing descend rate| Desired yaw angle| Y-axis position| X-axis position| Z-axis / ground level position|  */
   MAV_CMD_NAV_TAKEOFF_LOCAL=24, /* Takeoff from local position (local frame only) |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Takeoff ascend rate| Yaw angle (if magnetometer or another yaw estimation source present), ignored without one of these| Y-axis position| X-axis position| Z-axis position|  */
   MAV_CMD_NAV_FOLLOW=25, /* Vehicle following, i.e. this waypoint represents the position of a moving vehicle |Following logic to use (e.g. loitering or sinusoidal following) - depends on specific autopilot implementation| Ground speed of vehicle to be followed| Radius around waypoint. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_CONTINUE_AND_CHANGE_ALT=30, /* Continue on the current course and climb/descend to specified altitude.  When the altitude is reached continue to the next command (i.e., don't proceed to the next command until the desired altitude is reached. |Climb or Descend (0 = Neutral, command completes when within 5m of this command's altitude, 1 = Climbing, command completes when at or above this command's altitude, 2 = Descending, command completes when at or below this command's altitude.| Empty| Empty| Empty| Empty| Empty| Desired altitude|  */
   MAV_CMD_NAV_LOITER_TO_ALT=31, /* Begin loiter at the specified Latitude and Longitude.  If Lat=Lon=0, then loiter at the current position.  Don't consider the navigation command complete (don't leave loiter) until the altitude has been reached. Additionally, if the Heading Required parameter is non-zero the aircraft will not leave the loiter until heading toward the next waypoint. |Leave loiter circle only once heading towards the next waypoint (0 = False)| Loiter radius around waypoint for forward-only moving vehicles (not multicopters). If positive loiter clockwise, negative counter-clockwise, 0 means no change to standard loiter.| Empty| Loiter circle exit location and/or path to next waypoint ("xtrack") for forward-only moving vehicles (not multicopters). 0 for the vehicle to converge towards the center xtrack when it leaves the loiter (the line between the centers of the current and next waypoint), 1 to converge to the direct line between the location that the vehicle exits the loiter radius and the next waypoint. Otherwise the angle (in degrees) between the tangent of the loiter circle and the center xtrack at which the vehicle must leave the loiter (and converge to the center xtrack). NaN to use the current system default xtrack behaviour.| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_FOLLOW=32, /* Begin following a target |System ID (of the FOLLOW_TARGET beacon). Send 0 to disable follow-me and return to the default position hold mode.| Reserved| Reserved| Altitude mode: 0: Keep current altitude, 1: keep altitude difference to target, 2: go to a fixed altitude above home.| Altitude above home. (used if mode=2)| Reserved| Time to land in which the MAV should go to the default position hold mode after a message RX timeout.|  */
   MAV_CMD_DO_FOLLOW_REPOSITION=33, /* Reposition the MAV after a follow target command has been sent |Camera q1 (where 0 is on the ray from the camera to the tracking device)| Camera q2| Camera q3| Camera q4| altitude offset from target| X offset from target| Y offset from target|  */
   MAV_CMD_DO_ORBIT=34, /* Start orbiting on the circumference of a circle defined by the parameters. Setting values to NaN/INT32_MAX (as appropriate) results in using defaults. |Radius of the circle. Positive: orbit clockwise. Negative: orbit counter-clockwise. NaN: Use vehicle default radius, or current radius if already orbiting.| Tangential Velocity. NaN: Use vehicle default velocity, or current velocity if already orbiting.| Yaw behavior of the vehicle.| Orbit around the centre point for this many radians (i.e. for a three-quarter orbit set 270*Pi/180). 0: Orbit forever. NaN: Use vehicle default, or current value if already orbiting.| Center point latitude (if no MAV_FRAME specified) / X coordinate according to MAV_FRAME. INT32_MAX (or NaN if sent in COMMAND_LONG): Use current vehicle position, or current center if already orbiting.| Center point longitude (if no MAV_FRAME specified) / Y coordinate according to MAV_FRAME. INT32_MAX (or NaN if sent in COMMAND_LONG): Use current vehicle position, or current center if already orbiting.| Center point altitude (MSL) (if no MAV_FRAME specified) / Z coordinate according to MAV_FRAME. NaN: Use current vehicle altitude.|  */
   MAV_CMD_DO_FIGURE_EIGHT=35, /* Fly a figure eight path as defined by the parameters.
          Set parameters to NaN/INT32_MAX (as appropriate) to use system-default values.
          The command is intended for fixed wing vehicles (and VTOL hybrids flying in fixed-wing mode), allowing POI tracking for gimbals that don't support infinite rotation.
          This command only defines the flight path. Speed should be set independently (use e.g. MAV_CMD_DO_CHANGE_SPEED).
          Yaw and other degrees of freedom are not specified, and will be flight-stack specific (on vehicles where they can be controlled independent of the heading).
         |Major axis radius of the figure eight. Positive: orbit the north circle clockwise. Negative: orbit the north circle counter-clockwise.
        NaN: The radius will be set to 2.5 times the minor radius and direction is clockwise.
        Must be greater or equal to two times the minor radius for feasible values.| Minor axis radius of the figure eight. Defines the radius of the two circles that make up the figure. Negative value has no effect.
        NaN: The radius will be set to the default loiter radius.| Reserved (default:NaN)| Orientation of the figure eight major axis with respect to true north (range: [-pi,pi]). NaN: use default orientation aligned to true north.| Center point latitude/X coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle position, or current center if already loitering.| Center point longitude/Y coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle position, or current center if already loitering.| Center point altitude MSL/Z coordinate according to MAV_FRAME. If no MAV_FRAME specified, MAV_FRAME_GLOBAL is assumed.
        INT32_MAX or NaN: Use current vehicle altitude.|  */
   MAV_CMD_NAV_ROI=80, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode.| Waypoint index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| x the location of the fixed ROI (see MAV_FRAME)| y| z|  */
   MAV_CMD_NAV_PATHPLANNING=81, /* Control autonomous path planning on the MAV. |0: Disable local obstacle avoidance / local path planning (without resetting map), 1: Enable local path planning, 2: Enable and reset local path planning| 0: Disable full path planning (without resetting map), 1: Enable, 2: Enable and reset map/occupancy grid, 3: Enable and reset planned route, but not occupancy grid| Empty| Yaw angle at goal| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
   MAV_CMD_NAV_SPLINE_WAYPOINT=82, /* Navigate to waypoint using a spline path. |Hold time. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Empty| Empty| Empty| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
   MAV_CMD_NAV_VTOL_TAKEOFF=84, /* Takeoff from ground using VTOL mode, and transition to forward flight with specified heading. The command should be ignored by vehicles that dont support both VTOL and fixed-wing flight (multicopters, boats,etc.). |Empty| Front transition heading.| Empty| Yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_VTOL_LAND=85, /* Land using VTOL mode |Landing behaviour.| Empty| Approach altitude (with the same reference as the Altitude field). NaN if unspecified.| Yaw angle. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.).| Latitude| Longitude| Altitude (ground level) relative to the current coordinate frame. NaN to use system default landing altitude (ignore value).|  */
   MAV_CMD_NAV_GUIDED_ENABLE=92, /* hand control over to an external controller |On / Off (> 0.5f on)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_NAV_DELAY=93, /* Delay the next navigation command a number of seconds or until a specified time |Delay (-1 to enable time-of-day fields)| hour (24h format, UTC, -1 to ignore)| minute (24h format, UTC, -1 to ignore)| second (24h format, UTC, -1 to ignore)| Empty| Empty| Empty|  */
   MAV_CMD_NAV_PAYLOAD_PLACE=94, /* Descend and place payload. Vehicle moves to specified location, descends until it detects a hanging payload has reached the ground, and then releases the payload. If ground is not detected before the reaching the maximum descent value (param1), the command will complete without releasing the payload. |Maximum distance to descend.| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LAST=95, /* NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_DELAY=112, /* Delay mission state machine. |Delay| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_CHANGE_ALT=113, /* Ascend/descend to target altitude at specified rate. Delay mission state machine until desired altitude reached. |Descent / Ascend rate.| Empty| Empty| Empty| Empty| Empty| Target Altitude|  */
   MAV_CMD_CONDITION_DISTANCE=114, /* Delay mission state machine until within desired distance of next NAV point. |Distance.| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_YAW=115, /* Reach a certain target angle. |target angle, 0 is north| angular speed| direction: -1: counter clockwise, 1: clockwise| 0: absolute angle, 1: relative offset| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_LAST=159, /* NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_MODE=176, /* Set system mode. |Mode| Custom mode - this is system specific, please refer to the individual autopilot specifications for details.| Custom sub mode - this is system specific, please refer to the individual autopilot specifications for details.| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_JUMP=177, /* Jump to the desired command in the mission list.  Repeat this action only the specified number of times |Sequence number| Repeat count| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_CHANGE_SPEED=178, /* Change speed and/or throttle set points. The value persists until it is overridden or there is a mode change. |Speed type (0=Airspeed, 1=Ground Speed, 2=Climb Speed, 3=Descent Speed)| Speed (-1 indicates no change, -2 indicates return to default vehicle speed)| Throttle (-1 indicates no change, -2 indicates return to default vehicle throttle value)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_SET_HOME=179, /* 
          Sets the home position to either to the current position or a specified position.
          The home position is the default position that the system will return to and land on.
          The position is set automatically by the system during the takeoff (and may also be set using this command).
          Note: the current home position may be emitted in a HOME_POSITION message on request (using MAV_CMD_REQUEST_MESSAGE with param1=242).
         |Use current (1=use current location, 0=use specified location)| Empty| Empty| Yaw angle. NaN to use default heading| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_SET_PARAMETER=180, /* Set a system parameter.  Caution!  Use of this command requires knowledge of the numeric enumeration value of the parameter. |Parameter number| Parameter value| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_RELAY=181, /* Set a relay to a condition. |Relay instance number.| Setting. (1=on, 0=off, others possible depending on system hardware)| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPEAT_RELAY=182, /* Cycle a relay on and off for a desired number of cycles with a desired period. |Relay instance number.| Cycle count.| Cycle time.| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_SERVO=183, /* Set a servo to a desired PWM value. |Servo instance number.| Pulse Width Modulation.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPEAT_SERVO=184, /* Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period. |Servo instance number.| Pulse Width Modulation.| Cycle count.| Cycle time.| Empty| Empty| Empty|  */
   MAV_CMD_DO_FLIGHTTERMINATION=185, /* Terminate flight immediately.
          Flight termination immediately and irreversably terminates the current flight, returning the vehicle to ground.
          The vehicle will ignore RC or other input until it has been power-cycled.
          Termination may trigger safety measures, including: disabling motors and deployment of parachute on multicopters, and setting flight surfaces to initiate a landing pattern on fixed-wing).
          On multicopters without a parachute it may trigger a crash landing.
          Support for this command can be tested using the protocol bit: MAV_PROTOCOL_CAPABILITY_FLIGHT_TERMINATION.
          Support for this command can also be tested by sending the command with param1=0 (< 0.5); the ACK should be either MAV_RESULT_FAILED or MAV_RESULT_UNSUPPORTED.
         |Flight termination activated if > 0.5. Otherwise not activated and ACK with MAV_RESULT_FAILED.| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_CHANGE_ALTITUDE=186, /* Change altitude set point. |Altitude.| Frame of new altitude.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ACTUATOR=187, /* Sets actuators (e.g. servos) to a desired value. The actuator numbers are mapped to specific outputs (e.g. on any MAIN or AUX PWM or UAVCAN) using a flight-stack specific mechanism (i.e. a parameter). |Actuator 1 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 2 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 3 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 4 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 5 value, scaled from [-1 to 1]. NaN to ignore.| Actuator 6 value, scaled from [-1 to 1]. NaN to ignore.| Index of actuator set (i.e if set to 1, Actuator 1 becomes Actuator 7)|  */
   MAV_CMD_DO_LAND_START=189, /* Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts.
	  It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used.
	  The Latitude/Longitude/Altitude is optional, and may be set to 0 if not needed. If specified then it will be used to help find the closest landing sequence.
	 |Empty| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_RALLY_LAND=190, /* Mission command to perform a landing from a rally point. |Break altitude| Landing speed| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_GO_AROUND=191, /* Mission command to safely abort an autonomous landing. |Altitude| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPOSITION=192, /* Reposition the vehicle to a specific WGS84 global position. This command is intended for guided commands (for missions use MAV_CMD_NAV_WAYPOINT instead). |Ground speed, less than 0 (-1) for default| Bitmask of option flags.| Loiter radius for planes. Positive values only, direction is controlled by Yaw value. A value of zero or NaN is ignored. | Yaw heading. NaN to use the current system yaw heading mode (e.g. yaw towards next waypoint, yaw to home, etc.). For planes indicates loiter direction (0: clockwise, 1: counter clockwise)| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_PAUSE_CONTINUE=193, /* If in a GPS controlled position mode, hold the current position or continue. |0: Pause current mission or reposition command, hold current position. 1: Continue mission. A VTOL capable vehicle should enter hover mode (multicopter and VTOL planes). A plane should loiter with the default loiter radius.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_DO_SET_REVERSE=194, /* Set moving direction to forward or reverse. |Direction (0=Forward, 1=Reverse)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ROI_LOCATION=195, /* Sets the region of interest (ROI) to a location. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal is not to react to this message. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Latitude of ROI location| Longitude of ROI location| Altitude of ROI location|  */
   MAV_CMD_DO_SET_ROI_WPNEXT_OFFSET=196, /* Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Pitch offset from next waypoint, positive pitching up| Roll offset from next waypoint, positive rolling to the right| Yaw offset from next waypoint, positive yawing to the right|  */
   MAV_CMD_DO_SET_ROI_NONE=197, /* Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. After this command the gimbal manager should go back to manual input if available, and otherwise assume a neutral position. |Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ROI_SYSID=198, /* Mount tracks system with specified system ID. Determination of target vehicle position may be done with GLOBAL_POSITION_INT or any other means. This command can be sent to a gimbal manager but not to a gimbal device. A gimbal device is not to react to this message. |System ID| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_CONTROL_VIDEO=200, /* Control onboard camera system. |Camera ID (-1 for all)| Transmission: 0: disabled, 1: enabled compressed, 2: enabled raw| Transmission mode: 0: video stream, >0: single images every n seconds| Recording: 0: disabled, 1: enabled compressed, 2: enabled raw| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ROI=201, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicle's control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode.| Waypoint index/ target ID (depends on param 1).| Region of interest index. (allows a vehicle to manage multiple ROI's)| Empty| MAV_ROI_WPNEXT: pitch offset from next waypoint, MAV_ROI_LOCATION: latitude| MAV_ROI_WPNEXT: roll offset from next waypoint, MAV_ROI_LOCATION: longitude| MAV_ROI_WPNEXT: yaw offset from next waypoint, MAV_ROI_LOCATION: altitude|  */
   MAV_CMD_DO_DIGICAM_CONFIGURE=202, /* Configure digital camera. This is a fallback message for systems that have not yet implemented PARAM_EXT_XXX messages and camera definition files (see https://mavlink.io/en/services/camera_def.html ). |Modes: P, TV, AV, M, Etc.| Shutter speed: Divisor number for one second.| Aperture: F stop number.| ISO number e.g. 80, 100, 200, Etc.| Exposure type enumerator.| Command Identity.| Main engine cut-off time before camera trigger. (0 means no cut-off)|  */
   MAV_CMD_DO_DIGICAM_CONTROL=203, /* Control digital camera. This is a fallback message for systems that have not yet implemented PARAM_EXT_XXX messages and camera definition files (see https://mavlink.io/en/services/camera_def.html ). |Session control e.g. show/hide lens| Zoom's absolute position| Zooming step value to offset zoom from the current position| Focus Locking, Unlocking or Re-locking| Shooting Command| Command Identity| Test shot identifier. If set to 1, image will only be captured, but not counted towards internal frame count.|  */
   MAV_CMD_DO_MOUNT_CONFIGURE=204, /* Mission command to configure a camera or antenna mount |Mount operation mode| stabilize roll? (1 = yes, 0 = no)| stabilize pitch? (1 = yes, 0 = no)| stabilize yaw? (1 = yes, 0 = no)| roll input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| pitch input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| yaw input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)|  */
   MAV_CMD_DO_MOUNT_CONTROL=205, /* Mission command to control a camera or antenna mount |pitch depending on mount mode (degrees or degrees/second depending on pitch input).| roll depending on mount mode (degrees or degrees/second depending on roll input).| yaw depending on mount mode (degrees or degrees/second depending on yaw input).| altitude depending on mount mode.| latitude, set if appropriate mount mode.| longitude, set if appropriate mount mode.| Mount mode.|  */
   MAV_CMD_DO_SET_CAM_TRIGG_DIST=206, /* Mission command to set camera trigger distance for this flight. The camera is triggered each time this distance is exceeded. This command can also be used to set the shutter integration time for the camera. |Camera trigger distance. 0 to stop triggering.| Camera shutter integration time. -1 or 0 to ignore| Trigger camera once immediately. (0 = no trigger, 1 = trigger)| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_FENCE_ENABLE=207, /* Mission command to enable the geofence |enable? (0=disable, 1=enable, 2=disable_floor_only)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_PARACHUTE=208, /* Mission item/command to release a parachute or enable/disable auto release. |Action| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_MOTOR_TEST=209, /* Command to perform motor test. |Motor instance number (from 1 to max number of motors on the vehicle).| Throttle type (whether the Throttle Value in param3 is a percentage, PWM value, etc.)| Throttle value.| Timeout between tests that are run in sequence.| Motor count. Number of motors to test in sequence: 0/1=one motor, 2= two motors, etc. The Timeout (param4) is used between tests.| Motor test order.| Empty|  */
   MAV_CMD_DO_INVERTED_FLIGHT=210, /* Change to/from inverted flight. |Inverted flight. (0=normal, 1=inverted)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_GRIPPER=211, /* Mission command to operate a gripper. |Gripper instance number.| Gripper action to perform.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_AUTOTUNE_ENABLE=212, /* Enable/disable autotune. |Enable (1: enable, 0:disable).| Specify which axis are autotuned. 0 indicates autopilot default settings.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_NAV_SET_YAW_SPEED=213, /* Sets a desired vehicle turn angle and speed change. |Yaw angle to adjust steering by.| Speed.| Final angle. (0=absolute, 1=relative)| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_CAM_TRIGG_INTERVAL=214, /* Mission command to set camera trigger interval for this flight. If triggering is enabled, the camera is triggered each time this interval expires. This command can also be used to set the shutter integration time for the camera. |Camera trigger cycle time. -1 or 0 to ignore.| Camera shutter integration time. Should be less than trigger cycle time. -1 or 0 to ignore.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_MOUNT_CONTROL_QUAT=220, /* Mission command to control a camera or antenna mount, using a quaternion as reference. |quaternion param q1, w (1 in null-rotation)| quaternion param q2, x (0 in null-rotation)| quaternion param q3, y (0 in null-rotation)| quaternion param q4, z (0 in null-rotation)| Empty| Empty| Empty|  */
   MAV_CMD_DO_GUIDED_MASTER=221, /* set id of master controller |System ID| Component ID| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_GUIDED_LIMITS=222, /* Set limits for external control |Timeout - maximum time that external controller will be allowed to control vehicle. 0 means no timeout.| Altitude (MSL) min - if vehicle moves below this alt, the command will be aborted and the mission will continue. 0 means no lower altitude limit.| Altitude (MSL) max - if vehicle moves above this alt, the command will be aborted and the mission will continue. 0 means no upper altitude limit.| Horizontal move limit - if vehicle moves more than this distance from its location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal move limit.| Empty| Empty| Empty|  */
   MAV_CMD_DO_ENGINE_CONTROL=223, /* Control vehicle engine. This is interpreted by the vehicles engine controller to change the target engine state. It is intended for vehicles with internal combustion engines |0: Stop engine, 1:Start Engine| 0: Warm start, 1:Cold start. Controls use of choke where applicable| Height delay. This is for commanding engine start only after the vehicle has gained the specified height. Used in VTOL vehicles during takeoff to start engine after the aircraft is off the ground. Zero for no delay.| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_MISSION_CURRENT=224, /* 
          Set the mission item with sequence number seq as the current item and emit MISSION_CURRENT (whether or not the mission number changed).
          If a mission is currently being executed, the system will continue to this new mission item on the shortest path, skipping any intermediate mission items.
	  Note that mission jump repeat counters are not reset unless param2 is set (see MAV_CMD_DO_JUMP param2).

          This command may trigger a mission state-machine change on some systems: for example from MISSION_STATE_NOT_STARTED or MISSION_STATE_PAUSED to MISSION_STATE_ACTIVE.
          If the system is in mission mode, on those systems this command might therefore start, restart or resume the mission.
          If the system is not in mission mode this command must not trigger a switch to mission mode.

          The mission may be "reset" using param2.
          Resetting sets jump counters to initial values (to reset counters without changing the current mission item set the param1 to `-1`).
          Resetting also explicitly changes a mission state of MISSION_STATE_COMPLETE to MISSION_STATE_PAUSED or MISSION_STATE_ACTIVE, potentially allowing it to resume when it is (next) in a mission mode.

	  The command will ACK with MAV_RESULT_FAILED if the sequence number is out of range (including if there is no mission item).
         |Mission sequence value to set. -1 for the current mission item (use to reset mission without changing current mission item).| Resets mission. 1: true, 0: false. Resets jump counters to initial values and changes mission state "completed" to be "active" or "paused".| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_LAST=240, /* NOP - This command is only used to mark the upper limit of the DO commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PREFLIGHT_CALIBRATION=241, /* Trigger calibration. This command will be only accepted if in pre-flight mode. Except for Temperature Calibration, only one sensor should be set in a single message and all others should be zero. |1: gyro calibration, 3: gyro temperature calibration| 1: magnetometer calibration| 1: ground pressure calibration| 1: radio RC calibration, 2: RC trim calibration| 1: accelerometer calibration, 2: board level calibration, 3: accelerometer temperature calibration, 4: simple accelerometer calibration| 1: APM: compass/motor interference calibration (PX4: airspeed calibration, deprecated), 2: airspeed calibration| 1: ESC calibration, 3: barometer temperature calibration|  */
   MAV_CMD_PREFLIGHT_SET_SENSOR_OFFSETS=242, /* Set sensor offsets. This command will be only accepted if in pre-flight mode. |Sensor to adjust the offsets for: 0: gyros, 1: accelerometer, 2: magnetometer, 3: barometer, 4: optical flow, 5: second magnetometer, 6: third magnetometer| X axis offset (or generic dimension 1), in the sensor's raw units| Y axis offset (or generic dimension 2), in the sensor's raw units| Z axis offset (or generic dimension 3), in the sensor's raw units| Generic dimension 4, in the sensor's raw units| Generic dimension 5, in the sensor's raw units| Generic dimension 6, in the sensor's raw units|  */
   MAV_CMD_PREFLIGHT_UAVCAN=243, /* Trigger UAVCAN configuration (actuator ID assignment and direction mapping). Note that this maps to the legacy UAVCAN v0 function UAVCAN_ENUMERATE, which is intended to be executed just once during initial vehicle configuration (it is not a normal pre-flight command and has been poorly named). |1: Trigger actuator ID assignment and direction mapping. 0: Cancel command.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_PREFLIGHT_STORAGE=245, /* Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode. |Action to perform on the persistent parameter storage| Action to perform on the persistent mission storage| Onboard logging: 0: Ignore, 1: Start default rate logging, -1: Stop logging, > 1: logging rate (e.g. set to 1000 for 1000 Hz logging)| Reserved| Empty| Empty| Empty|  */
   MAV_CMD_PREFLIGHT_REBOOT_SHUTDOWN=246, /* Request the reboot or shutdown of system components. |0: Do nothing for autopilot, 1: Reboot autopilot, 2: Shutdown autopilot, 3: Reboot autopilot and keep it in the bootloader until upgraded.| 0: Do nothing for onboard computer, 1: Reboot onboard computer, 2: Shutdown onboard computer, 3: Reboot onboard computer and keep it in the bootloader until upgraded.| 0: Do nothing for component, 1: Reboot component, 2: Shutdown component, 3: Reboot component and keep it in the bootloader until upgraded| MAVLink Component ID targeted in param3 (0 for all components).| Reserved (set to 0)| Reserved (set to 0)| WIP: ID (e.g. camera ID -1 for all IDs)|  */
   MAV_CMD_DO_UPGRADE=247, /* Request a target system to start an upgrade of one (or all) of its components.
          For example, the command might be sent to a companion computer to cause it to upgrade a connected flight controller.
          The system doing the upgrade will report progress using the normal command protocol sequence for a long running operation.
          Command protocol information: https://mavlink.io/en/services/command.html. |Component id of the component to be upgraded. If set to 0, all components should be upgraded.| 0: Do not reboot component after the action is executed, 1: Reboot component after the action is executed.| Reserved| Reserved| Reserved| Reserved| WIP: upgrade progress report rate (can be used for more granular control).|  */
   MAV_CMD_OVERRIDE_GOTO=252, /* Override current mission with command to pause mission, pause mission and move to position, continue/resume mission. When param 1 indicates that the mission is paused (MAV_GOTO_DO_HOLD), param 2 defines whether it holds in place or moves to another position. |MAV_GOTO_DO_HOLD: pause mission and either hold or move to specified position (depending on param2), MAV_GOTO_DO_CONTINUE: resume mission.| MAV_GOTO_HOLD_AT_CURRENT_POSITION: hold at current position, MAV_GOTO_HOLD_AT_SPECIFIED_POSITION: hold at specified position.| Coordinate frame of hold point.| Desired yaw angle.| Latitude/X position.| Longitude/Y position.| Altitude/Z position.|  */
   MAV_CMD_OBLIQUE_SURVEY=260, /* Mission command to set a Camera Auto Mount Pivoting Oblique Survey (Replaces CAM_TRIGG_DIST for this purpose). The camera is triggered each time this distance is exceeded, then the mount moves to the next position. Params 4~6 set-up the angle limits and number of positions for oblique survey, where mount-enabled vehicles automatically roll the camera between shots to emulate an oblique camera setup (providing an increased HFOV). This command can also be used to set the shutter integration time for the camera. |Camera trigger distance. 0 to stop triggering.| Camera shutter integration time. 0 to ignore| The minimum interval in which the camera is capable of taking subsequent pictures repeatedly. 0 to ignore.| Total number of roll positions at which the camera will capture photos (images captures spread evenly across the limits defined by param5).| Angle limits that the camera can be rolled to left and right of center.| Fixed pitch angle that the camera will hold in oblique mode if the mount is actuated in the pitch axis.| Empty|  */
   MAV_CMD_DO_SET_STANDARD_MODE=262, /* Enable the specified standard MAVLink mode.
          If the mode is not supported the vehicle should ACK with MAV_RESULT_FAILED.
         |The mode to set.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_MISSION_START=300, /* start running a mission |first_item: the first mission item to run| last_item:  the last mission item to run (after this item is run, the mission ends)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_GROUP_START=301, /* Define start of a group of mission items. When control reaches this command a GROUP_START message is emitted.
          The end of a group is marked using MAV_CMD_GROUP_END with the same group id.
          Group ids are expected, but not required, to iterate sequentially.
          Groups can be nested. |Mission-unique group id.
          Group id is limited because only 24 bit integer can be stored in 32 bit float.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_GROUP_END=302, /* Define end of a group of mission items. When control reaches this command a GROUP_END message is emitted.
          The start of the group is marked is marked using MAV_CMD_GROUP_START with the same group id.
          Group ids are expected, but not required, to iterate sequentially.
          Groups can be nested. |Mission-unique group id.
          Group id is limited because only 24 bit integer can be stored in 32 bit float.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_ACTUATOR_TEST=310, /* Actuator testing command. This is similar to MAV_CMD_DO_MOTOR_TEST but operates on the level of output functions, i.e. it is possible to test Motor1 independent from which output it is configured on. Autopilots typically refuse this command while armed. |Output value: 1 means maximum positive output, 0 to center servos or minimum motor thrust (expected to spin), -1 for maximum negative (if not supported by the motors, i.e. motor is not reversible, smaller than 0 maps to NaN). And NaN maps to disarmed (stop the motors).| Timeout after which the test command expires and the output is restored to the previous value. A timeout has to be set for safety reasons. A timeout of 0 means to restore the previous value immediately.| Reserved (default:0)| Reserved (default:0)| Actuator Output function| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CONFIGURE_ACTUATOR=311, /* Actuator configuration command. |Actuator configuration action| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Actuator Output function| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_COMPONENT_ARM_DISARM=400, /* Arms / Disarms a component |0: disarm, 1: arm| 0: arm-disarm unless prevented by safety checks (i.e. when landed), 21196: force arming/disarming (e.g. allow arming to override preflight checks and disarming in flight)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_RUN_PREARM_CHECKS=401, /* Instructs a target system to run pre-arm checks.
          This allows preflight checks to be run on demand, which may be useful on systems that normally run them at low rate, or which do not trigger checks when the armable state might have changed.
          This command should return MAV_RESULT_ACCEPTED if it will run the checks.
          The results of the checks are usually then reported in SYS_STATUS messages (this is system-specific).
          The command should return MAV_RESULT_TEMPORARILY_REJECTED if the system is already armed.
         |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_ILLUMINATOR_ON_OFF=405, /* Turns illuminators ON/OFF. An illuminator is a light source that is used for lighting up dark areas external to the sytstem: e.g. a torch or searchlight (as opposed to a light source for illuminating the system itself, e.g. an indicator light). |0: Illuminators OFF, 1: Illuminators ON| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_GET_HOME_POSITION=410, /* Request the home position from the vehicle.
	  The vehicle will ACK the command and then emit the HOME_POSITION message. |Reserved| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_INJECT_FAILURE=420, /* Inject artificial failure for testing purposes. Note that autopilots should implement an additional protection before accepting this command such as a specific param setting. |The unit which is affected by the failure.| The type how the failure manifests itself.| Instance affected by failure (0 to signal all).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_START_RX_PAIR=500, /* Starts receiver pairing. |0:Spektrum.| RC type.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_GET_MESSAGE_INTERVAL=510, /* 
          Request the interval between messages for a particular MAVLink message ID.
          The receiver should ACK the command and then emit its response in a MESSAGE_INTERVAL message.
         |The MAVLink message ID| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_MESSAGE_INTERVAL=511, /* Set the interval between messages for a particular MAVLink message ID. This interface replaces REQUEST_DATA_STREAM. |The MAVLink message ID| The interval between two messages. -1: disable. 0: request default rate (which may be zero).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Target address of message stream (if message has target address fields). 0: Flight-stack default (recommended), 1: address of requestor, 2: broadcast.|  */
   MAV_CMD_REQUEST_MESSAGE=512, /* Request the target system(s) emit a single instance of a specified message (i.e. a "one-shot" version of MAV_CMD_SET_MESSAGE_INTERVAL). |The MAVLink message ID of the requested message.| Use for index ID, if required. Otherwise, the use of this parameter (if any) must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| The use of this parameter (if any), must be defined in the requested message. By default assumed not used (0).| Target address for requested message (if message has target address fields). 0: Flight-stack default, 1: address of requestor, 2: broadcast.|  */
   MAV_CMD_REQUEST_PROTOCOL_VERSION=519, /* Request MAVLink protocol version compatibility. All receivers should ACK the command and then emit their capabilities in an PROTOCOL_VERSION message |1: Request supported protocol versions by all nodes on the network| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_AUTOPILOT_CAPABILITIES=520, /* Request autopilot capabilities. The receiver should ACK the command and then emit its capabilities in an AUTOPILOT_VERSION message |1: Request autopilot version| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_CAMERA_INFORMATION=521, /* Request camera information (CAMERA_INFORMATION). |0: No action 1: Request camera capabilities| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_CAMERA_SETTINGS=522, /* Request camera settings (CAMERA_SETTINGS). |0: No Action 1: Request camera settings| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_STORAGE_INFORMATION=525, /* Request storage information (STORAGE_INFORMATION). Use the command's target_component to target a specific component's storage. |Storage ID (0 for all, 1 for first, 2 for second, etc.)| 0: No Action 1: Request storage information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_STORAGE_FORMAT=526, /* Format a storage medium. Once format is complete, a STORAGE_INFORMATION message is sent. Use the command's target_component to target a specific component's storage. |Storage ID (1 for first, 2 for second, etc.)| Format storage (and reset image log). 0: No action 1: Format storage| Reset Image Log (without formatting storage medium). This will reset CAMERA_CAPTURE_STATUS.image_count and CAMERA_IMAGE_CAPTURED.image_index. 0: No action 1: Reset Image Log| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_CAMERA_CAPTURE_STATUS=527, /* Request camera capture status (CAMERA_CAPTURE_STATUS) |0: No Action 1: Request camera capture status| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_FLIGHT_INFORMATION=528, /* Request flight information (FLIGHT_INFORMATION) |1: Request flight information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_RESET_CAMERA_SETTINGS=529, /* Reset all camera settings to Factory Default |0: No Action 1: Reset all settings| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_CAMERA_MODE=530, /* Set camera running mode. Use NaN for reserved values. GCS will send a MAV_CMD_REQUEST_VIDEO_STREAM_STATUS command after a mode change if the camera supports video streaming. |Reserved (Set to 0)| Camera mode| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_CAMERA_ZOOM=531, /* Set camera zoom. Camera must respond with a CAMERA_SETTINGS message (on success). |Zoom type| Zoom value. The range of valid values depend on the zoom type.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_CAMERA_FOCUS=532, /* Set camera focus. Camera must respond with a CAMERA_SETTINGS message (on success). |Focus type| Focus value| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_STORAGE_USAGE=533, /* Set that a particular storage is the preferred location for saving photos, videos, and/or other media (e.g. to set that an SD card is used for storing videos).
          There can only be one preferred save location for each particular media type: setting a media usage flag will clear/reset that same flag if set on any other storage.
          If no flag is set the system should use its default storage.
          A target system can choose to always use default storage, in which case it should ACK the command with MAV_RESULT_UNSUPPORTED.
          A target system can choose to not allow a particular storage to be set as preferred storage, in which case it should ACK the command with MAV_RESULT_DENIED. |Storage ID (1 for first, 2 for second, etc.)| Usage flags| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_AT_S_PARAM=550, /* Allows setting an AT S command of an SiK radio.
         |The radio instance, one-based, 0 for all.| The Sx index, e.g. 3 for S3 which is NETID.| The value to set it to, e.g. default 25 for NETID| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_JUMP_TAG=600, /* Tagged jump target. Can be jumped to with MAV_CMD_DO_JUMP_TAG. |Tag.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_JUMP_TAG=601, /* Jump to the matching tag in the mission list. Repeat this action for the specified number of times. A mission should contain a single matching tag for each jump. If this is not the case then a jump to a missing tag should complete the mission, and a jump where there are multiple matching tags should always select the one with the lowest mission sequence number. |Target tag to jump to.| Repeat count.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_PARAM_TRANSACTION=900, /* Request to start or end a parameter transaction. Multiple kinds of transport layers can be used to exchange parameters in the transaction (param, param_ext and mavftp). The command response can either be a success/failure or an in progress in case the receiving side takes some time to apply the parameters. |Action to be performed (start, commit, cancel, etc.)| Possible transport layers to set and get parameters via mavlink during a parameter transaction.| Identifier for a specific transaction.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW=1000, /* Set gimbal manager pitch/yaw setpoints (low rate command). It is possible to set combinations of the values below. E.g. an angle as well as a desired angular rate can be used to get to this angle at a certain angular rate, or an angular rate only will result in continuous turning. NaN is to be used to signal unset. Note: only the gimbal manager will react to this command - it will be ignored by a gimbal device. Use GIMBAL_MANAGER_SET_PITCHYAW if you need to stream pitch/yaw setpoints at higher rate.  |Pitch angle (positive to pitch up, relative to vehicle for FOLLOW mode, relative to world horizon for LOCK mode).| Yaw angle (positive to yaw to the right, relative to vehicle for FOLLOW mode, absolute to North for LOCK mode).| Pitch rate (positive to pitch up).| Yaw rate (positive to yaw to the right).| Gimbal manager flags to use.| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
   MAV_CMD_DO_GIMBAL_MANAGER_CONFIGURE=1001, /* Gimbal configuration to set which sysid/compid is in primary and secondary control. |Sysid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Sysid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Reserved (default:0)| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
   MAV_CMD_IMAGE_START_CAPTURE=2000, /* Start image capture sequence. Sends CAMERA_IMAGE_CAPTURED after each capture. Use NaN for reserved values. |Reserved (Set to 0)| Desired elapsed time between two consecutive pictures (in seconds). Minimum values depend on hardware (typically greater than 2 seconds).| Total number of images to capture. 0 to capture forever/until MAV_CMD_IMAGE_STOP_CAPTURE.| Capture sequence number starting from 1. This is only valid for single-capture (param3 == 1), otherwise set to 0. Increment the capture ID for each capture command to prevent double captures when a command is re-transmitted.| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_IMAGE_STOP_CAPTURE=2001, /* Stop image capture sequence Use NaN for reserved values. |Reserved (Set to 0)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_REQUEST_CAMERA_IMAGE_CAPTURE=2002, /* Re-request a CAMERA_IMAGE_CAPTURED message. |Sequence number for missing CAMERA_IMAGE_CAPTURED message| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_DO_TRIGGER_CONTROL=2003, /* Enable or disable on-board camera triggering system. |Trigger enable/disable (0 for disable, 1 for start), -1 to ignore| 1 to reset the trigger sequence, -1 or 0 to ignore| 1 to pause triggering, but without switching the camera off or retracting it. -1 to ignore| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_TRACK_POINT=2004, /* If the camera supports point visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_POINT is set), this command allows to initiate the tracking. |Point to track x value (normalized 0..1, 0 is left, 1 is right).| Point to track y value (normalized 0..1, 0 is top, 1 is bottom).| Point radius (normalized 0..1, 0 is image left, 1 is image right).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_TRACK_RECTANGLE=2005, /* If the camera supports rectangle visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_RECTANGLE is set), this command allows to initiate the tracking. |Top left corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Top left corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Bottom right corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Bottom right corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_STOP_TRACKING=2010, /* Stops ongoing tracking. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_VIDEO_START_CAPTURE=2500, /* Starts video capture (recording). |Video Stream ID (0 for all streams)| Frequency CAMERA_CAPTURE_STATUS messages should be sent while recording (0 for no messages, otherwise frequency)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_VIDEO_STOP_CAPTURE=2501, /* Stop the current video capture (recording). |Video Stream ID (0 for all streams)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_VIDEO_START_STREAMING=2502, /* Start video streaming |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_VIDEO_STOP_STREAMING=2503, /* Stop the given video stream |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_VIDEO_STREAM_INFORMATION=2504, /* Request video stream information (VIDEO_STREAM_INFORMATION) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_VIDEO_STREAM_STATUS=2505, /* Request video stream status (VIDEO_STREAM_STATUS) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_LOGGING_START=2510, /* Request to start streaming logging data over MAVLink (see also LOGGING_DATA message) |Format: 0: ULog| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_LOGGING_STOP=2511, /* Request to stop streaming log data over MAVLink |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_AIRFRAME_CONFIGURATION=2520, /*  |Landing gear ID (default: 0, -1 for all)| Landing gear position (Down: 0, Up: 1, NaN for no change)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_CONTROL_HIGH_LATENCY=2600, /* Request to start/stop transmitting over the high latency telemetry |Control transmission over high latency telemetry (0: stop, 1: start)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PANORAMA_CREATE=2800, /* Create a panorama at the current position |Viewing angle horizontal of the panorama (+- 0.5 the total angle)| Viewing angle vertical of panorama.| Speed of the horizontal rotation.| Speed of the vertical rotation.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_VTOL_TRANSITION=3000, /* Request VTOL transition |The target VTOL state. For normal transitions, only MAV_VTOL_STATE_MC and MAV_VTOL_STATE_FW can be used.| Force immediate transition to the specified MAV_VTOL_STATE. 1: Force immediate, 0: normal transition. Can be used, for example, to trigger an emergency "Quadchute". Caution: Can be dangerous/damage vehicle, depending on autopilot implementation of this command.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_ARM_AUTHORIZATION_REQUEST=3001, /* Request authorization to arm the vehicle to a external entity, the arm authorizer is responsible to request all data that is needs from the vehicle before authorize or deny the request.
		If approved the COMMAND_ACK message progress field should be set with period of time that this authorization is valid in seconds.
		If the authorization is denied COMMAND_ACK.result_param2 should be set with one of the reasons in ARM_AUTH_DENIED_REASON.
         |Vehicle system id, this way ground station can request arm authorization on behalf of any vehicle| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_GUIDED_SUBMODE_STANDARD=4000, /* This command sets the submode to standard guided when vehicle is in guided mode. The vehicle holds position and altitude and the user can input the desired velocities along all three axes.
                   |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_GUIDED_SUBMODE_CIRCLE=4001, /* This command sets submode circle when vehicle is in guided mode. Vehicle flies along a circle facing the center of the circle. The user can input the velocity along the circle and change the radius. If no input is given the vehicle will hold position.
                   |Radius of desired circle in CIRCLE_MODE| User defined| User defined| User defined| Target latitude of center of circle in CIRCLE_MODE| Target longitude of center of circle in CIRCLE_MODE| Reserved (default:0)|  */
   MAV_CMD_CONDITION_GATE=4501, /* Delay mission state machine until gate has been reached. |Geometry: 0: orthogonal to path between previous and next waypoint.| Altitude: 0: ignore altitude| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_RETURN_POINT=5000, /* Fence return point (there can only be one such point in a geofence definition). If rally points are supported they should be used instead. |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_INCLUSION=5001, /* Fence vertex for an inclusion polygon (the polygon must not be self-intersecting). The vehicle must stay within this area. Minimum of 3 vertices required.
         |Polygon vertex count| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group, must be the same for all points in each polygon| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_EXCLUSION=5002, /* Fence vertex for an exclusion polygon (the polygon must not be self-intersecting). The vehicle must stay outside this area. Minimum of 3 vertices required.
         |Polygon vertex count| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_INCLUSION=5003, /* Circular fence area. The vehicle must stay inside this area.
         |Radius.| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_EXCLUSION=5004, /* Circular fence area. The vehicle must stay outside this area.
         |Radius.| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_SET_FENCE_BREACH_ACTION=5010, /* Sets the action on geofence breach.
          If sent using the command protocol this sets the system-default geofence action.
          As part of a mission protocol plan it sets the fence action for the next complete geofence definition *after* the command.
          Note: A fence action defined in a plan will override the default system setting (even if the system-default is `FENCE_ACTION_NONE`).
          Note: Every geofence in a plan can have its own action; if no fence action is defined for a particular fence the system-default will be used.
          Note: The flight stack should reject a plan or command that uses a geofence action that it does not support and send a STATUSTEXT with the reason.
         |Fence action on breach.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_RALLY_POINT=5100, /* Rally point. You can have multiple rally points defined.
         |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_UAVCAN_GET_NODE_INFO=5200, /* Commands the vehicle to respond with a sequence of messages UAVCAN_NODE_INFO, one message per every UAVCAN node that is online. Note that some of the response messages can be lost, which the receiver can detect easily by checking whether every received UAVCAN_NODE_STATUS has a matching message UAVCAN_NODE_INFO received earlier; if not, this command should be sent again in order to request re-transmission of the node information messages. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_DO_ADSB_OUT_IDENT=10001, /* Trigger the start of an ADSB-out IDENT. This should only be used when requested to do so by an Air Traffic Controller in controlled airspace. This starts the IDENT which is then typically held for 18 seconds by the hardware per the Mode A, C, and S transponder spec. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_PAYLOAD_PREPARE_DEPLOY=30001, /* Deploy payload on a Lat / Lon / Alt position. This includes the navigation to reach the required release position and velocity. |Operation mode. 0: prepare single payload deploy (overwriting previous requests), but do not execute it. 1: execute payload deploy immediately (rejecting further deploy commands during execution, but allowing abort). 2: add payload deploy to existing deployment list.| Desired approach vector in compass heading. A negative value indicates the system can define the approach vector at will.| Desired ground speed at release time. This can be overridden by the airframe in case it needs to meet minimum airspeed. A negative value indicates the system can define the ground speed at will.| Minimum altitude clearance to the release position. A negative value indicates the system can define the clearance at will.| Latitude.| Longitude.| Altitude (MSL)|  */
   MAV_CMD_PAYLOAD_CONTROL_DEPLOY=30002, /* Control the payload deployment. |Operation mode. 0: Abort deployment, continue normal mission. 1: switch to payload deployment mode. 100: delete first payload deployment request. 101: delete all payload deployment requests.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_WAYPOINT_USER_1=31000, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_2=31001, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_3=31002, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_4=31003, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_5=31004, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_1=31005, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_2=31006, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_3=31007, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_4=31008, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_5=31009, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_USER_1=31010, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_2=31011, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_3=31012, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_4=31013, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_5=31014, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_CAN_FORWARD=32000, /* Request forwarding of CAN packets from the given CAN bus to this component. CAN Frames are sent using CAN_FRAME and CANFD_FRAME messages |Bus number (0 to disable forwarding, 1 for first bus, 2 for 2nd bus, 3 for 3rd bus).| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_FIXED_MAG_CAL_YAW=42006, /* Magnetometer calibration based on provided known yaw. This allows for fast calibration using WMM field tables in the vehicle, given only the known yaw of the vehicle. If Latitude and longitude are both zero then use the current vehicle location. |Yaw of vehicle in earth frame.| CompassMask, 0 for all.| Latitude.| Longitude.| Empty.| Empty.| Empty.|  */
   MAV_CMD_DO_WINCH=42600, /* Command to operate winch. |Winch instance number.| Action to perform.| Length of line to release (negative to wind).| Release rate (negative to wind).| Empty.| Empty.| Empty.|  */
   MAV_CMD_ENUM_END=42601, /*  | */
} MAV_CMD;
#endif

/** @brief Battery status flags for fault, health and state indication. */
#ifndef HAVE_ENUM_MAV_BATTERY_STATUS_FLAGS
#define HAVE_ENUM_MAV_BATTERY_STATUS_FLAGS
typedef enum MAV_BATTERY_STATUS_FLAGS
{
   MAV_BATTERY_STATUS_FLAGS_NOT_READY_TO_USE=1, /* 
          The battery is not ready to use (fly).
          Set if the battery has faults or other conditions that make it unsafe to fly with.
          Note: It will be the logical OR of other status bits (chosen by the manufacturer/integrator).
         | */
   MAV_BATTERY_STATUS_FLAGS_CHARGING=2, /* 
          Battery is charging.
         | */
   MAV_BATTERY_STATUS_FLAGS_CELL_BALANCING=4, /* 
          Battery is cell balancing (during charging).
          Not ready to use (MAV_BATTERY_STATUS_FLAGS_NOT_READY_TO_USE may be set).
         | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_CELL_IMBALANCE=8, /* 
          Battery cells are not balanced.
          Not ready to use.
         | */
   MAV_BATTERY_STATUS_FLAGS_AUTO_DISCHARGING=16, /* 
          Battery is auto discharging (towards storage level).
          Not ready to use (MAV_BATTERY_STATUS_FLAGS_NOT_READY_TO_USE would be set).
         | */
   MAV_BATTERY_STATUS_FLAGS_REQUIRES_SERVICE=32, /* 
          Battery requires service (not safe to fly). 
          This is set at vendor discretion.
          It is likely to be set for most faults, and may also be set according to a maintenance schedule (such as age, or number of recharge cycles, etc.).
         | */
   MAV_BATTERY_STATUS_FLAGS_BAD_BATTERY=64, /* 
          Battery is faulty and cannot be repaired (not safe to fly). 
          This is set at vendor discretion.
          The battery should be disposed of safely.
         | */
   MAV_BATTERY_STATUS_FLAGS_PROTECTIONS_ENABLED=128, /* 
          Automatic battery protection monitoring is enabled.
          When enabled, the system will monitor for certain kinds of faults, such as cells being over-voltage.
          If a fault is triggered then and protections are enabled then a safety fault (MAV_BATTERY_STATUS_FLAGS_FAULT_PROTECTION_SYSTEM) will be set and power from the battery will be stopped.
          Note that battery protection monitoring should only be enabled when the vehicle is landed. Once the vehicle is armed, or starts moving, the protections should be disabled to prevent false positives from disabling the output.
         | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_PROTECTION_SYSTEM=256, /* 
          The battery fault protection system had detected a fault and cut all power from the battery.
          This will only trigger if MAV_BATTERY_STATUS_FLAGS_PROTECTIONS_ENABLED is set.
          Other faults like MAV_BATTERY_STATUS_FLAGS_FAULT_OVER_VOLT may also be set, indicating the cause of the protection fault.
         | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_OVER_VOLT=512, /* One or more cells are above their maximum voltage rating. | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_UNDER_VOLT=1024, /* 
          One or more cells are below their minimum voltage rating.
          A battery that had deep-discharged might be irrepairably damaged, and set both MAV_BATTERY_STATUS_FLAGS_FAULT_UNDER_VOLT and MAV_BATTERY_STATUS_FLAGS_BAD_BATTERY.
         | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_OVER_TEMPERATURE=2048, /* Over-temperature fault. | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_UNDER_TEMPERATURE=4096, /* Under-temperature fault. | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_OVER_CURRENT=8192, /* Over-current fault. | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_SHORT_CIRCUIT=16384, /* 
          Short circuit event detected.
          The battery may or may not be safe to use (check other flags).
         | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_INCOMPATIBLE_VOLTAGE=32768, /* Voltage not compatible with power rail voltage (batteries on same power rail should have similar voltage). | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_INCOMPATIBLE_FIRMWARE=65536, /* Battery firmware is not compatible with current autopilot firmware. | */
   MAV_BATTERY_STATUS_FLAGS_FAULT_INCOMPATIBLE_CELLS_CONFIGURATION=131072, /* Battery is not compatible due to cell configuration (e.g. 5s1p when vehicle requires 6s). | */
   MAV_BATTERY_STATUS_FLAGS_CAPACITY_RELATIVE_TO_FULL=262144, /* 
          Battery capacity_consumed and capacity_remaining values are relative to a full battery (they sum to the total capacity of the battery).
          This flag would be set for a smart battery that can accurately determine its remaining charge across vehicle reboots and discharge/recharge cycles.
          If unset the capacity_consumed indicates the consumption since vehicle power-on, as measured using a power monitor. The capacity_remaining, if provided, indicates the estimated remaining capacity on the assumption that the battery was full on vehicle boot.
          If unset a GCS is recommended to advise that users fully charge the battery on power on.
         | */
   MAV_BATTERY_STATUS_FLAGS_EXTENDED=4294967295, /* Reserved (not used). If set, this will indicate that an additional status field exists for higher status values. | */
   MAV_BATTERY_STATUS_FLAGS_ENUM_END=4294967296, /*  | */
} MAV_BATTERY_STATUS_FLAGS;
#endif

/** @brief These flags indicate the sensor reporting capabilities for TARGET_ABSOLUTE. */
#ifndef HAVE_ENUM_TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS
#define HAVE_ENUM_TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS
typedef enum TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS
{
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_POSITION=1, /*  | */
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_VELOCITY=2, /*  | */
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_ACCELERATION=4, /*  | */
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_ATTITUDE=8, /*  | */
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_RATES=16, /*  | */
   TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS_ENUM_END=17, /*  | */
} TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS;
#endif

/** @brief The frame of a target observation from an onboard sensor. */
#ifndef HAVE_ENUM_TARGET_OBS_FRAME
#define HAVE_ENUM_TARGET_OBS_FRAME
typedef enum TARGET_OBS_FRAME
{
   TARGET_OBS_FRAME_LOCAL_NED=0, /* NED local tangent frame (x: North, y: East, z: Down) with origin fixed relative to earth. | */
   TARGET_OBS_FRAME_BODY_FRD=1, /* FRD local frame aligned to the vehicle's attitude (x: Forward, y: Right, z: Down) with an origin that travels with vehicle. | */
   TARGET_OBS_FRAME_LOCAL_OFFSET_NED=2, /* NED local tangent frame (x: North, y: East, z: Down) with an origin that travels with vehicle. | */
   TARGET_OBS_FRAME_OTHER=3, /* Other sensor frame for target observations neither in local NED nor in body FRD. | */
   TARGET_OBS_FRAME_ENUM_END=4, /*  | */
} TARGET_OBS_FRAME;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 0
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 0
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_param_ack_transaction.h"
#include "./mavlink_msg_mission_checksum.h"
#include "./mavlink_msg_airspeed.h"
#include "./mavlink_msg_wifi_network_info.h"
#include "./mavlink_msg_figure_eight_execution_status.h"
#include "./mavlink_msg_battery_status_v2.h"
#include "./mavlink_msg_component_information_basic.h"
#include "./mavlink_msg_group_start.h"
#include "./mavlink_msg_group_end.h"
#include "./mavlink_msg_available_modes.h"
#include "./mavlink_msg_current_mode.h"
#include "./mavlink_msg_available_modes_monitor.h"
#include "./mavlink_msg_target_absolute.h"
#include "./mavlink_msg_target_relative.h"

// base include
#include "../common/common.h"


#if MAVLINK_DEVELOPMENT_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, MAVLINK_MESSAGE_INFO_LINK_NODE_STATUS, MAVLINK_MESSAGE_INFO_SET_MODE, MAVLINK_MESSAGE_INFO_PARAM_ACK_TRANSACTION, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, MAVLINK_MESSAGE_INFO_MISSION_CHECKSUM, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, MAVLINK_MESSAGE_INFO_COMMAND_CANCEL, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EFI_STATUS, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, MAVLINK_MESSAGE_INFO_SETUP_SIGNING, MAVLINK_MESSAGE_INFO_BUTTON_CHANGE, MAVLINK_MESSAGE_INFO_PLAY_TUNE, MAVLINK_MESSAGE_INFO_CAMERA_INFORMATION, MAVLINK_MESSAGE_INFO_CAMERA_SETTINGS, MAVLINK_MESSAGE_INFO_STORAGE_INFORMATION, MAVLINK_MESSAGE_INFO_CAMERA_CAPTURE_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_IMAGE_CAPTURED, MAVLINK_MESSAGE_INFO_FLIGHT_INFORMATION, MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION, MAVLINK_MESSAGE_INFO_LOGGING_DATA, MAVLINK_MESSAGE_INFO_LOGGING_DATA_ACKED, MAVLINK_MESSAGE_INFO_LOGGING_ACK, MAVLINK_MESSAGE_INFO_VIDEO_STREAM_INFORMATION, MAVLINK_MESSAGE_INFO_VIDEO_STREAM_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FOV_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_TRACKING_IMAGE_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_TRACKING_GEO_STATUS, MAVLINK_MESSAGE_INFO_GIMBAL_MANAGER_INFORMATION, MAVLINK_MESSAGE_INFO_GIMBAL_MANAGER_STATUS, MAVLINK_MESSAGE_INFO_GIMBAL_MANAGER_SET_ATTITUDE, MAVLINK_MESSAGE_INFO_GIMBAL_DEVICE_INFORMATION, MAVLINK_MESSAGE_INFO_GIMBAL_DEVICE_SET_ATTITUDE, MAVLINK_MESSAGE_INFO_GIMBAL_DEVICE_ATTITUDE_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE, MAVLINK_MESSAGE_INFO_GIMBAL_MANAGER_SET_PITCHYAW, MAVLINK_MESSAGE_INFO_GIMBAL_MANAGER_SET_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_ESC_INFO, MAVLINK_MESSAGE_INFO_ESC_STATUS, MAVLINK_MESSAGE_INFO_AIRSPEED, MAVLINK_MESSAGE_INFO_WIFI_NETWORK_INFO, MAVLINK_MESSAGE_INFO_WIFI_CONFIG_AP, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_AIS_VESSEL, MAVLINK_MESSAGE_INFO_UAVCAN_NODE_STATUS, MAVLINK_MESSAGE_INFO_UAVCAN_NODE_INFO, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_EXT_VALUE, MAVLINK_MESSAGE_INFO_PARAM_EXT_SET, MAVLINK_MESSAGE_INFO_PARAM_EXT_ACK, MAVLINK_MESSAGE_INFO_OBSTACLE_DISTANCE, MAVLINK_MESSAGE_INFO_ODOMETRY, MAVLINK_MESSAGE_INFO_TRAJECTORY_REPRESENTATION_WAYPOINTS, MAVLINK_MESSAGE_INFO_TRAJECTORY_REPRESENTATION_BEZIER, MAVLINK_MESSAGE_INFO_CELLULAR_STATUS, MAVLINK_MESSAGE_INFO_ISBD_LINK_STATUS, MAVLINK_MESSAGE_INFO_CELLULAR_CONFIG, MAVLINK_MESSAGE_INFO_RAW_RPM, MAVLINK_MESSAGE_INFO_UTM_GLOBAL_POSITION, MAVLINK_MESSAGE_INFO_DEBUG_FLOAT_ARRAY, MAVLINK_MESSAGE_INFO_ORBIT_EXECUTION_STATUS, MAVLINK_MESSAGE_INFO_FIGURE_EIGHT_EXECUTION_STATUS, MAVLINK_MESSAGE_INFO_BATTERY_STATUS_V2, MAVLINK_MESSAGE_INFO_SMART_BATTERY_INFO, MAVLINK_MESSAGE_INFO_GENERATOR_STATUS, MAVLINK_MESSAGE_INFO_ACTUATOR_OUTPUT_STATUS, MAVLINK_MESSAGE_INFO_TIME_ESTIMATE_TO_TARGET, MAVLINK_MESSAGE_INFO_TUNNEL, MAVLINK_MESSAGE_INFO_CAN_FRAME, MAVLINK_MESSAGE_INFO_CANFD_FRAME, MAVLINK_MESSAGE_INFO_CAN_FILTER_MODIFY, MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_STATUS, MAVLINK_MESSAGE_INFO_COMPONENT_INFORMATION, MAVLINK_MESSAGE_INFO_COMPONENT_INFORMATION_BASIC, MAVLINK_MESSAGE_INFO_COMPONENT_METADATA, MAVLINK_MESSAGE_INFO_PLAY_TUNE_V2, MAVLINK_MESSAGE_INFO_SUPPORTED_TUNES, MAVLINK_MESSAGE_INFO_EVENT, MAVLINK_MESSAGE_INFO_CURRENT_EVENT_SEQUENCE, MAVLINK_MESSAGE_INFO_REQUEST_EVENT, MAVLINK_MESSAGE_INFO_RESPONSE_EVENT_ERROR, MAVLINK_MESSAGE_INFO_GROUP_START, MAVLINK_MESSAGE_INFO_GROUP_END, MAVLINK_MESSAGE_INFO_AVAILABLE_MODES, MAVLINK_MESSAGE_INFO_CURRENT_MODE, MAVLINK_MESSAGE_INFO_AVAILABLE_MODES_MONITOR, MAVLINK_MESSAGE_INFO_TARGET_ABSOLUTE, MAVLINK_MESSAGE_INFO_TARGET_RELATIVE, MAVLINK_MESSAGE_INFO_WHEEL_DISTANCE, MAVLINK_MESSAGE_INFO_WINCH_STATUS, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_BASIC_ID, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_LOCATION, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_AUTHENTICATION, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_SELF_ID, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_SYSTEM, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_OPERATOR_ID, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_MESSAGE_PACK, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_ARM_STATUS, MAVLINK_MESSAGE_INFO_OPEN_DRONE_ID_SYSTEM_UPDATE, MAVLINK_MESSAGE_INFO_HYGROMETER_SENSOR}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ACTUATOR_OUTPUT_STATUS", 375 }, { "ADSB_VEHICLE", 246 }, { "AIRSPEED", 295 }, { "AIS_VESSEL", 301 }, { "ALTITUDE", 141 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_STATE_FOR_GIMBAL_DEVICE", 286 }, { "AUTOPILOT_VERSION", 148 }, { "AVAILABLE_MODES", 435 }, { "AVAILABLE_MODES_MONITOR", 437 }, { "BATTERY_STATUS", 147 }, { "BATTERY_STATUS_V2", 369 }, { "BUTTON_CHANGE", 257 }, { "CAMERA_CAPTURE_STATUS", 262 }, { "CAMERA_FOV_STATUS", 271 }, { "CAMERA_IMAGE_CAPTURED", 263 }, { "CAMERA_INFORMATION", 259 }, { "CAMERA_SETTINGS", 260 }, { "CAMERA_TRACKING_GEO_STATUS", 276 }, { "CAMERA_TRACKING_IMAGE_STATUS", 275 }, { "CAMERA_TRIGGER", 112 }, { "CANFD_FRAME", 387 }, { "CAN_FILTER_MODIFY", 388 }, { "CAN_FRAME", 386 }, { "CELLULAR_CONFIG", 336 }, { "CELLULAR_STATUS", 334 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_CANCEL", 80 }, { "COMMAND_INT", 75 }, { "COMMAND_LONG", 76 }, { "COMPONENT_INFORMATION", 395 }, { "COMPONENT_INFORMATION_BASIC", 396 }, { "COMPONENT_METADATA", 397 }, { "CONTROL_SYSTEM_STATE", 146 }, { "CURRENT_EVENT_SEQUENCE", 411 }, { "CURRENT_MODE", 436 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_FLOAT_ARRAY", 350 }, { "DEBUG_VECT", 250 }, { "DISTANCE_SENSOR", 132 }, { "EFI_STATUS", 225 }, { "ENCAPSULATED_DATA", 131 }, { "ESC_INFO", 290 }, { "ESC_STATUS", 291 }, { "ESTIMATOR_STATUS", 230 }, { "EVENT", 410 }, { "EXTENDED_SYS_STATE", 245 }, { "FENCE_STATUS", 162 }, { "FIGURE_EIGHT_EXECUTION_STATUS", 361 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FLIGHT_INFORMATION", 264 }, { "FOLLOW_TARGET", 144 }, { "GENERATOR_STATUS", 373 }, { "GIMBAL_DEVICE_ATTITUDE_STATUS", 285 }, { "GIMBAL_DEVICE_INFORMATION", 283 }, { "GIMBAL_DEVICE_SET_ATTITUDE", 284 }, { "GIMBAL_MANAGER_INFORMATION", 280 }, { "GIMBAL_MANAGER_SET_ATTITUDE", 282 }, { "GIMBAL_MANAGER_SET_MANUAL_CONTROL", 288 }, { "GIMBAL_MANAGER_SET_PITCHYAW", 287 }, { "GIMBAL_MANAGER_STATUS", 281 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "GROUP_END", 415 }, { "GROUP_START", 414 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "HYGROMETER_SENSOR", 12920 }, { "ISBD_LINK_STATUS", 335 }, { "LANDING_TARGET", 149 }, { "LINK_NODE_STATUS", 8 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOGGING_ACK", 268 }, { "LOGGING_DATA", 266 }, { "LOGGING_DATA_ACKED", 267 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MAG_CAL_REPORT", 192 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CHECKSUM", 53 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_ORIENTATION", 265 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "OBSTACLE_DISTANCE", 330 }, { "ODOMETRY", 331 }, { "ONBOARD_COMPUTER_STATUS", 390 }, { "OPEN_DRONE_ID_ARM_STATUS", 12918 }, { "OPEN_DRONE_ID_AUTHENTICATION", 12902 }, { "OPEN_DRONE_ID_BASIC_ID", 12900 }, { "OPEN_DRONE_ID_LOCATION", 12901 }, { "OPEN_DRONE_ID_MESSAGE_PACK", 12915 }, { "OPEN_DRONE_ID_OPERATOR_ID", 12905 }, { "OPEN_DRONE_ID_SELF_ID", 12903 }, { "OPEN_DRONE_ID_SYSTEM", 12904 }, { "OPEN_DRONE_ID_SYSTEM_UPDATE", 12919 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "ORBIT_EXECUTION_STATUS", 360 }, { "PARAM_ACK_TRANSACTION", 19 }, { "PARAM_EXT_ACK", 324 }, { "PARAM_EXT_REQUEST_LIST", 321 }, { "PARAM_EXT_REQUEST_READ", 320 }, { "PARAM_EXT_SET", 323 }, { "PARAM_EXT_VALUE", 322 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PING", 4 }, { "PLAY_TUNE", 258 }, { "PLAY_TUNE_V2", 400 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "PROTOCOL_VERSION", 300 }, { "RADIO_STATUS", 109 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RAW_RPM", 339 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REQUEST_DATA_STREAM", 66 }, { "REQUEST_EVENT", 412 }, { "RESOURCE_REQUEST", 142 }, { "RESPONSE_EVENT_ERROR", 413 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SETUP_SIGNING", 256 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SIM_STATE", 108 }, { "SMART_BATTERY_INFO", 370 }, { "STATUSTEXT", 253 }, { "STORAGE_INFORMATION", 261 }, { "SUPPORTED_TUNES", 401 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TARGET_ABSOLUTE", 510 }, { "TARGET_RELATIVE", 511 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "TIME_ESTIMATE_TO_TARGET", 380 }, { "TRAJECTORY_REPRESENTATION_BEZIER", 333 }, { "TRAJECTORY_REPRESENTATION_WAYPOINTS", 332 }, { "TUNNEL", 385 }, { "UAVCAN_NODE_INFO", 311 }, { "UAVCAN_NODE_STATUS", 310 }, { "UTM_GLOBAL_POSITION", 340 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VIDEO_STREAM_INFORMATION", 269 }, { "VIDEO_STREAM_STATUS", 270 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "WHEEL_DISTANCE", 9000 }, { "WIFI_CONFIG_AP", 299 }, { "WIFI_NETWORK_INFO", 298 }, { "WINCH_STATUS", 9005 }, { "WIND_COV", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_DEVELOPMENT_H
