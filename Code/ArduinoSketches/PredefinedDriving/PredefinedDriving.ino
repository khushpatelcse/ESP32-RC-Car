#include <ESP32Servo.h>

//Define Pins
//H-Bridge Pins
const int in1A = 33;
const int in2A = 25;
const int in1B = 27;
const int in2B = 14;
//PWM Pins
const int pwmA = 32;
const int pwmB = 26;
//Servo Position Pin
const int servoPin = 13;

// Motor Speed Values - Start at zero
int MotorSpeedFront = 0;
int MotorSpeedRear = 0;

//Initialize Servo, and position
Servo myServo;
int pos = 0;

//Function Prototypes
void setDirection(bool forward);

void setup() {
  //Initialize pins for motors
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
  pinMode(servoPin, OUTPUT);
  myServo.attach(servoPin);

  //Wait 5s
  delay(5000);
}

void loop() {

  //Move forward 2000ms
  setDirection(true);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(90);
  delay(2000);
  //Move backward 2000ms
  setDirection(false);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(90);
  delay(2000);
  //ORIGINAL POSITION

  //Move forward, turn right slowly 2000ms
  setDirection(true);
  analogWrite(pwmA, 75);
  analogWrite(pwmB, 75);
  myServo.write(120);
  delay(2000);
  //Move backwards, turn right slowly 2000ms
  setDirection(false);
  analogWrite(pwmA, 75);
  analogWrite(pwmB, 75);
  myServo.write(120);
  delay(2000);
  //ORIGINAL POSITION

  //Move forward, turn left slowly 2000ms
  setDirection(true);
  analogWrite(pwmA, 75);
  analogWrite(pwmB, 75);
  myServo.write(60);
  delay(2000);
  //Move backwards, turn left slowly 2000ms
  setDirection(false);
  analogWrite(pwmA, 75);
  analogWrite(pwmB, 75);
  myServo.write(60);
  delay(2000);
  //ORIGINAL POSITION

  //Move forward, turn right quickly 2000ms
  setDirection(true);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(120);
  delay(2000);
  //Move backwards, turn right quickly 2000ms
  setDirection(false);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(120);
  delay(2000);
  //ORIGINAL POSITION

  //Move forward, turn left quickly 2000ms
  setDirection(true);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(60);
  delay(2000);
  //Move backwards, turn left quickly 2000ms
  setDirection(false);
  analogWrite(pwmA, 255);
  analogWrite(pwmB, 255);
  myServo.write(60);
  delay(2000);
  //ORIGINAL POSITION
}

void setDirection(bool forward) {
  if (forward) {
    digitalWrite(in1A, HIGH);
    digitalWrite(in2A, LOW);
    digitalWrite(in1B, HIGH);
    digitalWrite(in2B, LOW);
  } else {
    digitalWrite(in1A, LOW);
    digitalWrite(in2A, HIGH);
    digitalWrite(in1B, LOW);
    digitalWrite(in2B, HIGH);
  }
}
