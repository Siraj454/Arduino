#include<Stepper.h>
const int stepsPerRevolution=2048;
int motSpeed=10;
int dt=100;
Stepper myStepper=Stepper(stepsPerRevolution,8,10,9,11);
void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution);
  delay(dt);
  
 

}
