/*
  PS4BabyMonitor (HC-05 secondo)
  by: Questionable Mechanics
  contact: questionable.mechanics@gmail.com
  last rev: 10/2020
  This sketch is in the public domain
  Note: Developed and tested using Arduino IDE ver 1.8.42.0
*/

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX | TX

const int relayPin1 = 8;
const int relayPin2 = 7;
const int relayPin3 = 6;
const int relayPin4 = 5;
const int relayPin5 = 4;

void setup() {
  pinMode(relayPin1, OUTPUT);
  digitalWrite(relayPin1, LOW);
  pinMode(relayPin2, OUTPUT);
  digitalWrite(relayPin2, LOW);
  pinMode(relayPin3, OUTPUT);
  digitalWrite(relayPin3, LOW);
  pinMode(relayPin4, OUTPUT);
  digitalWrite(relayPin4, LOW);
  pinMode(relayPin5, OUTPUT);
  digitalWrite(relayPin5, LOW);
  BTSerial.begin(38400);
  Serial.begin(9600);
  Serial.println("<Arduino is ready>");
}

void loop() {
  while (BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  while (BTSerial.read() == '0') {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, LOW);
    digitalWrite(relayPin5, LOW);
  }
  if (BTSerial.read() == '1') {
    digitalWrite(relayPin1, HIGH);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, LOW);
    digitalWrite(relayPin5, LOW);
  }
  if (BTSerial.read() == '2') {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, HIGH);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, LOW);
    digitalWrite(relayPin5, LOW);
  }
  if (BTSerial.read() == '3') {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, HIGH);
    digitalWrite(relayPin4, LOW);
    digitalWrite(relayPin5, LOW);
  }
   if (BTSerial.read() == '4') {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, HIGH);
    digitalWrite(relayPin5, LOW);
  }
  if (BTSerial.read() == '5') {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, LOW);
    digitalWrite(relayPin5, HIGH);
  }
}
