void setup() {

  pinMode(0, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(1, OUTPUT);
}
void loop() {
  int input=analogRead(A1);
  int powr = map(input, 0, 1023, 1, 3);
  if(powr==1)
  {
    digitalWrite(1,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  if(powr==2)
  {
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
  if(powr==3)
  {
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  }
  digitalWrite(0, HIGH);   
  delay(1/powr);              
  digitalWrite(0, LOW);   
  delay(1/powr);              
}
