/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/24/2018 17:17:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <Arduino.h>
#include <time.h>

#include "kv.h"
#include "ble.h"
#include "wifi_conf.h"

/*const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 3600;
const int   daylightOffset_sec = 3600;*/ 

void setup()
{
  Serial.begin(115200);

  initKV();
  initBLE();
  initWifi();
  
  xTaskCreate(BLETask, "BLETask", 10000, NULL, 1, NULL);
  xTaskCreate(WifiTask, "WifiTask", 10000, NULL, 1, NULL);
}

void loop()
{
  delay(10000);
}
