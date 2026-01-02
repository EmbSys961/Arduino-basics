
//Blinking Led Red/Yellow/Green dly=100ms
#include <Arduino.h>
// Defining Connections in Code
const byte ledred=4; // Red LED connected to digital pin 4  
const byte ledyellow=5; // Yellow LED connected to digital pin 5  
const byte ledgreen=6; // Green LED connected to digital pin 6
const int dly=100; // Delay time in milliseconds 


void setup() {
  pinMode(ledred, OUTPUT); // Set pin 4 as an OUTPUT
  pinMode(ledyellow, OUTPUT); // Set pin 5 as an OUTPUT
  pinMode(ledgreen, OUTPUT); // Set pin 6 as an OUTPUT 
}

void loop() {  
  digitalWrite(ledred, HIGH); delay(dly); digitalWrite(ledred, LOW);delay(dly);   
  digitalWrite(ledyellow, HIGH); delay(dly); digitalWrite(ledyellow, LOW);delay(dly);
  digitalWrite(ledgreen, HIGH); delay(dly); digitalWrite(ledgreen, LOW);delay(dly);           
  }

