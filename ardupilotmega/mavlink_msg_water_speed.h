#pragma once
// MESSAGE WATER_SPEED PACKING

#define MAVLINK_MSG_ID_WATER_SPEED 229

MAVPACKED(
typedef struct __mavlink_water_speed_t {
 float water_speed_true; /*< [knots] Speed in knots*/
 float water_speed_relative; /*< [km/h] Speed relative to water in Kilometers/hr*/
}) mavlink_water_speed_t;

#define MAVLINK_MSG_ID_WATER_SPEED_LEN 8
#define MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN 8
#define MAVLINK_MSG_ID_229_LEN 8
#define MAVLINK_MSG_ID_229_MIN_LEN 8

#define MAVLINK_MSG_ID_WATER_SPEED_CRC 212
#define MAVLINK_MSG_ID_229_CRC 212



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WATER_SPEED { \
    229, \
    "WATER_SPEED", \
    2, \
    {  { "water_speed_true", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_water_speed_t, water_speed_true) }, \
         { "water_speed_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_water_speed_t, water_speed_relative) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WATER_SPEED { \
    "WATER_SPEED", \
    2, \
    {  { "water_speed_true", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_water_speed_t, water_speed_true) }, \
         { "water_speed_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_water_speed_t, water_speed_relative) }, \
         } \
}
#endif

/**
 * @brief Pack a water_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param water_speed_true [knots] Speed in knots
 * @param water_speed_relative [km/h] Speed relative to water in Kilometers/hr
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_speed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float water_speed_true, float water_speed_relative)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_SPEED_LEN];
    _mav_put_float(buf, 0, water_speed_true);
    _mav_put_float(buf, 4, water_speed_relative);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_SPEED_LEN);
#else
    mavlink_water_speed_t packet;
    packet.water_speed_true = water_speed_true;
    packet.water_speed_relative = water_speed_relative;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_SPEED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_SPEED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
}

/**
 * @brief Pack a water_speed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_speed_true [knots] Speed in knots
 * @param water_speed_relative [km/h] Speed relative to water in Kilometers/hr
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_water_speed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float water_speed_true,float water_speed_relative)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_SPEED_LEN];
    _mav_put_float(buf, 0, water_speed_true);
    _mav_put_float(buf, 4, water_speed_relative);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WATER_SPEED_LEN);
#else
    mavlink_water_speed_t packet;
    packet.water_speed_true = water_speed_true;
    packet.water_speed_relative = water_speed_relative;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WATER_SPEED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WATER_SPEED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
}

/**
 * @brief Encode a water_speed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param water_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_speed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_water_speed_t* water_speed)
{
    return mavlink_msg_water_speed_pack(system_id, component_id, msg, water_speed->water_speed_true, water_speed->water_speed_relative);
}

/**
 * @brief Encode a water_speed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param water_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_water_speed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_water_speed_t* water_speed)
{
    return mavlink_msg_water_speed_pack_chan(system_id, component_id, chan, msg, water_speed->water_speed_true, water_speed->water_speed_relative);
}

/**
 * @brief Send a water_speed message
 * @param chan MAVLink channel to send the message
 *
 * @param water_speed_true [knots] Speed in knots
 * @param water_speed_relative [km/h] Speed relative to water in Kilometers/hr
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_water_speed_send(mavlink_channel_t chan, float water_speed_true, float water_speed_relative)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WATER_SPEED_LEN];
    _mav_put_float(buf, 0, water_speed_true);
    _mav_put_float(buf, 4, water_speed_relative);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_SPEED, buf, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
#else
    mavlink_water_speed_t packet;
    packet.water_speed_true = water_speed_true;
    packet.water_speed_relative = water_speed_relative;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_SPEED, (const char *)&packet, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
#endif
}

/**
 * @brief Send a water_speed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_water_speed_send_struct(mavlink_channel_t chan, const mavlink_water_speed_t* water_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_water_speed_send(chan, water_speed->water_speed_true, water_speed->water_speed_relative);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_SPEED, (const char *)water_speed, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
#endif
}

#if MAVLINK_MSG_ID_WATER_SPEED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_water_speed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float water_speed_true, float water_speed_relative)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, water_speed_true);
    _mav_put_float(buf, 4, water_speed_relative);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_SPEED, buf, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
#else
    mavlink_water_speed_t *packet = (mavlink_water_speed_t *)msgbuf;
    packet->water_speed_true = water_speed_true;
    packet->water_speed_relative = water_speed_relative;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WATER_SPEED, (const char *)packet, MAVLINK_MSG_ID_WATER_SPEED_MIN_LEN, MAVLINK_MSG_ID_WATER_SPEED_LEN, MAVLINK_MSG_ID_WATER_SPEED_CRC);
#endif
}
#endif

#endif

// MESSAGE WATER_SPEED UNPACKING


/**
 * @brief Get field water_speed_true from water_speed message
 *
 * @return [knots] Speed in knots
 */
static inline float mavlink_msg_water_speed_get_water_speed_true(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field water_speed_relative from water_speed message
 *
 * @return [km/h] Speed relative to water in Kilometers/hr
 */
static inline float mavlink_msg_water_speed_get_water_speed_relative(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a water_speed message into a struct
 *
 * @param msg The message to decode
 * @param water_speed C-struct to decode the message contents into
 */
static inline void mavlink_msg_water_speed_decode(const mavlink_message_t* msg, mavlink_water_speed_t* water_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    water_speed->water_speed_true = mavlink_msg_water_speed_get_water_speed_true(msg);
    water_speed->water_speed_relative = mavlink_msg_water_speed_get_water_speed_relative(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WATER_SPEED_LEN? msg->len : MAVLINK_MSG_ID_WATER_SPEED_LEN;
        memset(water_speed, 0, MAVLINK_MSG_ID_WATER_SPEED_LEN);
    memcpy(water_speed, _MAV_PAYLOAD(msg), len);
#endif
}
