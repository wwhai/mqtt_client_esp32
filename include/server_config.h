#ifndef __SERVER_CONFIG_H__
#define __SERVER_CONFIG_H__
//******************NETWORK-CONFIG*****************
// WIFI SSID
#define WIFI_SSID "deep-dark-in"
// WIFI 密码
#define WIFI_PASSWORD "665544332211"
//******************SERVER-CONFIG******************
// MQTT Server
#define MQTT_HOST IPAddress(10, 168, 1, 159)
// MQTT 端口
#define MQTT_PORT 1883

//********************MQTT-ARGS********************
// 平台下发的客户端ID
const char *MQTT_CLIENTID = "de0b91d567690bd4";
// 平台下发的客户端Username
const char *MQTT_USERNAME = "34c6e890c4ecbfd5";
// 平台下发的客户端Password
const char *MQTT_PASSWORD = "6bae1bd3f4a3eae4";
// 平台下发的客户端 token
const char *TOKEN = "1c0622553c662030";
// 下行数据 Topic
const char *S2C_TOPIC = "/device/1c0622553c662030/c2s";
// 上行数据 Topic
const char *C2S_TOPICTopic = "/device/1c0622553c662030/s2c";
// 状态同步
const char *STATE_TOPIC = "/device/1c0622553c662030/state";

#endif