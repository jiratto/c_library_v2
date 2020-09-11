#pragma once
// MESSAGE WEATHER_INFO PACKING

#define MAVLINK_MSG_ID_WEATHER_INFO 228


typedef struct __mavlink_weather_info_t {
 float wind_angle; /*< [degrees] Wind Angle, 0 to 359 degrees*/
 float wind_speed_true; /*< [m/s] Wind Speed True*/
 float wind_speed_relative; /*<  Wind Speed Relative*/
 float pressure_bar; /*< [bars] Barometric pressure*/
 float air_temperature; /*< [degC] Air temperature*/
 float relative_humidity; /*< [percent] Relative humidity*/
 float water_depth; /*< [meters] Water depth relative to transducer*/
 float water_temperature; /*< [degC] Water temperature*/
 float water_speed; /*< [knots] Speed of vessel relative to the water*/
 float total_miles; /*< [Nautical Miles] Total cumulative water distance*/
 float miles_since_reset; /*< [Nautical Miles] Water distance since Reset*/
} mavlink_weather_info_t;

#define MAVLINK_MSG_ID_WEATHER_INFO_LEN 44
#define MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN 44
#define MAVLINK_MSG_ID_228_LEN 44
#define MAVLINK_MSG_ID_228_MIN_LEN 44

#define MAVLINK_MSG_ID_WEATHER_INFO_CRC 79
#define MAVLINK_MSG_ID_228_CRC 79



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WEATHER_INFO { \
    228, \
    "WEATHER_INFO", \
    11, \
    {  { "wind_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_weather_info_t, wind_angle) }, \
         { "wind_speed_true", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_weather_info_t, wind_speed_true) }, \
         { "wind_speed_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_weather_info_t, wind_speed_relative) }, \
         { "pressure_bar", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_weather_info_t, pressure_bar) }, \
         { "air_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_weather_info_t, air_temperature) }, \
         { "relative_humidity", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_weather_info_t, relative_humidity) }, \
         { "water_depth", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_weather_info_t, water_depth) }, \
         { "water_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_weather_info_t, water_temperature) }, \
         { "water_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_weather_info_t, water_speed) }, \
         { "total_miles", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_weather_info_t, total_miles) }, \
         { "miles_since_reset", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_weather_info_t, miles_since_reset) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WEATHER_INFO { \
    "WEATHER_INFO", \
    11, \
    {  { "wind_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_weather_info_t, wind_angle) }, \
         { "wind_speed_true", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_weather_info_t, wind_speed_true) }, \
         { "wind_speed_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_weather_info_t, wind_speed_relative) }, \
         { "pressure_bar", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_weather_info_t, pressure_bar) }, \
         { "air_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_weather_info_t, air_temperature) }, \
         { "relative_humidity", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_weather_info_t, relative_humidity) }, \
         { "water_depth", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_weather_info_t, water_depth) }, \
         { "water_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_weather_info_t, water_temperature) }, \
         { "water_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_weather_info_t, water_speed) }, \
         { "total_miles", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_weather_info_t, total_miles) }, \
         { "miles_since_reset", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_weather_info_t, miles_since_reset) }, \
         } \
}
#endif

