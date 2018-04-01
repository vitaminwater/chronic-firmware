/*
 * =====================================================================================
 *
 *       Filename:  ble.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2018 09:28:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <Arduino.h>
#include "ble.h"

#define DEVICE_NAME                         "chronic-1"

BLEServer *pServer;

class SCallbacks : public BLEServerCallbacks {

  void onConnect(BLEServer* pServer);
  void onDisconnect(BLEServer* pServer);
  
};

void SCallbacks::onConnect(BLEServer* pServer) {
  Serial.println("onConnect");
}

void SCallbacks::onDisconnect(BLEServer* pServer) {
  Serial.println("onDisconnect");
}

void initBLE() {
  BLEDevice::init(DEVICE_NAME);
  pServer = BLEDevice::createServer();
  pServer->setCallbacks(new SCallbacks());
}

BLEService *newService(const char* name) {
  return pServer->createService(name);
}

void BLETask(void * parameter) {
  Serial.println("Started BLE task");
  pServer->startAdvertising();

  while ( true ) {
    delay(10000);
  }
}
