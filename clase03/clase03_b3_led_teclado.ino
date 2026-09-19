int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {    // hay algo esperando en el buzon?
    char c = Serial.read();        // saca UN caracter, el mas viejo
    if (c == '1') { digitalWrite(led, HIGH); }
    if (c == '0') { digitalWrite(led, LOW); }
  }
}
