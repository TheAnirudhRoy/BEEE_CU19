void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(12, LOW);
  delay(300); // Wait for 300 millisecond(s)
}