#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); // RX | TX

const int SW = 9;
const int Y = 16;
const int X = 17;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

void setup() {
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  BTSerial.begin(38400);
  Serial.begin(9600);
}

void loop() {
  xPosition = analogRead(X);
  yPosition = analogRead(Y);
  buttonState = digitalRead(SW);

  Serial.print("SW:");
  Serial.println(digitalRead(SW));
  if (buttonState == 1) {
    BTSerial.write('0');
  }
  else if (buttonState == 0) {
    BTSerial.write('1');
  }
/*
  Serial.print("X:");
  Serial.println(analogRead(X));
  if (xPosition <= 5 && yPosition >= 500) {
    BTSerial.write('2');
  }
  else if (xPosition >= 1000 && yPosition <= 500) {
    BTSerial.write('3');
  }

  Serial.print("Y:");
  Serial.println(analogRead(Y));
  if (yPosition <= 5 && xPosition >= 500) {
    BTSerial.write('4');
  }
  else if (yPosition >= 1000 && xPosition >= 500) {
    BTSerial.write('5');
  }
    BTSerial.print("SW:");
    BTSerial.println(digitalRead(SW));
    Serial.print("SW:");
    Serial.println(digitalRead(SW));
    BTSerial.print("X:");
    BTSerial.println(analogRead(X));
    Serial.print("X:");
    Serial.println(analogRead(X));
    BTSerial.print("Y:");
    BTSerial.println(analogRead(Y));
    Serial.print("Y:");
    Serial.println(analogRead(Y));*/
}
