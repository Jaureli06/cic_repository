void setup() {
  // put your setup code here, to run once:

}

void loop() {
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);

  pinMode(4,OUTPUT);
  tone(4,3000);
  delay (500);
  noTone(4);
  tone(4,2000);
  delay (500);
  noTone(4);
  

  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  delay(500);
  
}
