void setup()
{
  Serial.begin(38400);
  Serial.println("Serial Coommunication Test");
}

void loop()
{
 if(Serial.available())
 {
  int var = Serial.read();
  Serial.println(var); 
 }
}
