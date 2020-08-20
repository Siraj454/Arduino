int ledPin=13;
int buttonPin=7;
int buttonNew;
int buttonOld=1;
int ledState=0;
int dt=100;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  buttonNew=digitalRead(buttonPin);
  Serial.println(buttonNew);
  if (buttonOld==0 && buttonNew==1){
    if(ledState==0){
      digitalWrite(ledPin,HIGH);
      ledState=1;
    }
     else{ 
        digitalWrite(ledPin,LOW);
        ledState=0;
  }
 
 }
buttonOld=buttonNew;
delay(dt);

}