/**
 * @brief Pack a weather_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param wind_angle [degrees] Wind Angle, 0 to 359 degrees
 * @param wind_speed_true [m/s] Wind Speed True
 * @param wind_speed_relative  Wind Speed Relative
 * @param pressure_bar [bars] Barometric pressure
 * @param air_temperature [degC] Air temperature
 * @param relative_humidity [percent] Relative humidity
 * @param water_depth [meters] Water depth relative to transducer
 * @param water_temperature [degC] Water temperature
 * @param water_speed [knots] Speed of vessel relative to the water
 * @param total_miles [Nautical Miles] Total cumulative water distance
 * @param miles_since_reset [Nautical Miles] Water distance since Reset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float wind_angle, float wind_speed_true, float wind_speed_relative, float pressure_bar, float air_temperature, float relative_humidity, float water_depth, float water_temperature, float water_speed, float total_miles, float miles_since_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_INFO_LEN];
    _mav_put_float(buf, 0, wind_angle);
    _mav_put_float(buf, 4, wind_speed_true);
    _mav_put_float(buf, 8, wind_speed_relative);
    _mav_put_float(buf, 12, pressure_bar);
    _mav_put_float(buf, 16, air_temperature);
    _mav_put_float(buf, 20, relative_humidity);
    _mav_put_float(buf, 24, water_depth);
    _mav_put_float(buf, 28, water_temperature);
    _mav_put_float(buf, 32, water_speed);
    _mav_put_float(buf, 36, total_miles);
    _mav_put_float(buf, 40, miles_since_reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_INFO_LEN);
#else
    mavlink_weather_info_t packet;
    packet.wind_angle = wind_angle;
    packet.wind_speed_true = wind_speed_true;
    packet.wind_speed_relative = wind_speed_relative;
    packet.pressure_bar = pressure_bar;
    packet.air_temperature = air_temperature;
    packet.relative_humidity = relative_humidity;
    packet.water_depth = water_depth;
    packet.water_temperature = water_temperature;
    packet.water_speed = water_speed;
    packet.total_miles = total_miles;
    packet.miles_since_reset = miles_since_reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEATHER_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
}

/**
 * @brief Pack a weather_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wind_angle [degrees] Wind Angle, 0 to 359 degrees
 * @param wind_speed_true [m/s] Wind Speed True
 * @param wind_speed_relative  Wind Speed Relative
 * @param pressure_bar [bars] Barometric pressure
 * @param air_temperature [degC] Air temperature
 * @param relative_humidity [percent] Relative humidity
 * @param water_depth [meters] Water depth relative to transducer
 * @param water_temperature [degC] Water temperature
 * @param water_speed [knots] Speed of vessel relative to the water
 * @param total_miles [Nautical Miles] Total cumulative water distance
 * @param miles_since_reset [Nautical Miles] Water distance since Reset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_weather_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float wind_angle,float wind_speed_true,float wind_speed_relative,float pressure_bar,float air_temperature,float relative_humidity,float water_depth,float water_temperature,float water_speed,float total_miles,float miles_since_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_INFO_LEN];
    _mav_put_float(buf, 0, wind_angle);
    _mav_put_float(buf, 4, wind_speed_true);
    _mav_put_float(buf, 8, wind_speed_relative);
    _mav_put_float(buf, 12, pressure_bar);
    _mav_put_float(buf, 16, air_temperature);
    _mav_put_float(buf, 20, relative_humidity);
    _mav_put_float(buf, 24, water_depth);
    _mav_put_float(buf, 28, water_temperature);
    _mav_put_float(buf, 32, water_speed);
    _mav_put_float(buf, 36, total_miles);
    _mav_put_float(buf, 40, miles_since_reset);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WEATHER_INFO_LEN);
#else
    mavlink_weather_info_t packet;
    packet.wind_angle = wind_angle;
    packet.wind_speed_true = wind_speed_true;
    packet.wind_speed_relative = wind_speed_relative;
    packet.pressure_bar = pressure_bar;
    packet.air_temperature = air_temperature;
    packet.relative_humidity = relative_humidity;
    packet.water_depth = water_depth;
    packet.water_temperature = water_temperature;
    packet.water_speed = water_speed;
    packet.total_miles = total_miles;
    packet.miles_since_reset = miles_since_reset;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WEATHER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WEATHER_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
}

/**
 * @brief Encode a weather_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param weather_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_weather_info_t* weather_info)
{
    return mavlink_msg_weather_info_pack(system_id, component_id, msg, weather_info->wind_angle, weather_info->wind_speed_true, weather_info->wind_speed_relative, weather_info->pressure_bar, weather_info->air_temperature, weather_info->relative_humidity, weather_info->water_depth, weather_info->water_temperature, weather_info->water_speed, weather_info->total_miles, weather_info->miles_since_reset);
}

/**
 * @brief Encode a weather_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param weather_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_weather_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_weather_info_t* weather_info)
{
    return mavlink_msg_weather_info_pack_chan(system_id, component_id, chan, msg, weather_info->wind_angle, weather_info->wind_speed_true, weather_info->wind_speed_relative, weather_info->pressure_bar, weather_info->air_temperature, weather_info->relative_humidity, weather_info->water_depth, weather_info->water_temperature, weather_info->water_speed, weather_info->total_miles, weather_info->miles_since_reset);
}

/**
 * @brief Send a weather_info message
 * @param chan MAVLink channel to send the message
 *
 * @param wind_angle [degrees] Wind Angle, 0 to 359 degrees
 * @param wind_speed_true [m/s] Wind Speed True
 * @param wind_speed_relative  Wind Speed Relative
 * @param pressure_bar [bars] Barometric pressure
 * @param air_temperature [degC] Air temperature
 * @param relative_humidity [percent] Relative humidity
 * @param water_depth [meters] Water depth relative to transducer
 * @param water_temperature [degC] Water temperature
 * @param water_speed [knots] Speed of vessel relative to the water
 * @param total_miles [Nautical Miles] Total cumulative water distance
 * @param miles_since_reset [Nautical Miles] Water distance since Reset
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_weather_info_send(mavlink_channel_t chan, float wind_angle, float wind_speed_true, float wind_speed_relative, float pressure_bar, float air_temperature, float relative_humidity, float water_depth, float water_temperature, float water_speed, float total_miles, float miles_since_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WEATHER_INFO_LEN];
    _mav_put_float(buf, 0, wind_angle);
    _mav_put_float(buf, 4, wind_speed_true);
    _mav_put_float(buf, 8, wind_speed_relative);
    _mav_put_float(buf, 12, pressure_bar);
    _mav_put_float(buf, 16, air_temperature);
    _mav_put_float(buf, 20, relative_humidity);
    _mav_put_float(buf, 24, water_depth);
    _mav_put_float(buf, 28, water_temperature);
    _mav_put_float(buf, 32, water_speed);
    _mav_put_float(buf, 36, total_miles);
    _mav_put_float(buf, 40, miles_since_reset);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_INFO, buf, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
#else
    mavlink_weather_info_t packet;
    packet.wind_angle = wind_angle;
    packet.wind_speed_true = wind_speed_true;
    packet.wind_speed_relative = wind_speed_relative;
    packet.pressure_bar = pressure_bar;
    packet.air_temperature = air_temperature;
    packet.relative_humidity = relative_humidity;
    packet.water_depth = water_depth;
    packet.water_temperature = water_temperature;
    packet.water_speed = water_speed;
    packet.total_miles = total_miles;
    packet.miles_since_reset = miles_since_reset;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_INFO, (const char *)&packet, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
#endif
}

/**
 * @brief Send a weather_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_weather_info_send_struct(mavlink_channel_t chan, const mavlink_weather_info_t* weather_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_weather_info_send(chan, weather_info->wind_angle, weather_info->wind_speed_true, weather_info->wind_speed_relative, weather_info->pressure_bar, weather_info->air_temperature, weather_info->relative_humidity, weather_info->water_depth, weather_info->water_temperature, weather_info->water_speed, weather_info->total_miles, weather_info->miles_since_reset);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_INFO, (const char *)weather_info, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_WEATHER_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_weather_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float wind_angle, float wind_speed_true, float wind_speed_relative, float pressure_bar, float air_temperature, float relative_humidity, float water_depth, float water_temperature, float water_speed, float total_miles, float miles_since_reset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, wind_angle);
    _mav_put_float(buf, 4, wind_speed_true);
    _mav_put_float(buf, 8, wind_speed_relative);
    _mav_put_float(buf, 12, pressure_bar);
    _mav_put_float(buf, 16, air_temperature);
    _mav_put_float(buf, 20, relative_humidity);
    _mav_put_float(buf, 24, water_depth);
    _mav_put_float(buf, 28, water_temperature);
    _mav_put_float(buf, 32, water_speed);
    _mav_put_float(buf, 36, total_miles);
    _mav_put_float(buf, 40, miles_since_reset);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_INFO, buf, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
#else
    mavlink_weather_info_t *packet = (mavlink_weather_info_t *)msgbuf;
    packet->wind_angle = wind_angle;
    packet->wind_speed_true = wind_speed_true;
    packet->wind_speed_relative = wind_speed_relative;
    packet->pressure_bar = pressure_bar;
    packet->air_temperature = air_temperature;
    packet->relative_humidity = relative_humidity;
    packet->water_depth = water_depth;
    packet->water_temperature = water_temperature;
    packet->water_speed = water_speed;
    packet->total_miles = total_miles;
    packet->miles_since_reset = miles_since_reset;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WEATHER_INFO, (const char *)packet, MAVLINK_MSG_ID_WEATHER_INFO_MIN_LEN, MAVLINK_MSG_ID_WEATHER_INFO_LEN, MAVLINK_MSG_ID_WEATHER_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE WEATHER_INFO UNPACKING


/**
 * @brief Get field wind_angle from weather_info message
 *
 * @return [degrees] Wind Angle, 0 to 359 degrees
 */
