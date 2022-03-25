// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, 1);
  digitalWrite(12, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13,0);
  digitalWrite(12, 1);
  delay(1000); // Wait for 1000 millisecond(s)
}
