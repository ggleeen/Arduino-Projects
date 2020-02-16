int ldrPin = A0;
int red = 2;
int green =4;
int yellow = 6;
int ldrval=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(ldrPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrval=analogRead(ldrPin);
  ldrval=analogRead(ldrPin);
  ldrval=analogRead(ldrPin);
  Serial.println(ldrval);
  delay(200);
  if (ldrval <= 200 && ldrval >= 150){
    digitalWrite(green,HIGH);
    digitalWrite(yellow,LOW);
    digitalWrite(red,LOW);
  }else if (ldrval >= 100 && ldrval <=149) {
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
}else {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
}
}