static inline float mavlink_msg_weather_info_get_wind_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field wind_speed_true from weather_info message
 *
 * @return [m/s] Wind Speed True
 */
static inline float mavlink_msg_weather_info_get_wind_speed_true(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field wind_speed_relative from weather_info message
 *
 * @return  Wind Speed Relative
 */
static inline float mavlink_msg_weather_info_get_wind_speed_relative(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pressure_bar from weather_info message
 *
 * @return [bars] Barometric pressure
 */
static inline float mavlink_msg_weather_info_get_pressure_bar(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field air_temperature from weather_info message
 *
 * @return [degC] Air temperature
 */
static inline float mavlink_msg_weather_info_get_air_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field relative_humidity from weather_info message
 *
 * @return [percent] Relative humidity
 */
static inline float mavlink_msg_weather_info_get_relative_humidity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field water_depth from weather_info message
 *
 * @return [meters] Water depth relative to transducer
 */
static inline float mavlink_msg_weather_info_get_water_depth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field water_temperature from weather_info message
 *
 * @return [degC] Water temperature
 */
static inline float mavlink_msg_weather_info_get_water_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field water_speed from weather_info message
 *
 * @return [knots] Speed of vessel relative to the water
 */
static inline float mavlink_msg_weather_info_get_water_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field total_miles from weather_info message
 *
 * @return [Nautical Miles] Total cumulative water distance
 */
static inline float mavlink_msg_weather_info_get_total_miles(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field miles_since_reset from weather_info message
 *
 * @return [Nautical Miles] Water distance since Reset
 */
static inline float mavlink_msg_weather_info_get_miles_since_reset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a weather_info message into a struct
 *
 * @param msg The message to decode
 * @param weather_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_weather_info_decode(const mavlink_message_t* msg, mavlink_weather_info_t* weather_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    weather_info->wind_angle = mavlink_msg_weather_info_get_wind_angle(msg);
    weather_info->wind_speed_true = mavlink_msg_weather_info_get_wind_speed_true(msg);
    weather_info->wind_speed_relative = mavlink_msg_weather_info_get_wind_speed_relative(msg);
    weather_info->pressure_bar = mavlink_msg_weather_info_get_pressure_bar(msg);
    weather_info->air_temperature = mavlink_msg_weather_info_get_air_temperature(msg);
    weather_info->relative_humidity = mavlink_msg_weather_info_get_relative_humidity(msg);
    weather_info->water_depth = mavlink_msg_weather_info_get_water_depth(msg);
    weather_info->water_temperature = mavlink_msg_weather_info_get_water_temperature(msg);
    weather_info->water_speed = mavlink_msg_weather_info_get_water_speed(msg);
    weather_info->total_miles = mavlink_msg_weather_info_get_total_miles(msg);
    weather_info->miles_since_reset = mavlink_msg_weather_info_get_miles_since_reset(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WEATHER_INFO_LEN? msg->len : MAVLINK_MSG_ID_WEATHER_INFO_LEN;
        memset(weather_info, 0, MAVLINK_MSG_ID_WEATHER_INFO_LEN);
    memcpy(weather_info, _MAV_PAYLOAD(msg), len);
#endif
}
