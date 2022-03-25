// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  if( digitalRead(8) == HIGH){
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  }  
}
