# Temperature Alert System (Elegoo Uno R3 + DHT11)

This project uses an **Elegoo Uno R3** (Arduino-compatible) and a DHT11 sensor to monitor temperature.  
When the temperature exceeds a set threshold, an **LED** and **buzzer** are triggered to alert the user.  
Readings are also shown in the **Serial Monitor** for real-time monitoring.

---

## Features
- Real-time temperature readings with DHT11 sensor  
- LED and buzzer alerts for threshold breaches  
- Simple, low-cost circuit using Elegoo Uno R3  
- Expandable for IoT (Blynk app) or display modules  

---

## Components Used
- Elegoo Uno R3 (Arduino-compatible board)  
- DHT11 temperature sensor (3-pin module)  
- 1x LED + 220Ω resistor  
- 1x Buzzer (active)  
- Breadboard + jumper wires  

---

## Circuit Wiring
- **DHT11**: `VCC → 5V`, `OUT → A5`, `GND → GND`  
- **LED**: `D2 → Resistor → LED anode`, `LED cathode → GND`  
- **Buzzer**: `D4 → +`, `– → GND`  

*Wiring photos are included in the `Images/` folder.*  

---

## Code
The Arduino sketch is in [/Arduino_Code.ino](/Arduino_Code.ino).  
Key settings:  
- Threshold: **30 °C** (changeable in the code)  
- Delay: **2 seconds** between readings  

---

## Demo
1. Open Serial Monitor @ 9600 baud to see live temperature values.  
2. When temp > threshold: **LED and buzzer turn on**.  
3. When temp < threshold: **LED and buzzer turn off**.  

---

## Future Improvements
- **IoT integration (Blynk / WiFi module):** Send temperature data and alerts to a mobile app for remote monitoring.  
- **LCD/OLED display:** Show live temperature on a small screen without needing a computer.  
- **Better sensor (DHT22):** Upgrade to a more accurate and faster sensor.  
