int pulsador = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pulsador, INPUT);
}

void loop() {
  int estado = digitalRead(pulsador);
  Serial.println(estado);      // 1 = presionado, 0 = suelto
  delay(200);
}
