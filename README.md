# 🔥 AI-Based Fire Fighting and Human Detection Rescue Robot

![Project Status](https://img.shields.io/badge/Status-Completed-success)
![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)
![RaspberryPi](https://img.shields.io/badge/Raspberry%20Pi-AI-red)
![License](https://img.shields.io/badge/Academic-Project-green)

## 📌 Project Overview

This project is an intelligent rescue robot capable of detecting fire, identifying human presence, avoiding obstacles, and extinguishing fire automatically. The system combines Arduino Uno and Raspberry Pi to create a low-cost smart rescue solution for hazardous environments.

The robot can be remotely controlled using Bluetooth communication while simultaneously monitoring fire and obstacles. Raspberry Pi performs AI-based human detection using computer vision techniques.

---

# 🎯 Objectives

- Detect fire using a flame sensor
- Automatically activate a water pump during fire incidents
- Detect obstacles using an ultrasonic sensor
- Detect human presence using Raspberry Pi and AI
- Provide Bluetooth-based remote control
- Improve safety during rescue operations

---

# 🚀 Key Features

✅ Bluetooth Controlled Robot

✅ Fire Detection

✅ Automatic Water Pump Activation

✅ Obstacle Detection

✅ Human Detection Using Raspberry Pi

✅ Buzzer Alert System

✅ Low Cost Implementation

✅ Real-Time Monitoring

---

# 🤖 System Architecture

```text
Bluetooth App
      |
      v
 Arduino Uno
  |     |      |
  |     |      |
Flame Ultrasonic Motor Driver
Sensor Sensor      |
                  Motors

Arduino ----> Relay ----> Water Pump

Raspberry Pi ----> Human Detection
       |
       v
   Arduino Uno
```

---

# ⚙️ Hardware Components

| Component | Quantity |
|------------|------------|
| Arduino Uno R3 | 1 |
| Raspberry Pi | 1 |
| HC-05 Bluetooth Module | 1 |
| Flame Sensor | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| BTS7960 Motor Driver | 2 |
| DC Geared Motor | 2 |
| Relay Module | 1 |
| Water Pump | 1 |
| Active Buzzer | 1 |
| Battery Pack | 1 |

---

# 💻 Software Used

- Arduino IDE
- Raspberry Pi OS
- Python
- OpenCV
- YOLO Human Detection
- Git & GitHub
- Bluetooth RC Controller

---

# 🔌 Pin Configuration

## Bluetooth Module

| HC-05 | Arduino |
|---------|----------|
| TX | D2 |
| RX | D3 |
| VCC | 5V |
| GND | GND |

## Flame Sensor

| Sensor Pin | Arduino |
|------------|----------|
| OUT | D9 |
| VCC | 5V |
| GND | GND |

## Ultrasonic Sensor

| HC-SR04 | Arduino |
|----------|----------|
| TRIG | A4 |
| ECHO | A5 |
| VCC | 5V |
| GND | GND |

## Relay Module

| Relay | Arduino |
|---------|----------|
| IN | D4 |
| VCC | 5V |
| GND | GND |

---

# 📱 Bluetooth Commands

| Command | Function |
|----------|----------|
| F | Forward |
| B | Backward |
| L | Left |
| R | Right |
| S | Stop |

---

# 🔥 Fire Detection Process

1. Flame sensor continuously monitors the environment.
2. Fire is detected.
3. Arduino activates the buzzer.
4. Relay turns ON.
5. Water pump starts automatically.
6. Fire extinguishing process begins.

---

# 🚧 Obstacle Detection Process

1. Ultrasonic sensor measures distance.
2. Obstacle detected within threshold distance.
3. Buzzer activates.
4. Robot stops or warns the user.

---

# 👤 Human Detection Process

1. Raspberry Pi camera captures images.
2. Computer vision algorithm processes frames.
3. Human presence is detected.
4. Alert is sent to Arduino.
5. Robot generates warning and stops if required.

---

# 📊 Experimental Results

| Test | Result |
|--------|---------|
| Bluetooth Control | Successful |
| Fire Detection | Successful |
| Water Pump Activation | Successful |
| Obstacle Detection | Successful |
| Human Detection | Successful |

---

# 🌍 Real-Life Applications

- Fire Rescue Operations
- Industrial Safety Monitoring
- Warehouse Protection
- Chemical Plant Safety
- Emergency Response Systems
- Educational Robotics

---

# 💰 Cost Analysis

| Component | Cost (BDT) |
|------------|------------|
| Arduino Uno | 700 |
| Raspberry Pi | 9000 |
| Motors | 800 |
| Motor Drivers | 1000 |
| Sensors | 700 |
| Relay + Pump | 600 |
| Battery | 1200 |
| Others | 1000 |

### Total Cost ≈ 15,000 BDT

---

# 📈 Future Improvements

- GPS Tracking
- IoT Monitoring
- Live Video Streaming
- Autonomous Navigation
- Mobile Application
- Cloud-Based Monitoring
- Advanced AI Detection

---

# 👨‍💻 Team Members

| Name | ID |
|--------|--------|
| Shafin Imtiaz | 0112310170 |
| Mst. Isratjahan Shrabonee | 0112310550 |
| Umaiya Akter | 0112310537 |
| Mashiyat Tarannum | 0112230264 |

Department of Computer Science and Engineering  
United International University (UIU)

---

# 📂 Repository Contents

```text
📁 AI-Fire-Fighting-Human-Detection-Rescue-Robot
│
├── AI-Based Fire Fighting and Human Detection Rescue Robot-1.pdf
├── README.md
│
└── sketch_may9a
    └── sketch_may9a.ino
```

---

# 🎥 Demo Video

Add your YouTube or Google Drive demonstration video link here.

Example:

https://drive.google.com/your-demo-video-link

---

# 📄 Project Report

The complete project report is included in this repository.

---

# 📚 References

- Arduino Documentation
- Raspberry Pi Documentation
- OpenCV Documentation
- YOLO Documentation
- HC-05 Bluetooth Module Datasheet
- HC-SR04 Ultrasonic Sensor Datasheet

---

⭐ If you like this project, please give this repository a star.
