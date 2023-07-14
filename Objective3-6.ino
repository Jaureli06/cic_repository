#include "ApplicationFunctionSet_Movement.cpp"
#include "DeviceDriverSet_Movement.h"
#include "DeviceDriverSet_Servo.h"
#include "DeviceDriverSet_Ultrasonic.h"


DeviceDriverSet_Servo ServoThing;
DeviceDriverSet_ULTRASONIC UltrasonicThing;
DeviceDriverSet_Motor MotorThing;
 
int distance = 25;

void setup() {
    MotorThing.setupMotor();   
    UltrasonicThing.setupUltrasonic();
    ServoThing.setupServo(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  UltrasonicThing.getDistance(&distance);

  // check if wall infront
  if(distance<25){
    moveRobot(stop);
    delay(500);
    ServoThing.setServoPosition(90);
    UltrasonicThing.getDistance(&distance);

    // check if wall on the right
    if(distance <25){
      ServoThing.setServoPosition(180);
      UltrasonicThing.getDistance(&distance);}
      else {
        moveRobot(forward);
        delay(250);
     

      // check if wall on the left
      if (distance < 25){
        moveRobot(right);
        delay(150);
      } 
      // turn to the left if there is no wall on the left
      else {
        moveRobot(left);
        delay(250);
      }
    }
    delay(150);
    moveRobot(right);
    delay(150);
   
  } else {
      moveRobot(forward);
      delay(150);
    if(distance<25){
    ServoThing.setServoPosition(90);
     ServoThing.setServoPosition(180);
     if(distance<25);
     ServoThing.setServoPosition(0);
     if(distance<25);
  } else { 
    ServoThing.setServoPosition(90);
    delay(150);
  }
  }
}
