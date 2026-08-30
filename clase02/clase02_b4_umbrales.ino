void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);  Serial.println(valor);
  if (valor < 500) {           // 500 es el umbral
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(300);
}
