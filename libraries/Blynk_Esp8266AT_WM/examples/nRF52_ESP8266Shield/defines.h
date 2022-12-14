/****************************************************************************************************************************
   defines.h for nRF52_ESP8266Shield.ino
   
   Blynk_Esp8266AT_WM is a library for the Mega, Teensy, SAM DUE and SAMD boards (https://github.com/khoih-prog/Blynk_Esp8266AT_WM)
   to enable easy configuration/reconfiguration and autoconnect/autoreconnect of WiFi/Blynk

   Forked from Blynk library v0.6.1 https://github.com/blynkkk/blynk-library/releases
   Built by Khoi Hoang https://github.com/khoih-prog/Blynk_WM
   Licensed under MIT license
   Version: 1.0.5

   Version Modified By   Date        Comments
   ------- -----------  ----------   -----------
    1.0.0   K Hoang      16/02/2020  Initial coding
    1.0.1   K Hoang      17/02/2019  Add checksum, fix bug
    1.0.2   K Hoang      22/02/2019  Add support to SAMD boards
    1.0.3   K Hoang      03/03/2019  Add support to STM32 boards, except STM32F0
    1.0.4   K Hoang      13/03/2019  Add SAM DUE support. Enhance GUI.
    1.0.5   K Hoang      23/06/2019  Add Adafruit SAMD21/SAMD51 and nRF52 support, DRD, MultiWiFi features.
                                     WPA2 SSID PW to 63 chars. Permit special chars such as !,@,#,$,%,^,&,* into data fields.
 *****************************************************************************************************************************/

#ifndef defines_h
#define defines_h

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT                   Serial

// Debug level, 0-3
#define BLYNK_WM_DEBUG                0

#define USE_NEW_WEBSERVER_VERSION     true  //false
#define _ESP_AT_LOGLEVEL_             0

/* Comment this out to disable prints and save space */
#define DRD_GENERIC_DEBUG         true

/* Comment this out to disable prints and save space */
#define ESP_AT_DEBUG_OUTPUT Serial

#define ESP_AT_DEBUG    true

// Uncomment to use ESP32-AT commands
//#define USE_ESP32_AT      true

#if ( defined(NRF52840_FEATHER) || defined(NRF52832_FEATHER) || defined(NRF52_SERIES) || defined(ARDUINO_NRF52_ADAFRUIT) || \
      defined(NRF52840_FEATHER_SENSE) || defined(NRF52840_ITSYBITSY) || defined(NRF52840_CIRCUITPLAY) || defined(NRF52840_CLUE) || \
      defined(NRF52840_METRO) || defined(NRF52840_PCA10056) || defined(PARTICLE_XENON) || defined(NINA_B302_ublox) || defined(NINA_B112_ublox) )
#if defined(ESP8266_AT_USE_NRF528XX)
#undef ESP8266_AT_USE_NRF528XX
#endif
#define ESP8266_AT_USE_NRF528XX      true
#else
#error This code is intended to run only on the nRF52 boards ! Please check your Tools->Board setting.
#endif

#if (ESP8266_AT_USE_NRF528XX)

#if defined(NRF52840_FEATHER)
#define BOARD_TYPE      "NRF52840_FEATHER_EXPRESS"
#elif defined(NRF52832_FEATHER)
#define BOARD_TYPE      "NRF52832_FEATHER"
#elif defined(NRF52840_FEATHER_SENSE)
#define BOARD_TYPE      "NRF52840_FEATHER_SENSE"
#elif defined(NRF52840_ITSYBITSY)
#define BOARD_TYPE      "NRF52840_ITSYBITSY_EXPRESS"
#elif defined(NRF52840_CIRCUITPLAY)
#define BOARD_TYPE      "NRF52840_CIRCUIT_PLAYGROUND"
#elif defined(NRF52840_CLUE)
#define BOARD_TYPE      "NRF52840_CLUE"
#elif defined(NRF52840_METRO)
#define BOARD_TYPE      "NRF52840_METRO_EXPRESS"
#elif defined(NRF52840_PCA10056)
#define BOARD_TYPE      "NORDIC_NRF52840DK"
#elif defined(NINA_B302_ublox)
#define BOARD_TYPE      "NINA_B302_ublox"
#elif defined(NINA_B112_ublox)
#define BOARD_TYPE      "NINA_B112_ublox"
#elif defined(PARTICLE_XENON)
#define BOARD_TYPE      "PARTICLE_XENON"
#elif defined(MDBT50Q_RX)
#define BOARD_TYPE      "RAYTAC_MDBT50Q_RX"
#elif defined(ARDUINO_NRF52_ADAFRUIT)
#define BOARD_TYPE      "ARDUINO_NRF52_ADAFRUIT"
#else
#define BOARD_TYPE      "nRF52 Unknown"
#endif

#define EspSerial Serial1

#endif    //ESP8266_AT_USE_NRF528XX

#include <ESP8266_Lib.h>

#define USE_BLYNK_WM      true
//#define USE_BLYNK_WM      false

#if USE_BLYNK_WM
#include <BlynkSimpleShieldEsp8266_nRF52_WM.h>
#else
#include <BlynkSimpleShieldEsp8266_nRF52.h>

#if defined(BLYNK_INFO_DEVICE)
  #undef BLYNK_INFO_DEVICE
#endif  
#define BLYNK_INFO_DEVICE       BOARD_TYPE

#define USE_LOCAL_SERVER      true

#if USE_LOCAL_SERVER
char auth[] = "****";
String BlynkServer = "account.duckdns.org";
//String BlynkServer = "192.168.2.112";
#else
char auth[] = "****";
String BlynkServer = "blynk-cloud.com";
#endif

#define BLYNK_SERVER_HARDWARE_PORT    8080

// Your WiFi credentials.
char ssid[] = "****";
char pass[] = "****";

#endif

#define HOST_NAME   "nRF52_ESP_AT"

// SSID and PW for Config Portal
String portal_ssid      = "CfgPrtl-SSID";
String portal_password  = "CfgPrtl-PW";

// Your nRF52 <-> ESP8266 baud rate:
#define ESP8266_BAUD 115200

#endif      //defines_h
