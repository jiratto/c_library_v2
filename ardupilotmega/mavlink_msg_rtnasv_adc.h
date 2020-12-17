#pragma once
// MESSAGE RTNASV_ADC PACKING

#define MAVLINK_MSG_ID_RTNASV_ADC 223

MAVPACKED(
typedef struct __mavlink_rtnasv_adc_t {
 uint16_t adc1; /*< [mv] ADC output 1.(address:0x48,P101)*/
 uint16_t adc2; /*< [mv] ADC output 2.(address:0x48,P105)*/
 uint16_t adc3; /*< [mv] ADC output 3.(address:0x48,P107)*/
 uint16_t adc4; /*< [mv] ADC output 4.(address:0x48,P109)*/
 uint16_t adc5; /*< [mv] ADC output 5.(address:0x49,P111)*/
 uint16_t adc6; /*< [mv] ADC output 6.(address:0x49,P113)*/
 uint16_t adc7; /*< [mv] ADC output 7.(address:0x49,P115)*/
 uint16_t adc8; /*< [mv] ADC output 8.(address:0x49,P117)*/
}) mavlink_rtnasv_adc_t;

#define MAVLINK_MSG_ID_RTNASV_ADC_LEN 16
#define MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN 16
#define MAVLINK_MSG_ID_223_LEN 16
#define MAVLINK_MSG_ID_223_MIN_LEN 16

#define MAVLINK_MSG_ID_RTNASV_ADC_CRC 55
#define MAVLINK_MSG_ID_223_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTNASV_ADC { \
    223, \
    "RTNASV_ADC", \
    8, \
    {  { "adc1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rtnasv_adc_t, adc1) }, \
         { "adc2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rtnasv_adc_t, adc2) }, \
         { "adc3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtnasv_adc_t, adc3) }, \
         { "adc4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_rtnasv_adc_t, adc4) }, \
         { "adc5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_rtnasv_adc_t, adc5) }, \
         { "adc6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_rtnasv_adc_t, adc6) }, \
         { "adc7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_rtnasv_adc_t, adc7) }, \
         { "adc8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rtnasv_adc_t, adc8) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTNASV_ADC { \
    "RTNASV_ADC", \
    8, \
    {  { "adc1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rtnasv_adc_t, adc1) }, \
         { "adc2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rtnasv_adc_t, adc2) }, \
         { "adc3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtnasv_adc_t, adc3) }, \
         { "adc4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_rtnasv_adc_t, adc4) }, \
         { "adc5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_rtnasv_adc_t, adc5) }, \
         { "adc6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_rtnasv_adc_t, adc6) }, \
         { "adc7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_rtnasv_adc_t, adc7) }, \
         { "adc8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rtnasv_adc_t, adc8) }, \
         } \
}
#endif

