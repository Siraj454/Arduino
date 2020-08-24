#include<Servo.h>
int potPin=A0;
float potVal;
int voltage;
int servoPin=3;
int dt(50);
float angle;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  angle=(180./1023.)*potVal;
  Serial.println(angle);
  myServo.write(angle);
  
 
  delay(dt);
  

}
