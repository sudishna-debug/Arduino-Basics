void setup() {
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value);
  if (value > 10) {
    digitalWrite(8,HIGH);
    Serial.println("ABSENCES OF LIGHT")
  }
  else {
    digitalWrite(8 ,LOW);
    Serial.println("PRESENCE OF LIGHT")
  }
  delay(200);
 
}

