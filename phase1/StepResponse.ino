// Author : Yoovraj Shinde

#include<Servo.h>
int MOTOR_PIN=2;
int PULSE_PIN=13;

Servo s1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PULSE_PIN, OUTPUT);
  pinMode(PULSE_PIN, OUTPUT);
  s1.attach(MOTOR_PIN);

  digitalWrite(PULSE_PIN,0);
  s1.write(1);
  delay(1000);
  digitalWrite(PULSE_PIN,1);
  s1.write(179);
  delay(1000);  
  digitalWrite(PULSE_PIN,0);
  s1.write(0);
}

void loop() {
}
