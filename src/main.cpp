#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(921600);
  Serial.println("Hello from setup");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); 
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  Serial.println("Hello from loop"); 
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
}
