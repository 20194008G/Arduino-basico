int verde = 13;
int rojo = 12;

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() {
  digitalWrite(verde, HIGH);  digitalWrite(rojo, LOW);
  delay(2000);
  digitalWrite(verde, LOW);   digitalWrite(rojo, HIGH);
  delay(2000);
}