/**
 * @brief Pack a rtnasv_adc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param adc1 [mv] ADC output 1.(address:0x48,P101)
 * @param adc2 [mv] ADC output 2.(address:0x48,P105)
 * @param adc3 [mv] ADC output 3.(address:0x48,P107)
 * @param adc4 [mv] ADC output 4.(address:0x48,P109)
 * @param adc5 [mv] ADC output 5.(address:0x49,P111)
 * @param adc6 [mv] ADC output 6.(address:0x49,P113)
 * @param adc7 [mv] ADC output 7.(address:0x49,P115)
 * @param adc8 [mv] ADC output 8.(address:0x49,P117)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t adc1, uint16_t adc2, uint16_t adc3, uint16_t adc4, uint16_t adc5, uint16_t adc6, uint16_t adc7, uint16_t adc8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_ADC_LEN];
    _mav_put_uint16_t(buf, 0, adc1);
    _mav_put_uint16_t(buf, 2, adc2);
    _mav_put_uint16_t(buf, 4, adc3);
    _mav_put_uint16_t(buf, 6, adc4);
    _mav_put_uint16_t(buf, 8, adc5);
    _mav_put_uint16_t(buf, 10, adc6);
    _mav_put_uint16_t(buf, 12, adc7);
    _mav_put_uint16_t(buf, 14, adc8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTNASV_ADC_LEN);
#else
    mavlink_rtnasv_adc_t packet;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.adc4 = adc4;
    packet.adc5 = adc5;
    packet.adc6 = adc6;
    packet.adc7 = adc7;
    packet.adc8 = adc8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTNASV_ADC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTNASV_ADC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
}

/**
 * @brief Pack a rtnasv_adc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param adc1 [mv] ADC output 1.(address:0x48,P101)
 * @param adc2 [mv] ADC output 2.(address:0x48,P105)
 * @param adc3 [mv] ADC output 3.(address:0x48,P107)
 * @param adc4 [mv] ADC output 4.(address:0x48,P109)
 * @param adc5 [mv] ADC output 5.(address:0x49,P111)
 * @param adc6 [mv] ADC output 6.(address:0x49,P113)
 * @param adc7 [mv] ADC output 7.(address:0x49,P115)
 * @param adc8 [mv] ADC output 8.(address:0x49,P117)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t adc1,uint16_t adc2,uint16_t adc3,uint16_t adc4,uint16_t adc5,uint16_t adc6,uint16_t adc7,uint16_t adc8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_ADC_LEN];
    _mav_put_uint16_t(buf, 0, adc1);
    _mav_put_uint16_t(buf, 2, adc2);
    _mav_put_uint16_t(buf, 4, adc3);
    _mav_put_uint16_t(buf, 6, adc4);
    _mav_put_uint16_t(buf, 8, adc5);
    _mav_put_uint16_t(buf, 10, adc6);
    _mav_put_uint16_t(buf, 12, adc7);
    _mav_put_uint16_t(buf, 14, adc8);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTNASV_ADC_LEN);
#else
    mavlink_rtnasv_adc_t packet;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.adc4 = adc4;
    packet.adc5 = adc5;
    packet.adc6 = adc6;
    packet.adc7 = adc7;
    packet.adc8 = adc8;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTNASV_ADC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTNASV_ADC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
}

/**
 * @brief Encode a rtnasv_adc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtnasv_adc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtnasv_adc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtnasv_adc_t* rtnasv_adc)
{
    return mavlink_msg_rtnasv_adc_pack(system_id, component_id, msg, rtnasv_adc->adc1, rtnasv_adc->adc2, rtnasv_adc->adc3, rtnasv_adc->adc4, rtnasv_adc->adc5, rtnasv_adc->adc6, rtnasv_adc->adc7, rtnasv_adc->adc8);
}

/**
 * @brief Encode a rtnasv_adc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtnasv_adc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtnasv_adc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtnasv_adc_t* rtnasv_adc)
{
    return mavlink_msg_rtnasv_adc_pack_chan(system_id, component_id, chan, msg, rtnasv_adc->adc1, rtnasv_adc->adc2, rtnasv_adc->adc3, rtnasv_adc->adc4, rtnasv_adc->adc5, rtnasv_adc->adc6, rtnasv_adc->adc7, rtnasv_adc->adc8);
}

/**
 * @brief Send a rtnasv_adc message
 * @param chan MAVLink channel to send the message
 *
 * @param adc1 [mv] ADC output 1.(address:0x48,P101)
 * @param adc2 [mv] ADC output 2.(address:0x48,P105)
 * @param adc3 [mv] ADC output 3.(address:0x48,P107)
 * @param adc4 [mv] ADC output 4.(address:0x48,P109)
 * @param adc5 [mv] ADC output 5.(address:0x49,P111)
 * @param adc6 [mv] ADC output 6.(address:0x49,P113)
 * @param adc7 [mv] ADC output 7.(address:0x49,P115)
 * @param adc8 [mv] ADC output 8.(address:0x49,P117)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtnasv_adc_send(mavlink_channel_t chan, uint16_t adc1, uint16_t adc2, uint16_t adc3, uint16_t adc4, uint16_t adc5, uint16_t adc6, uint16_t adc7, uint16_t adc8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTNASV_ADC_LEN];
    _mav_put_uint16_t(buf, 0, adc1);
    _mav_put_uint16_t(buf, 2, adc2);
    _mav_put_uint16_t(buf, 4, adc3);
    _mav_put_uint16_t(buf, 6, adc4);
    _mav_put_uint16_t(buf, 8, adc5);
    _mav_put_uint16_t(buf, 10, adc6);
    _mav_put_uint16_t(buf, 12, adc7);
    _mav_put_uint16_t(buf, 14, adc8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_ADC, buf, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
#else
    mavlink_rtnasv_adc_t packet;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.adc4 = adc4;
    packet.adc5 = adc5;
    packet.adc6 = adc6;
    packet.adc7 = adc7;
    packet.adc8 = adc8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_ADC, (const char *)&packet, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
#endif
}

/**
 * @brief Send a rtnasv_adc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtnasv_adc_send_struct(mavlink_channel_t chan, const mavlink_rtnasv_adc_t* rtnasv_adc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtnasv_adc_send(chan, rtnasv_adc->adc1, rtnasv_adc->adc2, rtnasv_adc->adc3, rtnasv_adc->adc4, rtnasv_adc->adc5, rtnasv_adc->adc6, rtnasv_adc->adc7, rtnasv_adc->adc8);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_ADC, (const char *)rtnasv_adc, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTNASV_ADC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtnasv_adc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t adc1, uint16_t adc2, uint16_t adc3, uint16_t adc4, uint16_t adc5, uint16_t adc6, uint16_t adc7, uint16_t adc8)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, adc1);
    _mav_put_uint16_t(buf, 2, adc2);
    _mav_put_uint16_t(buf, 4, adc3);
    _mav_put_uint16_t(buf, 6, adc4);
    _mav_put_uint16_t(buf, 8, adc5);
    _mav_put_uint16_t(buf, 10, adc6);
    _mav_put_uint16_t(buf, 12, adc7);
    _mav_put_uint16_t(buf, 14, adc8);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_ADC, buf, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
#else
    mavlink_rtnasv_adc_t *packet = (mavlink_rtnasv_adc_t *)msgbuf;
    packet->adc1 = adc1;
    packet->adc2 = adc2;
    packet->adc3 = adc3;
    packet->adc4 = adc4;
    packet->adc5 = adc5;
    packet->adc6 = adc6;
    packet->adc7 = adc7;
    packet->adc8 = adc8;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTNASV_ADC, (const char *)packet, MAVLINK_MSG_ID_RTNASV_ADC_MIN_LEN, MAVLINK_MSG_ID_RTNASV_ADC_LEN, MAVLINK_MSG_ID_RTNASV_ADC_CRC);
#endif
}
#endif

#endif

// MESSAGE RTNASV_ADC UNPACKING


/**
 * @brief Get field adc1 from rtnasv_adc message
 *
 * @return [mv] ADC output 1.(address:0x48,P101)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field adc2 from rtnasv_adc message
 *
 * @return [mv] ADC output 2.(address:0x48,P105)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field adc3 from rtnasv_adc message
 *
 * @return [mv] ADC output 3.(address:0x48,P107)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field adc4 from rtnasv_adc message
 *
 * @return [mv] ADC output 4.(address:0x48,P109)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field adc5 from rtnasv_adc message
 *
 * @return [mv] ADC output 5.(address:0x49,P111)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field adc6 from rtnasv_adc message
 *
 * @return [mv] ADC output 6.(address:0x49,P113)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field adc7 from rtnasv_adc message
 *
 * @return [mv] ADC output 7.(address:0x49,P115)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field adc8 from rtnasv_adc message
 *
 * @return [mv] ADC output 8.(address:0x49,P117)
 */
