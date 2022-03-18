// C++ code
//
const int led = 4;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
