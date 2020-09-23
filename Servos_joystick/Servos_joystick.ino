#include<Servo.h>
Servo Xservo;
Servo Yservo;
int xpin=A3;
int ypin=A4;
int xservo_pin=7;
int yservo_pin=8;
int Spin=2;
int xVal;
int yVal;
float xangle;
float yangle;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(xpin,INPUT);
   pinMode(ypin,INPUT);
   Xservo.attach(xservo_pin);
   Yservo.attach(yservo_pin);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal=analogRead(xpin);
  yVal=analogRead(ypin);
  xangle=(180./1023.)*xVal;
  yangle=(180./1023.)*yVal;
  
  delay(100);
  Xservo.write(xangle);
  Serial.print("x Value: ");
  Serial.print(xVal);
  Yservo.write(yangle);
  Serial.print(" y Value:");
  Serial.println(yVal);
  delay(100);
}
