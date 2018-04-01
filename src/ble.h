/*
 * =====================================================================================
 *
 *       Filename:  ble.h
 *
 *    Description:  e
 *
 *        Version:  1.0
 *        Created:  03/31/2018 09:34:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef BLE_H_
#define BLE_H_

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include <BLE2902.h>

void initBLE();
BLEService *newService(const char* name);
void BLETask(void * parameter);

#endif
