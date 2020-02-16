int red =1;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  delay(200);
  digitalWrite(red,LOW);
  delay(200);
}
