int potPin=A1;
int ledPin=6;
int potVal;
float ledVal;
float degVal;
void setup() {
  // put your setup code here, to run once:
   pinMode(potPin,INPUT);
   pinMode(ledPin,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  degVal=(5./1023)*potVal;
  ledVal=(255./1023.)*potVal;
 
  Serial.println();
  Serial.println(degVal);
  Serial.println(ledVal);
  if (degVal>3) {
    analogWrite(ledPin,potVal);
    }
    else{analogWrite(ledPin,0.0);}
}
