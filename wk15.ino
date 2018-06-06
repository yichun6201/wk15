

void setup() {

Serial.begin(9600);}

void loop() {
int sensorRead = analogRead(A0);
{
    if(sensorRead< 100){sensorRead=0;}
  else if(sensorRead>257){sensorRead=257;}
  int ledDimming = map(sensorRead,0, 257, 0, 255);
  analogWrite(3,ledDimming);
  Serial.println(ledDimming);
  delay(2);
}

}
