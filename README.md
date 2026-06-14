# 🔥 AI-Based Fire Fighting and Human Detection Rescue Robot Using Raspberry Pi and Arduino

[![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino)](https://www.arduino.cc/)
[![Raspberry Pi](https://img.shields.io/badge/Raspberry%20Pi-4-C51A4A?style=for-the-badge&logo=raspberrypi)](https://www.raspberrypi.com/)
[![Python](https://img.shields.io/badge/Python-3-3776AB?style=for-the-badge&logo=python)](https://www.python.org/)
[![OpenCV](https://img.shields.io/badge/OpenCV-Computer%20Vision-5C3EE8?style=for-the-badge&logo=opencv)](https://opencv.org/)
[![YOLO](https://img.shields.io/badge/YOLO-Human%20Detection-FF6B6B?style=for-the-badge)](https://github.com/ultralytics/yolov5)
[![UIU](https://img.shields.io/badge/UIU-CSE%204326-orange?style=for-the-badge)](https://uiu.ac.bd/)

> ⭐ **Academic Project** — CSE 4326 Microprocessors and Microcontrollers Laboratory
> 🏛️ Department of Computer Science and Engineering, United International University (UIU)

---

## 📖 Introduction

Fire accidents are one of the major causes of damage to human life and property. Entering a fire-affected area is extremely dangerous for firefighters and rescue personnel. To reduce this risk, an intelligent robotic system can be used to perform monitoring and emergency response tasks.

This project presents an **AI-Based Fire Fighting and Human Detection Rescue Robot** that combines **Arduino Uno**, **Raspberry Pi**, **Computer Vision**, and **Embedded Systems** technologies. The robot is capable of detecting fire, identifying obstacles, locating humans, and automatically activating a water pump to control fire.

The system can be controlled remotely through Bluetooth communication and provides an affordable solution for rescue and safety applications.

---

## 🎯 Project Objectives

- ✅ Develop a Bluetooth-controlled rescue robot with tank-track chassis
- ✅ Detect fire using a flame sensor and respond automatically
- ✅ Automatically activate a water pump during fire emergencies
- ✅ Detect nearby obstacles using an ultrasonic sensor
- ✅ Detect humans using Raspberry Pi and AI-based computer vision (YOLO)
- ✅ Improve safety during rescue and emergency operations
- ✅ Demonstrate the integration of AI, Robotics, and Embedded Systems

---

## 🚀 Project Features

### 🔹 Bluetooth Controlled Movement

The robot can be controlled wirelessly using an Android Bluetooth Controller application.

| Command | Action        |
| ------- | ------------- |
| `F`     | Move Forward  |
| `B`     | Move Backward |
| `L`     | Turn Left     |
| `R`     | Turn Right    |
| `S`     | Stop          |

---

### 🔥 Fire Detection and Extinguishing System

A flame sensor continuously monitors the environment.

When fire is detected:
- 🔔 Fire alarm activates
- ⚡ Relay module switches ON
- 💧 Water pump starts automatically
- 🚒 Fire suppression process begins

---

### 🚧 Obstacle Detection System

The HC-SR04 ultrasonic sensor continuously measures distance.

When an obstacle is detected:
- 🔊 Warning buzzer activates
- ⚠️ Robot alerts the operator
- 🛑 Collision risk is reduced

---

### 👤 Human Detection Using AI

Raspberry Pi camera captures live images.

Computer Vision (YOLO) techniques are used to:
- 🔍 Detect human presence in real-time
- 🚨 Generate alerts and stop robot automatically
- 🤝 Improve rescue decision making

---

## 🏗️ System Architecture

```
           Android Mobile App
                    |
                    ▼
              HC-05 Bluetooth
                    |
                    ▼
              Arduino Uno
      ___________________________________
      |          |           |          |
      ▼          ▼           ▼          ▼
 Flame      Ultrasonic    Relay      Motor Driver
 Sensor      Sensor      Module    (BTS7960 x2)
      |          |           |          |
      ▼          ▼           ▼          ▼
   Buzzer   Obstacle    Water Pump  DC Motors
            Alert                  (Tank Tracks)

          Raspberry Pi 4
                |
                ▼
          Camera Module
                |
                ▼
       YOLO Human Detection
                |
                ▼
     Serial → Arduino → Stop/Alert
```

---

## ⚙️ Hardware Components

| Component                    | Quantity |
| ---------------------------- | -------- |
| Arduino Uno R3               | 1        |
| Raspberry Pi 4               | 1        |
| HC-05 Bluetooth Module       | 1        |
| Flame Sensor                 | 1        |
| HC-SR04 Ultrasonic Sensor    | 1        |
| BTS7960 / IBT-2 Motor Driver | 2        |
| DC Geared Motors             | 2        |
| 2-Channel Relay Module       | 1        |
| Mini Water Pump              | 1        |
| SG90 Servo Motor             | 1        |
| Active Buzzer                | 1        |
| LiPo Battery 1650mAh 3S      | 1        |
| Tank Chassis Kit             | 1        |
| Jumper Wires                 | Multiple |

---

## 💻 Software and Technologies

| Tool / Library          | Purpose                         |
| ----------------------- | ------------------------------- |
| Arduino IDE             | Firmware development            |
| Raspberry Pi OS         | OS for Raspberry Pi             |
| Python 3                | AI and vision scripts           |
| OpenCV                  | Image processing & camera input |
| YOLO (Ultralytics)      | Real-time human detection       |
| Bluetooth RC Controller | Mobile app for robot control    |
| Git & GitHub            | Version control & collaboration |

---

## 🔌 Hardware Connections

### HC-05 Bluetooth Module

| HC-05 Pin | Arduino Pin |
| --------- | ----------- |
| TX        | D2          |
| RX        | D3          |
| VCC       | 5V          |
| GND       | GND         |

### Flame Sensor

| Flame Sensor Pin | Arduino Pin |
| ---------------- | ----------- |
| OUT              | D9          |
| VCC              | 5V          |
| GND              | GND         |

### Ultrasonic Sensor (HC-SR04)

| HC-SR04 Pin | Arduino Pin |
| ----------- | ----------- |
| TRIG        | A4          |
| ECHO        | A5          |
| VCC         | 5V          |
| GND         | GND         |

### Relay Module

| Relay Pin | Arduino Pin |
| --------- | ----------- |
| IN        | D4          |
| VCC       | 5V          |
| GND       | GND         |

### Motor Drivers (BTS7960)

**Left Driver:**

| Pin  | Arduino |
| ---- | ------- |
| RPWM | A0      |
| LPWM | A1      |
| REN  | A2      |
| LEN  | A3      |

**Right Driver:**

| Pin  | Arduino |
| ---- | ------- |
| RPWM | D5      |
| LPWM | D6      |
| REN  | D7      |
| LEN  | D8      |

---

## 🔄 Working Principle

### Step 1 — Bluetooth Control
The user sends movement commands (F/B/L/R/S) through the mobile app via HC-05.

### Step 2 — Robot Navigation
Arduino receives commands and controls the DC motors through BTS7960 motor drivers, driving the tank tracks.

### Step 3 — Fire Detection
The flame sensor continuously checks for infrared radiation from fire.
If fire is detected → Buzzer ON → Relay ON → Water pump starts → Servo directs nozzle.

### Step 4 — Obstacle Detection
The ultrasonic sensor monitors distance every loop cycle.
If an obstacle is found → Warning alert → Robot stops or notifies operator.

### Step 5 — Human Detection
Raspberry Pi camera captures live video frames.
YOLO model detects human presence → Serial message to Arduino → Robot stops automatically.

---

## 📊 Experimental Results

| Test Case             | Description                                   | Result        |
| --------------------- | --------------------------------------------- | ------------- |
| Bluetooth Control     | All movement commands tested from mobile app  | ✅ Successful  |
| Fire Detection        | Flame sensor triggered relay + water pump     | ✅ Successful  |
| Water Pump Activation | Relay controlled pump during fire event       | ✅ Successful  |
| Obstacle Detection    | Ultrasonic sensor detected nearby objects     | ✅ Successful  |
| Human Detection       | Raspberry Pi YOLO identified human presence   | ✅ Successful  |
| Robot Auto-Stop       | Robot stopped when human detected             | ✅ Successful  |

> 📟 Serial terminal confirmed: `FIRE DETECTED! PUMP ON` and `Human Detected! Robot Stopped.`

---

## 🌍 Real-Life Applications

- 🚒 Fire Rescue Operations in buildings and factories
- 🏭 Industrial Safety Monitoring systems
- 🏗️ Warehouse and Chemical Plant Protection
- 🆘 Emergency First Response Operations
- 🎓 Educational Robotics Research

---

## ✅ Advantages

- 💰 Low-cost implementation with widely available components
- 📱 Easy wireless operation via Bluetooth mobile app
- 🔄 Automatic fire extinguishing without human intervention
- 🧠 Real-time human detection using AI (YOLO)
- 🚜 Tank-track chassis for improved mobility on uneven surfaces
- 🎯 Obstacle detection for safe navigation

---

## ⚠️ Limitations

- 🔋 Limited battery backup from LiPo 1650mAh battery
- 🌑 Human detection accuracy decreases in low-light conditions
- 📏 Suitable for prototype and small-scale fire suppression
- 📡 Bluetooth range limited to approximately 10 meters

---

## 💰 Cost Analysis

| Component                    | Cost (BDT)      |
| ---------------------------- | --------------- |
| Arduino Uno                  | 700             |
| Raspberry Pi 4               | 9,000           |
| DC Motors & Tank Chassis     | 800             |
| BTS7960 Motor Drivers (×2)   | 1,000           |
| Sensors (Flame + Ultrasonic) | 700             |
| Relay Module & Water Pump    | 600             |
| LiPo Battery 1650mAh         | 1,200           |
| Other Components             | 1,000           |
| **Total Cost**               | **≈ 15,000 BDT** |

---

## 🔮 Future Improvements

- 🛰️ GPS Tracking System for precise location sharing
- 🌐 IoT-based Monitoring Dashboard via cloud
- 📱 Dedicated Mobile Application with live video feed
- 🤖 Autonomous Navigation using machine learning
- ☁️ Cloud-Based Alert System and data logging
- 📹 Live Video Streaming from Raspberry Pi camera
- 🔬 Advanced AI Object Detection with thermal imaging

---

## 📂 Repository Structure

```
AI-Fire-Fighting-Human-Detection-Rescue-Robot/
│
├── 📄 README.md
├── 📑 AI-Based Fire Fighting and Human Detection Rescue Robot.pdf
│
└── 📁 sketch_may9a/
    └── 🔧 sketch_may9a.ino
```

---

## 👨‍💻 Team Members

| Name                      | Student ID |
| ------------------------- | ---------- |
| Shafin Imtiaz             | 0112310170 |
| Mst. Isratjahan Shrabonee | 0112310550 |
| Umaiya Akter              | 0112310537 |
| Mashiyat Tarannum         | 0112230264 |

🏛️ **Department of Computer Science and Engineering**
🎓 **United International University (UIU)**
📚 **Course:** CSE 4326 — Microprocessors and Microcontrollers Laboratory

---

## 📚 References

1. [Arduino Official Documentation](https://www.arduino.cc/en/Reference)
2. [Raspberry Pi Official Documentation](https://www.raspberrypi.com/documentation/)
3. [OpenCV Documentation](https://docs.opencv.org/)
4. [YOLO Object Detection — Ultralytics](https://github.com/ultralytics/yolov5)
5. HC-SR04 Ultrasonic Sensor Datasheet
6. HC-05 Bluetooth Module Datasheet
7. BTS7960 / IBT-2 Motor Driver Datasheet

---

## 🔗 Links

- 🐙 **GitHub Repository:** [AI-Fire-Fighting-Human-Detection-Rescue-Robot](https://github.com/shafinSI/AI-Fire-Fighting-Human-Detection-Rescue-Robot)
- 🎥 **Demonstration Video:** *(Add Google Drive or YouTube link here)*

---

<p align="center">
  Made with ❤️ by Team — United International University (UIU) | CSE 4326
</p>
