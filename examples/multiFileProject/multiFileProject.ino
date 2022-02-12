/****************************************************************************************************************************
  multiFileProject.ino
  For ESP8266, ESP32 and STM32 with built-in LAN8742A Ethernet (Nucleo-144, DISCOVERY, etc)

  AsyncHTTPSRequest_Generic is a library for the ESP8266, ESP32 and currently STM32 run built-in Ethernet WebServer

  Based on and modified from AsyncHTTPSRequest Library (https://github.com/boblemaire/AsyncHTTPSRequest)

  Built by Khoi Hoang https://github.com/khoih-prog/AsyncHTTPSRequest_Generic
  Licensed under MIT license
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#if !( defined(ESP32) )
  #error This code is intended to run on the ESP32 platform! Please check your Tools->Board setting.
#endif

#define ASYNC_HTTPS_REQUEST_GENERIC_VERSION_MIN_TARGET      "AsyncHTTPSRequest_Generic v1.4.0"
#define ASYNC_HTTPS_REQUEST_GENERIC_VERSION_MIN             1004000

#include "multiFileProject.h"

#include <WiFi.h>

// Can be included as many times as necessary, without `Multiple Definitions` Linker Error
#include "AsyncHTTPSRequest_Generic.h"

void setup() 
{
  Serial.begin(115200);
  while (!Serial);
  
  Serial.println(F("\nStart multiFileProject"));
  Serial.println(ASYNC_HTTPS_REQUEST_GENERIC_VERSION);

#if defined(ASYNC_HTTPS_REQUEST_GENERIC_VERSION_MIN)
  if (ASYNC_HTTPS_REQUEST_GENERIC_VERSION_INT < ASYNC_HTTPS_REQUEST_GENERIC_VERSION_MIN)
  {
    Serial.print(F("Warning. Must use this example on Version equal or later than : "));
    Serial.println(ASYNC_HTTPS_REQUEST_GENERIC_VERSION_MIN_TARGET);
  }
#endif
}

void loop() 
{
  // put your main code here, to run repeatedly:
}