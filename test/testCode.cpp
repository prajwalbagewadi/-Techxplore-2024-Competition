void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,1);
  delay(500);
  digitalWrite(13,0);
  delay(500);
  if(!digitalRead(13)){
    digitalWrite(11,1);
    delay(500);
    digitalWrite(11,0);
    delay(500);
  }
  
}