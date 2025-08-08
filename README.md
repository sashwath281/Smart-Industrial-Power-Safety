# Smart Industrial Power Safety System

This project uses an **ESP32** connected to **Firebase Realtime Database** to monitor industrial safety parameters such as temperature, humidity, current flow, and relay/buzzer states in real time. It also logs all sensor data with timestamps for historical analysis.

---

## Components Used
- ESP32 Development Board
- DHT11 Temperature & Humidity Sensor
- ACS712 Current Sensor Module
- Relay Module
- Buzzer
- Breadboard & Jumper Wires
- Firebase Realtime Database (Cloud)

---

## Live Data Monitoring
The system sends the following data to Firebase:

| Parameter   | Description |
|-------------|-------------|
| **buzzer**  | 1 = ON, 0 = OFF |
| **current_A** | Current draw in Amperes |
| **hum_pct** | Humidity percentage |
| **relay**   | 1 = ON, 0 = OFF |
| **t**       | Timestamp in Unix Epoch (milliseconds) |
| **temp_C**  | Temperature in Celsius |

**Live Data Link:**  
[View Live Data](https://smart-power-safety-default-rtdb.firebaseio.com/devices/esp32-01/live.json)  

**Logs Link:**  
[View Logs](https://smart-power-safety-default-rtdb.firebaseio.com/devices/esp32-01/logs.json)  

---

## How It Works
1. ESP32 reads data from **DHT11** (temperature & humidity) and **ACS712** (current sensor).
2. Data is sent to **Firebase Realtime Database** in the `/live` path for real-time monitoring.
3. Each reading is also stored in `/logs` with a **timestamp** as the key.
4. If temperature or current exceeds safety thresholds, **relay** activates and buzzer alerts.
5. Web dashboard or Firebase console can be used to monitor status.

---

## Future Improvements
- Web dashboard with charts (temperature, current trends)
- Email/SMS alerts via Firebase Cloud Functions
- Mobile app for real-time notifications
