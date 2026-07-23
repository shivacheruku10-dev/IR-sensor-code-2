const int irSensor = 2;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW);

  Serial.begin(115200);
}

void loop() {
  int sensorValue = digitalRead(irSensor);

   
  if (sensorValue == LOW) {
    Serial.println("Object Detected");

    digitalWrite(led, HIGH);      
    digitalWrite(buzzer, HIGH);   
  }
  else {
    Serial.println("No Object");

    digitalWrite(led, LOW);       
    digitalWrite(buzzer, LOW);    
  }

  delay(100);
}
