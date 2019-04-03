int photocellPin = 3;
int photocellReading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop(void) {
  // put your main code here, to run repeatedly:
  photocellReading = analogRead(photocellPin);

  Serial.print("Analog reading = ");
  Serial.print(photocellReading);

  delay(1000);
}
