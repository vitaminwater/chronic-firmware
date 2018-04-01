/*
 * =====================================================================================
 *
 *       Filename:  kv.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/31/2018 10:28:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef KV_H_
#define KV_H_

#include <Arduino.h>

void initKV();
void setString(const char *key, String value);
String getString(const char *key);

#endif
