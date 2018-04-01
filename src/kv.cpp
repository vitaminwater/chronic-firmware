/*
 * =====================================================================================
 *
 *       Filename:  kv.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2018 10:28:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "kv.h"

#include <Arduino.h>
#include <Preferences.h>

Preferences preferences;

void initKV() {
  preferences.begin("chronic", false);
}

void setString(const char *key, String value) {
  preferences.putString(key, value);
}

String getString(const char *key) {
  return preferences.getString(key, "");
}
