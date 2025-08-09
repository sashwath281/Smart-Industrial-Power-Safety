#pragma once

// ---- Wi-Fi + Firebase (fill before upload) ----
#define WIFI_SSID       "Airtel_Nama shambave cha_5G"
#define WIFI_PASS       "Visram@1942"
#define FB_API_KEY      "AIzaSyBqY7fEuIvN5rCRBpOVIX9cFsPu7SqLEek"
#define FB_DATABASE_URL "https://smart-power-safety-default-rtdb.firebaseio.com/"
#define DEVICE_ID       "esp32-01"

// ---- Pins (parallel LCD) ----
#define PIN_DHT     4
#define PIN_ACS     34
#define PIN_RELAY   26
#define PIN_BUZZER  27
#define LCD_RS      19
#define LCD_E       23
#define LCD_D4      18
#define LCD_D5      17
#define LCD_D6      16
#define LCD_D7      33

// ---- Limits + filtering ----
#define CURRENT_LIMIT_A      3.5
#define TEMP_LIMIT_C         45.0
#define HUM_LIMIT_PCT        85.0
#define AVG_SAMPLES          10
#define ACS_SENS_V_PER_A_CFG 0.100   // ACS712 20A -> 0.100 V/A
