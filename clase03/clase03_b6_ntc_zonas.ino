void setup() {
  Serial.begin(9600);
}

void loop() {
  int calor = analogRead(A0);
  Serial.println(calor);
  if      (calor > 700) { Serial.println("CALIENTE"); }
  else if (calor > 400) { Serial.println("TIBIO"); }
  else                  { Serial.println("GUARDALO"); }
  delay(300);
}
