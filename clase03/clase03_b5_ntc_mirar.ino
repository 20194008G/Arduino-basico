void setup() {
  Serial.begin(9600);
}

void loop() {
  int calor = analogRead(A0);   // el NTC, en el mismo divisor del LDR
  Serial.println(calor);        // MIRA el numero antes de decidir nada
  delay(300);
}
