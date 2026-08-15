int parpadeos = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  delay(500);
  digitalWrite(13, LOW);   delay(500);
  parpadeos = parpadeos + 1;
  Serial.println(parpadeos);
}
