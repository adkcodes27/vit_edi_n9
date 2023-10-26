
const int dry = 630;//value for dry sensor
const int wet = 460;//value for wet sensor


void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);

  int percentageHumidity = map(sensorVal, wet, dry, 100, 0);

  Serial.print(percentageHumidity);
  Serial.println("%"); 

  delay(1000);

}
