# Project 101: Smart Home Automation using IoT

**Level:** Beginner  
**Hardware:** NodeMCU (ESP8266) / ESP32, Relay Module, Light/Fan  
**Software:** Arduino IDE, Blynk IoT app  

---

## Overview
This project demonstrates how to control home appliances remotely via a smartphone using IoT.  
We use NodeMCU/ESP32, a relay module, and the Blynk cloud platform.

---

## Components Required
- NodeMCU ESP8266 or ESP32
- 1-Channel Relay Module
- AC or DC appliance (use a small lamp or LED for safety)
- Jumper wires
- Breadboard
- Wi-Fi connection

---

## Circuit Diagram
See `circuit-diagram/diagram.png`.

**Wiring Summary:**
- NodeMCU D1 → Relay IN
- NodeMCU GND → Relay GND
- NodeMCU 3.3V → Relay VCC
- Appliance live wire → Relay NO (Normally Open)

---

## Blynk Setup
1. Download Blynk app.  
2. Create new project → select NodeMCU/ESP32.  
3. Copy **Auth Token** to Arduino code.  
4. Add a Button Widget:
   - Pin: D1
   - Mode: Switch

---

## Arduino Code
See `source-code/smart_home.ino`.

---

## How to Run
1. Open Arduino IDE → install ESP8266/ESP32 board.  
2. Connect NodeMCU to PC.  
3. Upload code.  
4. Open Blynk app → control appliance.  
5. Enjoy your smart home control!

---

## Future Enhancements
- Add multiple relays for multiple devices.  
- Add sensors (temperature, light) for automation.  
- Use Firebase or Thingspeak instead of Blynk.