static inline uint16_t mavlink_msg_rtnasv_adc_get_adc8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Decode a rtnasv_adc message into a struct
 *
 * @param msg The message to decode
 * @param rtnasv_adc C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtnasv_adc_decode(const mavlink_message_t* msg, mavlink_rtnasv_adc_t* rtnasv_adc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtnasv_adc->adc1 = mavlink_msg_rtnasv_adc_get_adc1(msg);
    rtnasv_adc->adc2 = mavlink_msg_rtnasv_adc_get_adc2(msg);
    rtnasv_adc->adc3 = mavlink_msg_rtnasv_adc_get_adc3(msg);
    rtnasv_adc->adc4 = mavlink_msg_rtnasv_adc_get_adc4(msg);
    rtnasv_adc->adc5 = mavlink_msg_rtnasv_adc_get_adc5(msg);
    rtnasv_adc->adc6 = mavlink_msg_rtnasv_adc_get_adc6(msg);
    rtnasv_adc->adc7 = mavlink_msg_rtnasv_adc_get_adc7(msg);
    rtnasv_adc->adc8 = mavlink_msg_rtnasv_adc_get_adc8(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTNASV_ADC_LEN? msg->len : MAVLINK_MSG_ID_RTNASV_ADC_LEN;
        memset(rtnasv_adc, 0, MAVLINK_MSG_ID_RTNASV_ADC_LEN);
    memcpy(rtnasv_adc, _MAV_PAYLOAD(msg), len);
#endif
}
