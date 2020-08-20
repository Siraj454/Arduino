int blinkTime;
String msg = "How many Blinks You Want: ";
String msg2="What is Your FAV color";
String fav_color;
String msg1 = "You Want: ";
int ledPin=4;
int delayTime=300;
int j;
String danger="DANGER";
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  
  while (Serial.available()==0) {
    
  }
  blinkTime= Serial.parseInt();
  Serial.print(msg1);
  Serial.println(blinkTime);
  for(j=0;j<blinkTime;j=j+1){
    digitalWrite(ledPin,HIGH);
    delay(delayTime);
    digitalWrite(ledPin,LOW);
    delay(delayTime);
  }
  Serial.println(msg2);
   while (Serial.available()==0) {
    
  }
  fav_color=Serial.readString();
  fav_color.toUpperCase();
  if (fav_color=="RED"){
    Serial.println(danger);
  }
  Serial.println(fav_color);
  
}
