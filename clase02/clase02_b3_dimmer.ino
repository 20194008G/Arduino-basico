int perilla = A0;
int led = 9;                   // tiene que ser un pin con ~

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int lectura = analogRead(perilla);           // llega de 0 a 1023
  int brillo = map(lectura, 0, 1023, 0, 255);  // lo traduce
  analogWrite(led, brillo);                    // sale de 0 a 255
}
