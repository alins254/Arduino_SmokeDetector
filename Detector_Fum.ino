const int photocellPin = 4;
const int buzzerPin = 7;
int photocellValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(photocellPin, INPUT);
}

void beep(void){
     digitalWrite(buzzerPin, HIGH);
     delay(300);
     digitalWrite(buzzerPin, LOW);
     delay(100);
     digitalWrite(buzzerPin, HIGH);
     delay(150);
  digitalWrite(buzzerPin, LOW);
     delay(200);
}

void loop() {
  // put your main code here, to run repeatedly:

    photocellValue = analogRead(photocellPin);
    Serial.print("Analog reading = ");
    Serial.print(photocellValue);
   
   if(photocellValue < 3 ){
      Serial.println(" - Led ars/obturat!");
      beep();
    } else if (photocellValue < 20 ){
      Serial.println(" - Smoke detected!");
      digitalWrite(buzzerPin, HIGH);
    } else if (photocellValue < 30 ){
      digitalWrite(buzzerPin, LOW);
      Serial.println(" - Steam detected!");
    } else{
      digitalWrite(buzzerPin, LOW);
      Serial.println(" - All clean!");
    }
    delay(1000);
  }
