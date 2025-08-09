# Smart Industrial Power Safety System

This project is an **ESP32-based IoT System** which is connected to **Firebase Realtime Database**. It monitors **current using ACS712** and **temperature/humidity using DHT22** and shows the live values on a **16x2 LCD screen**. It then triggers a **relay + buzzer safety cut-off** when the limits are exceeded. It then logs all data with timpstamps for analysis to Firebase. 

---

## Features 
- Live Monitoring: current (A), temperature (°C), humidity (%).
- Automatic safety cutoff with buzzer as alarm for unsafe readings.
- A 16x2 LCD display as local display
- Works on hardware and Wokwi simulation

---

## Components Used
- ESP32 
- DHT22 Temperature & Humidity Sensor
- ACS712 Current Sensor
- Relay Module
- Active Buzzer
- Breadboard & Jumper Wires
- Firebase Realtime Database (Cloud)

---

**Live Data Link:**  
[View Live Data](https://smart-power-safety-default-rtdb.firebaseio.com/devices/esp32-01/live.json)  

**Logs Link:**  
[View Logs](https://smart-power-safety-default-rtdb.firebaseio.com/devices/esp32-01/logs.json)  

---

## How It Works
1. ESP32 reads data from **DHT22** (temperature & humidity) and **ACS712** (current sensor).
2. Data is sent to **Firebase Realtime Database** in the `/live` path for real-time monitoring.
3. Each reading is also stored in `/logs` with a **timestamp** as the key.
4. If temperature or current exceeds safety thresholds, **relay** activates and buzzer alerts.
5. Web dashboard or Firebase console can be used to monitor status.

---

## Future Improvements
- Web dashboard with charts (temperature, current trends)
- Email/SMS alerts via Firebase Cloud Functions
- Mobile app for real-time notifications
