void setup() {
  // put your setup code here, to run once:
  for(int i=6; i<=11; i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(6,HIGH);
    delay(200);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(200);

    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(200);

    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(200);

    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(200);

    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(200);

    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    delay(200);
}
