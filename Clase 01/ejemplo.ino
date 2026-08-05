const int LED_VERDE = 13;        // tipo, constante y asignacion

int contador = 0;
bool encendido = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_VERDE, OUTPUT);
  Serial.println("Listo para empezar");   // string
}

void loop() {
  encendido = !encendido;
  digitalWrite(LED_VERDE, encendido ? HIGH : LOW);
  contador++;
  if (contador % 5 == 0) {
    Serial.print("Parpadeos: ");
    Serial.println(contador);
  }
  delay(500);
}
