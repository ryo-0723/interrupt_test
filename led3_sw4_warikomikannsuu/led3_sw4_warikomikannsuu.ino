const int led1=3;
const int led2=5;
const int led3=7;
const int sw1=10;
const int sw2=11;
const int sw3=12;
const int sw4=2;
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(sw1,INPUT_PULLUP);
pinMode(sw2,INPUT_PULLUP);
pinMode(sw3,INPUT_PULLUP);
pinMode(sw4,INPUT_PULLUP);
attachInterrupt(0,takagi,CHANGE);
}

void loop() {
  if(digitalRead(sw1)==LOW){
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led2,HIGH);
    digitalWrite(led1,LOW);
    delay(500);
    digitalWrite(led3,HIGH);
  }
  if(digitalRead(sw2)==LOW){
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
  }
  if(digitalRead(sw3)==LOW){
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led3,HIGH);
  }
}
void takagi(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(100);
}
