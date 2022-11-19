int motionSensor = 2;
void setup()
{
  pinMode(motionSensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int motionSensorValue = digitalRead(motionSensor);
  Serial.println(motionSensorValue);
  delay(1000);
}
