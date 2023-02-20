// Include the AccelStepper Library
#include <AccelStepper.h>

// Define step constants
#define FULLSTEP 4

// Creates two instances
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
AccelStepper stepper1(FULLSTEP, 8, 10, 9, 11);
AccelStepper stepper2(FULLSTEP, 4, 6, 5, 7);
AccelStepper stepper3(FULLSTEP, 13, 3, 12, 2);

void setup() {
  // set the maximum speed, acceleration factor,
  // initial speed and the target position for motor 1
    stepper1.setMaxSpeed(600);
    stepper1.setAcceleration(50.0);
    stepper1.setSpeed(100);
    stepper1.moveTo(21000);

  
  // set the same for motor 2
  stepper2.setMaxSpeed(600);
  stepper2.setAcceleration(50.0);
  stepper2.setSpeed(100);
  stepper2.moveTo(-21000);

  stepper3.setMaxSpeed(500);
  stepper3.setAcceleration(50.0);
  stepper3.setSpeed(100);
  stepper3.moveTo(682);
  
}

void loop() {
  // Change direction once the motor reaches target position
  //if (stepper1.distanceToGo() == 0) 
  //  stepper1.moveTo(-stepper1.currentPosition());
  //if (stepper2.distanceToGo() == 0) 
  //  stepper2.moveTo(-stepper2.currentPosition());
  
  // Move the motor one step
  //stepper1.run();
  //stepper2.run();

  //if (stepper1.distanceToGo() == 0) {
    if (stepper3.distanceToGo() == 0) {
      stepper3.move(682);
      stepper3.setSpeed(100);
    }
    stepper3.runSpeed(); 
  //}
//  stepper3.setMaxSpeed(500);
//  stepper3.setAcceleration(50.0);
//  stepper3.setSpeed(100);
//  stepper3.moveTo(682);
//  delay(500000);
 
}
