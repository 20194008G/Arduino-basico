int tiempo = 500;

void setup() {
  Serial.begin(9600);      // abre el canal con la computadora
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  delay(tiempo);
  digitalWrite(13, LOW);   delay(tiempo);
  Serial.println(tiempo);  // te dice cuanto esta esperando
}
