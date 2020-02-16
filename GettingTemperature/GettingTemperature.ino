int LM35=A0;
float temp;
float tempr;
int red = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(LM35,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(LM35);
  temp = analogRead(LM35);
  temp = analogRead(LM35);
  tempr = (temp * 500)/1023;
  Serial.print("TEMPERATUURE: ");
  Serial.println(tempr);
  delay(1000);
  if ( tempr > 30){
    digitalWrite(red,HIGH);
  } else
  digitalWrite(red,LOW);
  
}
