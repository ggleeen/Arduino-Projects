int red1 =1;
int red2 =3;
int red3 =5;
int red4 =7;
int red5 =9;
void setup() {
  // put your setup code here, to run once:
  pinMode (red1,OUTPUT);
  pinMode (red2,OUTPUT);
  pinMode (red3,OUTPUT);
  pinMode (red4,OUTPUT);
  pinMode (red5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(red5,HIGH);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(red5,LOW);
  delay(100);
  digitalWrite(red1,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,LOW);
  digitalWrite(red5,LOW);
  delay(100);
}
