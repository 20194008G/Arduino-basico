int tiempo = 500;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(tiempo);
  digitalWrite(13, LOW);
  delay(tiempo);
}
