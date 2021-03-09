void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  digitalWrite(2,HIGH);
}

void loop(){
  for(int i=0;i<2000;i++){
  left();}
  digitalWrite(2,LOW);
  for(int i=0;i<2000;i++){
  left();}
  digitalWrite(2,HIGH);
}

void left() {
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  delayMicroseconds(300);

}
