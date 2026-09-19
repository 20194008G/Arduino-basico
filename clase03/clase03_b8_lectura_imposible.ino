void setup() {
  Serial.begin(9600);
}

void loop() {
  int calor = analogRead(A0);
  if (calor == 0 || calor == 1023) {   // ni frio ni calor: cable suelto
    Serial.println("SENSOR?");
  } else {
    Serial.println(calor);             // aqui adentro van tus tres zonas
  }
  delay(300);
}
