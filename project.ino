//Code by Bilal Baba

//Libraries
#include <Servo.h>


//Setting up Digital Pins
int jointPin = 5;
int armPin = 3;
int tiltPin = 4;

//Setting up Analog Pins
int potPin = A0;


//Variables to record values
int potValue; //To record Resistance of the potentiometer 

int potMap; //To record the value after mapping potValue onto Servo Angles

int tiltVal; //To record the digitalRead() value of the Tilt Switch to determine the alignment of the robotic arm


//for debugging
int servoTestAngle;


//Setting up Servo Motors
Servo servoArm;
Servo servoJoint;



//Setting up code for the setup -- to run once
void setup() {
  //Designating Pins to the Servo Motors
  servoJoint.attach(jointPin);
  servoArm.attach(armPin);
  
  //Enabling INPUT from Potentiometer and Tilt Switch
  pinMode(potPin, INPUT);
  pinMode(tiltPin, INPUT);

  //Changing the value of Tilt Switch to One 
  digitalWrite(tiltPin, HIGH);

  //Setting up the Serial Monitor for debugging 
  Serial.begin(9600);



}

void loop() {
  
  //Recording the Analog Value of Potentiometer
  potValue = analogRead(potPin);
  
  //Mapping the Analog value of Potentiometer onto the Servo angles from 60 to 170
  potMap = map(potValue, 950, 750, 60, 170);
  
  //Updating the Servo Motor to a new angle, in realtime
  servoJoint.write(potMap);
  
  //Updating the variable of tiltVal to record the value of Tilt Switch in realtime
  tiltVal= digitalRead(tiltPin);
  
  //For debugging -- printing the value of Tilt Switch 
  Serial.println(tiltVal);
  
  //IF ELSE statement to determine the alignment of the arm
  if(tiltVal == 1) {
  servoArm.write(60);
  } else {
  servoArm.write(170);
  }
  

}

  
  
  



