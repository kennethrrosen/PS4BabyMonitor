/*
HC-05 Bluetooth Joystick on Nano
*/
 
//Arduino Nano pin numbers
const int SW_pin = 2; //digital pin connected to switch output
const int X_pin = 0; //analogue pin connected to X output
const int Y_pin = 1; //analogue pin connected to Y output
int xAxis, yAxis;
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10, 11); //  TX,RX

char c = ' ';
boolean NL = true;

void setup() {
  Serial.begin(9600);
  Serial.println("Sketch HC-05");
  Serial.println("Arduino with HC-05 is ready");
  Serial.println("Make sure Both NL & CR are set");
  Serial.println("");
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  BTSerial.begin(38400);
  Serial.println("BTserial started at 38400");
  Serial.println("");
;}

void loop() {
  xAxis = analogRead(A2);
  yAxis = analogRead(A1);
  Serial.write(xAxis/4);
  Serial.write(yAxis/4);
  delay(20);
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis:  ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis:  ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  delay(500);

{
  if (BTSerial.available())
  {
    c = BTSerial.read();
   Serial.write(c);
  }

  if (Serial.available())
  {
    c = Serial.read();
    BTSerial.write(c);

    if (NL) {
      Serial.print(">");
      NL = false;
    }
    Serial.write(c);
    if (c == 10) {
      NL = true;
    }
      xAxis = analogRead(A2);
  yAxis = analogRead(A1);

  Serial.write(xAxis/4);
  Serial.write(yAxis/4);
  delay(20);
    }
  }
}
