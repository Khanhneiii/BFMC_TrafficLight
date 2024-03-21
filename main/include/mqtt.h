#ifndef _MQTT_H_
#define _MQTT_H_
#include "stdint.h"
uint8_t mqtt_app_publish(char* topic, char *publish_string);
void mqtt_app_start(void);

#endif