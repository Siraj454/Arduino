#define ENA 3
#define IN1 2
#define IN2 4
int rotDirection;
int potPin=A0;
int potVal;
int potPwm;
int dt=10;


void setup() {
  // put your setup code here, to run once:
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  potPwm=(255./1023.)*potVal;
  analogWrite(ENA,potPwm);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(dt);
}
