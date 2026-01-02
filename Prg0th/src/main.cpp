#include <Arduino.h>
// Defining Connections in Code
const byte ledred=4; // Red LED connected to digital pin 4  

void setup() {
   pinMode(ledred, OUTPUT); 
   }

void loop() {
  digitalWrite(ledred, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(1000);                // Wait for a second
  digitalWrite(ledred, LOW);  // Turn the LED off by making the voltage LOW
  delay(1000);                // Wait for a second  
  }

// This code blinks a red LED connected to digital pin 4 on and off every second.