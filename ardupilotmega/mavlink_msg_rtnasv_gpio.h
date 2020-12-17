#pragma once
// MESSAGE RTNASV_GPIO PACKING

#define MAVLINK_MSG_ID_RTNASV_GPIO 224

MAVPACKED(
typedef struct __mavlink_rtnasv_gpio_t {
 uint8_t gpio0; /*<  TCA9534A#1*/
 uint8_t gpio1; /*<  TCA9534A#2*/
}) mavlink_rtnasv_gpio_t;

#define MAVLINK_MSG_ID_RTNASV_GPIO_LEN 2
#define MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN 2
#define MAVLINK_MSG_ID_224_LEN 2
#define MAVLINK_MSG_ID_224_MIN_LEN 2

#define MAVLINK_MSG_ID_RTNASV_GPIO_CRC 184
#define MAVLINK_MSG_ID_224_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTNASV_GPIO { \
    224, \
    "RTNASV_GPIO", \
    2, \
    {  { "gpio0", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rtnasv_gpio_t, gpio0) }, \
         { "gpio1", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_rtnasv_gpio_t, gpio1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTNASV_GPIO { \
    "RTNASV_GPIO", \
    2, \
    {  { "gpio0", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rtnasv_gpio_t, gpio0) }, \
         { "gpio1", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_rtnasv_gpio_t, gpio1) }, \
         } \
}
#endif

/**
 * @brief Pack a rtnasv_gpio message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gpio0  TCA9534A#1
 * @param gpio1  TCA9534A#2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtnasv_gpio_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t gpio0, uint8_t gpio1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_GPIO_LEN];
    _mav_put_uint8_t(buf, 0, gpio0);
    _mav_put_uint8_t(buf, 1, gpio1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTNASV_GPIO_LEN);
#else
    mavlink_rtnasv_gpio_t packet;
    packet.gpio0 = gpio0;
    packet.gpio1 = gpio1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTNASV_GPIO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTNASV_GPIO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
}

/**
 * @brief Pack a rtnasv_gpio message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gpio0  TCA9534A#1
 * @param gpio1  TCA9534A#2
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtnasv_gpio_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t gpio0,uint8_t gpio1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_GPIO_LEN];
    _mav_put_uint8_t(buf, 0, gpio0);
    _mav_put_uint8_t(buf, 1, gpio1);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTNASV_GPIO_LEN);
#else
    mavlink_rtnasv_gpio_t packet;
    packet.gpio0 = gpio0;
    packet.gpio1 = gpio1;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTNASV_GPIO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTNASV_GPIO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
}

/**
 * @brief Encode a rtnasv_gpio struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtnasv_gpio C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtnasv_gpio_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtnasv_gpio_t* rtnasv_gpio)
{
    return mavlink_msg_rtnasv_gpio_pack(system_id, component_id, msg, rtnasv_gpio->gpio0, rtnasv_gpio->gpio1);
}

/**
 * @brief Encode a rtnasv_gpio struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtnasv_gpio C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtnasv_gpio_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtnasv_gpio_t* rtnasv_gpio)
{
    return mavlink_msg_rtnasv_gpio_pack_chan(system_id, component_id, chan, msg, rtnasv_gpio->gpio0, rtnasv_gpio->gpio1);
}

/**
 * @brief Send a rtnasv_gpio message
 * @param chan MAVLink channel to send the message
 *
 * @param gpio0  TCA9534A#1
 * @param gpio1  TCA9534A#2
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtnasv_gpio_send(mavlink_channel_t chan, uint8_t gpio0, uint8_t gpio1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_GPIO_LEN];
    _mav_put_uint8_t(buf, 0, gpio0);
    _mav_put_uint8_t(buf, 1, gpio1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_GPIO, buf, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
#else
    mavlink_rtnasv_gpio_t packet;
    packet.gpio0 = gpio0;
    packet.gpio1 = gpio1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_GPIO, (const char *)&packet, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
#endif
}

/**
 * @brief Send a rtnasv_gpio message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtnasv_gpio_send_struct(mavlink_channel_t chan, const mavlink_rtnasv_gpio_t* rtnasv_gpio)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtnasv_gpio_send(chan, rtnasv_gpio->gpio0, rtnasv_gpio->gpio1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_GPIO, (const char *)rtnasv_gpio, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTNASV_GPIO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtnasv_gpio_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t gpio0, uint8_t gpio1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, gpio0);
    _mav_put_uint8_t(buf, 1, gpio1);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_GPIO, buf, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
#else
    mavlink_rtnasv_gpio_t *packet = (mavlink_rtnasv_gpio_t *)msgbuf;
    packet->gpio0 = gpio0;
    packet->gpio1 = gpio1;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_GPIO, (const char *)packet, MAVLINK_MSG_ID_RTNASV_GPIO_MIN_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_LEN, MAVLINK_MSG_ID_RTNASV_GPIO_CRC);
#endif
}
#endif

#endif

// MESSAGE RTNASV_GPIO UNPACKING


/**
 * @brief Get field gpio0 from rtnasv_gpio message
 *
 * @return  TCA9534A#1
 */
static inline uint8_t mavlink_msg_rtnasv_gpio_get_gpio0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field gpio1 from rtnasv_gpio message
 *
 * @return  TCA9534A#2
 */
static inline uint8_t mavlink_msg_rtnasv_gpio_get_gpio1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a rtnasv_gpio message into a struct
 *
 * @param msg The message to decode
 * @param rtnasv_gpio C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtnasv_gpio_decode(const mavlink_message_t* msg, mavlink_rtnasv_gpio_t* rtnasv_gpio)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtnasv_gpio->gpio0 = mavlink_msg_rtnasv_gpio_get_gpio0(msg);
    rtnasv_gpio->gpio1 = mavlink_msg_rtnasv_gpio_get_gpio1(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTNASV_GPIO_LEN? msg->len : MAVLINK_MSG_ID_RTNASV_GPIO_LEN;
        memset(rtnasv_gpio, 0, MAVLINK_MSG_ID_RTNASV_GPIO_LEN);
    memcpy(rtnasv_gpio, _MAV_PAYLOAD(msg), len);
#endif
}
