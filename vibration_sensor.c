/*
   Project name: ESP32 Vibration Sensor (SW-420)
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-vibration-sensor-sw420
*/

// Define the GPIO pin connected to the vibration sensor
const int vibrationPin = 15; // GPIO pin D15 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set the vibration sensor pin as input
}

void loop() {
  // Read the vibration sensor state
  int vibrationState = digitalRead(vibrationPin);

  // Check if vibration is detected
  if (vibrationState == HIGH) {
    Serial.println("Vibration detected!");
  } else {
    Serial.println("No vibration.");
  }

  delay(1000); // Delay before next reading
}
