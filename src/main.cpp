#include <Arduino.h>

// Pin Definitions
const int ldrPin = A0;        // LDR connected to Analog Pin A0
const int buzzerPin = 9;      // Active Buzzer connected to Digital Pin 9
const int ledPin = 8;         // LED connected to Digital Pin 8

// Threshold for detecting light (adjust as needed)
const int lightThreshold = 500;

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  Serial.begin(9600);         // Initialize serial communication
}

void loop() {
  int lightValue = analogRead(ldrPin); // Read light intensity from LDR
  Serial.println(lightValue);          // Print the value to the Serial Monitor

  if (lightValue > lightThreshold) {
    // Light is ON
    digitalWrite(buzzerPin, HIGH); // Turn buzzer ON
    digitalWrite(ledPin, LOW);     // Turn LED OFF
  } else {
    // Light is OFF
    digitalWrite(buzzerPin, LOW);  // Turn buzzer OFF
    digitalWrite(ledPin, HIGH);    // Blink the LED
    delay(500);                    // LED ON for 500ms
    digitalWrite(ledPin, LOW);     // Turn LED OFF
    delay(500);                    // LED OFF for 500ms
  }
}
