#include <ESP32Servo.h>

// Motor A

int pwmA = 32;
int in1A = 33;
int in2A = 25;

// Motor B

int pwmB = 26;
int in1B = 27;
int in2B = 14;

//Servo Pin

int servoPin = 13;

// Motor Speed Values - Start at zero

int MotorSpeed1 = 0;
int MotorSpeed2 = 0;

Servo myServo;
int pos = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
  pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);

  digitalWrite(in1B, HIGH);
  digitalWrite(in2B, LOW);

for (int i = 0; i <= 100; i += 2) {
  analogWrite(pwmA, map(i,0,100,0,255));
  analogWrite(pwmB, map(i,0,100,0,255));
  myServo.write(map(i,0,100,60,120));
  delay(20);
}
for (int i = 100; i >= 0; i -= 2) {
  analogWrite(pwmA, map(i,0,100,0,255));
  analogWrite(pwmB, map(i,0,100,0,255));
  myServo.write(map(i,0,100,120,60));
  delay(20);
}

}
