#pragma once
// MESSAGE FAILSAFE_REASON PACKING

#define MAVLINK_MSG_ID_FAILSAFE_REASON 277

MAVPACKED(
typedef struct __mavlink_failsafe_reason_t {
 uint8_t fs_reason; /*<  failsafe reason*/
}) mavlink_failsafe_reason_t;

#define MAVLINK_MSG_ID_FAILSAFE_REASON_LEN 1
#define MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN 1
#define MAVLINK_MSG_ID_277_LEN 1
#define MAVLINK_MSG_ID_277_MIN_LEN 1

#define MAVLINK_MSG_ID_FAILSAFE_REASON_CRC 183
#define MAVLINK_MSG_ID_277_CRC 183



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FAILSAFE_REASON { \
    277, \
    "FAILSAFE_REASON", \
    1, \
    {  { "fs_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_failsafe_reason_t, fs_reason) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FAILSAFE_REASON { \
    "FAILSAFE_REASON", \
    1, \
    {  { "fs_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_failsafe_reason_t, fs_reason) }, \
         } \
}
#endif

/**
 * @brief Pack a failsafe_reason message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fs_reason  failsafe reason
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_failsafe_reason_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t fs_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAILSAFE_REASON_LEN];
    _mav_put_uint8_t(buf, 0, fs_reason);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN);
#else
    mavlink_failsafe_reason_t packet;
    packet.fs_reason = fs_reason;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAILSAFE_REASON;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
}

/**
 * @brief Pack a failsafe_reason message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fs_reason  failsafe reason
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_failsafe_reason_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t fs_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAILSAFE_REASON_LEN];
    _mav_put_uint8_t(buf, 0, fs_reason);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN);
#else
    mavlink_failsafe_reason_t packet;
    packet.fs_reason = fs_reason;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FAILSAFE_REASON;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
}

/**
 * @brief Encode a failsafe_reason struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param failsafe_reason C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_failsafe_reason_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_failsafe_reason_t* failsafe_reason)
{
    return mavlink_msg_failsafe_reason_pack(system_id, component_id, msg, failsafe_reason->fs_reason);
}

/**
 * @brief Encode a failsafe_reason struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param failsafe_reason C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_failsafe_reason_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_failsafe_reason_t* failsafe_reason)
{
    return mavlink_msg_failsafe_reason_pack_chan(system_id, component_id, chan, msg, failsafe_reason->fs_reason);
}

/**
 * @brief Send a failsafe_reason message
 * @param chan MAVLink channel to send the message
 *
 * @param fs_reason  failsafe reason
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_failsafe_reason_send(mavlink_channel_t chan, uint8_t fs_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FAILSAFE_REASON_LEN];
    _mav_put_uint8_t(buf, 0, fs_reason);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAILSAFE_REASON, buf, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
#else
    mavlink_failsafe_reason_t packet;
    packet.fs_reason = fs_reason;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAILSAFE_REASON, (const char *)&packet, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
#endif
}

/**
 * @brief Send a failsafe_reason message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_failsafe_reason_send_struct(mavlink_channel_t chan, const mavlink_failsafe_reason_t* failsafe_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_failsafe_reason_send(chan, failsafe_reason->fs_reason);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAILSAFE_REASON, (const char *)failsafe_reason, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
#endif
}

#if MAVLINK_MSG_ID_FAILSAFE_REASON_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_failsafe_reason_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t fs_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, fs_reason);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAILSAFE_REASON, buf, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
#else
    mavlink_failsafe_reason_t *packet = (mavlink_failsafe_reason_t *)msgbuf;
    packet->fs_reason = fs_reason;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FAILSAFE_REASON, (const char *)packet, MAVLINK_MSG_ID_FAILSAFE_REASON_MIN_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN, MAVLINK_MSG_ID_FAILSAFE_REASON_CRC);
#endif
}
#endif

#endif

// MESSAGE FAILSAFE_REASON UNPACKING


/**
 * @brief Get field fs_reason from failsafe_reason message
 *
 * @return  failsafe reason
 */
static inline uint8_t mavlink_msg_failsafe_reason_get_fs_reason(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a failsafe_reason message into a struct
 *
 * @param msg The message to decode
 * @param failsafe_reason C-struct to decode the message contents into
 */
static inline void mavlink_msg_failsafe_reason_decode(const mavlink_message_t* msg, mavlink_failsafe_reason_t* failsafe_reason)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    failsafe_reason->fs_reason = mavlink_msg_failsafe_reason_get_fs_reason(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FAILSAFE_REASON_LEN? msg->len : MAVLINK_MSG_ID_FAILSAFE_REASON_LEN;
        memset(failsafe_reason, 0, MAVLINK_MSG_ID_FAILSAFE_REASON_LEN);
    memcpy(failsafe_reason, _MAV_PAYLOAD(msg), len);
#endif
}
