/*
HC-05 Bluetooth and Relays on Uno
*/

int relayPin1 = 7;
int relayPin2 = 6;
int relayPin3 = 5;
int relayPin4 = 4;
int xAxis, yAxis;
unsigned int  x = 0;
unsigned int  y = 0;
int state = 0;
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(0,1);//TX,RX

char c='#';
boolean NL= true;

void setup() {
  Serial.begin(9600);
  Serial.println("Sketch HC-05");
  Serial.println("Arduino with HC-05 is ready");
  Serial.println("Make sure Both NL & CR are set");
  Serial.println("");
  BTSerial.begin(38400);
  Serial.println("BTserial started at 38400");
  Serial.println("");
}

void loop() {
  if(BTSerial.available() > 0)
  { 
    state = Serial.read(); 
 }
  x = 510 / 4;
  y = 510 / 4;
  while (Serial.available() >= 2) {
    x = Serial.read();
    delay(10);
    y = Serial.read();
  }
  delay(10);
  xAxis = x*4;
  yAxis = y*4;
  if (yAxis < 470) {
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, HIGH);
    digitalWrite(relayPin3, HIGH);
    digitalWrite(relayPin4, HIGH);
  }
  else if (yAxis > 550) {
    digitalWrite(relayPin1, HIGH);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, HIGH);
    digitalWrite(relayPin4, HIGH);
  if (xAxis < 470) {
    digitalWrite(relayPin1, HIGH);
    digitalWrite(relayPin2, HIGH);
    digitalWrite(relayPin3, LOW);
    digitalWrite(relayPin4, HIGH);
  }
  else if (xAxis > 550) {
    digitalWrite(relayPin1, HIGH);
    digitalWrite(relayPin2, HIGH);
    digitalWrite(relayPin3, HIGH);
    digitalWrite(relayPin4, LOW);
  }
 if (state == '0') {
  digitalWrite(relayPin1, HIGH);
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(relayPin1, LOW);
  state = 0;
 }
 
if (state == '0') {
  digitalWrite(relayPin2, HIGH);
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(relayPin2, LOW);
  state = 0;
 }
 if (state == '0') {
  digitalWrite(relayPin3, HIGH);
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(relayPin3, LOW);
  state = 0;
 }
 if (state == '0') {
  digitalWrite(relayPin4, HIGH);
  state = 0;
 }
 else if (state == '1') {
  digitalWrite(relayPin4, LOW);
  state = 0;
    }
  ;}
}
