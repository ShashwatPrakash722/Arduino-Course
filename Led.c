void setup()
{
  pinMode(11, OUTPUT);
}
// more resistance - Less brigthness

void loop()
{
  digitalWrite(11, HIGH); // Writting
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
