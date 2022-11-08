
#include <Servo.h>


int jointPin = 5;
int armPin = 3;
int potPin = A0;
int tiltPin= 4;


int potValue;
int potMap;
int tiltVal;


//for debugging
int servoTestAngle;





Servo servoArm;
Servo servoJoint;


void setup() {
  servoJoint.attach(jointPin);
  servoArm.attach(armPin);
  pinMode(potPin, INPUT);
  pinMode(tiltPin, INPUT);

  digitalWrite(tiltPin, HIGH);

  Serial.begin(9600);



}

void loop() {
  
  potValue = analogRead(potPin);
  potMap = map(potValue, 950, 750, 60, 170);
  servoJoint.write(potMap);
  tiltVal= digitalRead(tiltPin);
  Serial.println(tiltVal);
  
  if(tiltVal == 1) {
  servoArm.write(60);
  } else {
  servoArm.write(170);
  }
  

}

  
  
  



