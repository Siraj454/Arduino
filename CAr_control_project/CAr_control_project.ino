
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
int dt=1000;

void setup() {
  // put your setup code here, to run once:
 
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT); 
  pinMode(IN3,OUTPUT); 
  pinMode(IN4,OUTPUT); 
  

}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(dt);

}
