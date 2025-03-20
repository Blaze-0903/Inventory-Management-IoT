# 📦 Inventory Management System using IoT 🌐  

This project implements an **IoT-based Inventory Management System** using **ESP32, Load Cell (HX711), and DHT22**.  
It measures **weight, temperature, and humidity** to track inventory levels, displaying real-time data on a **TFT LCD screen**.  
An **LED indicator turns ON when the temperature exceeds 30°C**, signaling a critical condition.  

---

## 📌 Features  
✅ Measures **Weight (kg)** using **HX711 Load Cell** for real-time inventory tracking  
✅ Monitors **Temperature & Humidity** using **DHT22 Sensor**  
✅ Displays data on a **3.5" TFT LCD screen**  
✅ **LED Indicator** turns **ON** when temperature **> 30°C**  
✅ Simulated in **Wokwi** and deployed on **ESP32**

---

## 📷 Circuit Diagram & Working  

### 1️⃣ Circuit Diagram
This is the complete circuit setup using ESP32, TFT LCD, HX711, DHT22, and an LED indicator.  

![Screenshot 2025-02-25 102841](https://github.com/user-attachments/assets/cfa73541-4cec-425d-a842-14d9cd7cb63a)

---

### 2️⃣ Working Circuit - Showing Weight Measurement  
The **Load Cell (HX711)** measures the weight and displays it on the TFT LCD.  

![Screenshot 2025-02-28 102636](https://github.com/user-attachments/assets/7a329a4f-ac60-488c-8cbd-acbdce28c8f1)

---

### 3️⃣ Working Circuit - Monitoring Temperature & Humidity  
The **DHT22 sensor** measures the environmental temperature and humidity.  

![Screenshot 2025-02-28 102702](https://github.com/user-attachments/assets/474b2b01-2ea0-48f6-b536-d428a1b7eca5)

---

### 4️⃣ LED Activation - Temperature > 30°C  
When the **temperature exceeds 30°C**, the **LED turns ON**, indicating an alert condition.  

![Screenshot 2025-02-28 102817](https://github.com/user-attachments/assets/f994d4e1-f3d7-4910-b13e-f765e5929996)

---

## 🛠 Components Used  
- **ESP32 Dev Board**  
- **HX711 Load Cell Module**  
- **50kg Load Cell Sensor**  
- **DHT22 Temperature & Humidity Sensor**  
- **3.5" TFT LCD Display (ILI9341 SPI)**  
- **LED Indicator**  
- **Jumper Wires & Resistors**

---

## 🔌 Wiring Connections  

| **Component**        | **ESP32 Pin**  |
|----------------------|---------------|
| **HX711 (Load Cell)** |               |
| VCC                  | 3.3V          |
| GND                  | GND           |
| DT (Data)            | GPIO 21       |
| SCK (Clock)          | GPIO 22       |
| **DHT22 Sensor**      |               |
| VCC                  | 3.3V          |
| GND                  | GND           |
| SDA (Data)           | GPIO 4        |
| **TFT LCD (SPI - ILI9341)** |       |
| VCC                  | 3.3V          |
| GND                  | GND           |
| SCK (Clock)          | GPIO 18       |
| MOSI (Data)          | GPIO 23       |
| CS (Chip Select)     | GPIO 5        |
| DC (Data/Command)    | GPIO 15       |
| RESET               | GPIO 4        |
| **LED Indicator**    |               |
| Anode (+)           | GPIO 13       |
| Cathode (-)         | GND (via 220Ω) |

---

## 🚀 Getting Started  

### 1️⃣ Clone this repository  
```bash
git clone https://github.com/your-username/Inventory-Management-IoT.git
```

### 2️⃣ Install Required Libraries  
Make sure you have the following **Arduino Libraries** installed:  
- **Adafruit_GFX**  
- **Adafruit_ILI9341**  
- **DHT sensor library**  
- **HX711 by Bogde**  

---

## 🎯 Expected Output  
1️⃣ **Displays Real-Time Weight, Temperature & Humidity**  
2️⃣ **LED Turns ON if Temperature > 30°C**  
3️⃣ **Works on Wokwi and ESP32**  

---

🚀 Innovation
This project goes beyond basic inventory tracking by integrating IoT-driven intelligence with real-time monitoring. Key innovations include:

✅ Multi-Sensor Fusion: Combines weight, temperature, and humidity sensors for a comprehensive inventory health check rather than just tracking stock levels.

✅ Critical Condition Alert System: Implements an automatic LED alert mechanism when temperature exceeds 30°C, preventing potential damage to temperature-sensitive inventory.

✅ Scalability for Cloud Integration: Designed to be expanded with IoT cloud platforms (e.g., Firebase, MQTT, ThingsBoard), enabling remote monitoring and data logging.

✅ Wokwi Simulation for Rapid Prototyping: Allows virtual testing and debugging before hardware deployment, reducing development time and costs.

✅ User-Customizable Thresholds (Future Scope): Can be upgraded to support user-defined alerts and automated notifications via SMS/email.

---

## 📜 License  
This project is open-source under the **MIT License**.  

---

## 🤝 Contributing  
Feel free to **fork**, **raise issues**, or **submit pull requests**. Let's improve this project together!  

---

## 🛠 Built With  
🚀 **ESP32, C++, Arduino IDE, Wokwi**  


