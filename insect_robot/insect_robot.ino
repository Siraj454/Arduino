#include <Servo.h>
Servo frontServo;
Servo rearServo;
int centerPos = 90; 
int frontRightUp = 72; 
int frontLeftUp = 108; 
int backRightForward = 75; 
int backLeftForward = 105;
void moveForward() 
{
 frontServo.write(frontRightUp);
  rearServo.write(backLeftForward);
 delay(125);
 frontServo.write(centerPos);
 rearServo.write(centerPos);
 delay(65);
 frontServo.write(frontLeftUp);
 rearServo.write(backRightForward);
 delay(125);

 frontServo.write(centerPos);
 rearServo.write(centerPos);
 delay(65);
}
void setup()
{
 frontServo.attach(2);
 rearServo.attach(3);
}
void loop()
{
 moveForward(); 
 delay(200); //time between each step taken, speed of walk
}
