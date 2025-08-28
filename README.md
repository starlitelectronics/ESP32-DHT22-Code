Arduino Uno & ESP32 with DHT22 Senso

📖 Overview
The DHT22 (AM2302) is a popular digital sensor used to measure temperature and humidity with high precision. It communicates using a single-wire digital protocol, making it simple to interface with microcontrollers like Arduino Uno and ESP32. Due to its low cost and reliable performance, the DHT22 is commonly used in IoT applications, weather stations, smart homes, and industrial monitoring systems.
This repository demonstrates how to interface the DHT22 with both Arduino Uno and ESP32, read real-time sensor data, and display it through the Serial Monitor or upload it to cloud platforms.

🔧 Hardware Requirements
Arduino Uno (ATmega328P) or ESP32 Development Board
DHT22 Sensor (AM2302)
10kΩ Pull-up Resistor (between VCC & Data pin of DHT22)
USB Cable for Programming
Jumper Wires & Breadboard

📊 DHT22 Specifications
Temperature Range: -40°C to +80°C (±0.5°C accuracy)
Humidity Range: 0% to 100% RH (±2–5% accuracy)
Operating Voltage: 3.3V – 5V
Sampling Period: 2 seconds (1 reading every 2s)
Interface: Digital single-wire protocol

⚡ Arduino Uno with DHT22
The Arduino Uno is one of the most widely used microcontroller boards for beginners. With 14 digital pins and 6 analog inputs, it is ideal for small-scale sensor interfacing.
Wiring (Arduino Uno – DHT22):
VCC → 5V
GND → GND
DATA → Digital Pin 2 (with 10kΩ pull-up resistor to 5V)

🌐 ESP32 with DHT22
The ESP32 is a powerful microcontroller featuring dual-core processors, built-in WiFi & Bluetooth, and multiple GPIOs. Unlike Arduino Uno, the ESP32 can send sensor data directly to the cloud (Thingspeak, Blynk, MQTT, Google Firebase, etc.).
Wiring (ESP32 – DHT22):
VCC → 3.3V
GND → GND
DATA → GPIO 4 (with 10kΩ pull-up resistor to 3.3V)
