const int led1=3;
const int led2=5;
const int led3=7;
const int led4=9;
const int sw1=10;
const int sw2=11;
const int sw3=12;
const int sw4=13;
const int sw5=2;
void setup() {
  pinMode(led1,HIGH);
  pinMode(led2,HIGH);
  pinMode(led3,HIGH);
  pinMode(led4,HIGH);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(sw3,INPUT_PULLUP);
  pinMode(sw4,INPUT_PULLUP);
  pinMode(sw5,INPUT_PULLUP);
  attachInterrupt(0,warikomi,CHANGE);
}

void loop() {
  if

}
