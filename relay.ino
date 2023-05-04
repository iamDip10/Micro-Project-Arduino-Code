void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH) {
    digitalWrite(2, HIGH);
    Serial.println("ON");
  } else {
    digitalWrite(2, LOW);
    Serial.println("OFF");
  }
}
