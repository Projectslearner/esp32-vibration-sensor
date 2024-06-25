# ESP32 Vibration Sensor (SW-420) Project

### Project Overview
The ESP32 Vibration Sensor (SW-420) project demonstrates how to interface a vibration sensor with an ESP32 microcontroller to detect vibrations or shocks. This project is valuable for applications where detecting physical movements or impacts is essential, such as in security systems, industrial equipment monitoring, or interactive installations.

### Components Needed
- **ESP32 Microcontroller**: Used to interface with the vibration sensor and process sensor readings.
- **Vibration Sensor (SW-420)**: Detects vibrations and outputs a digital signal based on the intensity of vibration.
- **Jumper Wires**: Connect the vibration sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections if needed.

### Block diagram

### Circuit Setup
1. **Connecting the Vibration Sensor to ESP32:**
   - **Vibration Sensor Pin**: Connect the digital output pin of the SW-420 sensor to a GPIO pin on the ESP32 (e.g., GPIO 15).

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging purposes.
   - Set the pinMode for the vibration sensor pin using `pinMode(vibrationPin, INPUT)` to configure it as an input.

2. **Operation:**
   - **Reading Vibration State:**
     - Use `digitalRead(vibrationPin)` to read the state of the vibration sensor.
     - Print "Vibration detected!" if the sensor state is HIGH (indicating vibration).
     - Print "No vibration." if the sensor state is LOW (no vibration detected).

3. **Output:**
   - Continuously monitor and display the vibration sensor state.
   - Trigger actions based on detected vibrations as required by your application.

4. **Considerations:**
   - **Threshold Adjustment:** Tune the sensitivity of the vibration sensor if needed.
   - **Mounting and Orientation:** Properly mount the sensor to optimize vibration detection.
   - **Power Supply:** Ensure sufficient power supply for reliable sensor operation.

### Applications
- **Security Systems:** Detect unauthorized movement or tampering.
- **Industrial Monitoring:** Monitor equipment for unexpected vibrations indicating malfunctions.
- **Interactive Installations:** Create interactive experiences based on physical interactions.

### Useful Links
🌐 [ProjectsLearner - ESP32 Vibration Sensor (SW-420)](https://projectslearner.com/learn/esp32-vibration-sensor-sw420)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner