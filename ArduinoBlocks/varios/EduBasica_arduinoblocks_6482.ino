void setup()
{
  pinMode(4, INPUT);
  pinMode(10, OUTPUT);
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
}


void loop()
{

    if (digitalRead(4)) {
      digitalWrite(10,HIGH);

    }
    if (digitalRead(7)) {
      digitalWrite(11,HIGH);

    }
    while ((digitalRead(4) && digitalRead(7))) {
      digitalWrite(11,HIGH);
      delay(100);
      digitalWrite(11,LOW);
      digitalWrite(10,HIGH);
      delay(100);
      digitalWrite(10,LOW);
    }
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);

}