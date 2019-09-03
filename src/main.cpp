#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, INPUT_PULLUP);  
}

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  if (digitalRead(7) == LOW) {
    digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)  
  }
  delay(100);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  if (digitalRead(7) == LOW) {
    digitalWrite(12, HIGH);    // turn the LED off by making the voltage LOW
  }
  delay(100);                       // wait for a second
}