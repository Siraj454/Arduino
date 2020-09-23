
int buzzPin=8;
const int pingPin = 3; 

long duration, distanceInches, distanceCm;
void setup()
{
 Serial.begin(9600); 
 pinMode(buzzPin,OUTPUT);

}
void loop()
{
 pinMode(pingPin, OUTPUT); 
 digitalWrite(pingPin, LOW);
 delayMicroseconds(2);
 digitalWrite(pingPin, HIGH);
 delayMicroseconds(5);
 digitalWrite(pingPin, LOW);
 pinMode(pingPin, INPUT); 
 duration = pulseIn(pingPin, HIGH);
 distanceInches = microsecondsToInches(duration); 
 distanceCm = microsecondsToCentimeters(duration);
 Serial.print(distanceInches); 
 Serial.print("in, ");
 Serial.print(distanceCm);
 Serial.print("cm");
 Serial.println();
 delay(100);
 if (distanceInches<100 && distanceInches>0){
  digitalWrite(buzzPin,HIGH);
 
}
else{
  digitalWrite(buzzPin,LOW);
}
}
long microsecondsToInches(long microseconds)
{
 return microseconds / 74 / 2; 
}
long microsecondsToCentimeters(long microseconds)
{
 return microseconds / 29 / 2; 
}
