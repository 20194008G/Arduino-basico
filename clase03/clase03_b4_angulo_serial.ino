#include <Servo.h>
Servo miServo;

void setup() {
  Serial.begin(9600);
  miServo.attach(9);
}

void loop() {
  if (Serial.available() > 0) {
    int angulo = Serial.parseInt();        // "180" de texto -> 180 numero
    Serial.read();                         // saca el Enter del buzon
    if (angulo >= 0 && angulo <= 180) {    // no confies en lo que llega
      miServo.write(angulo);
      Serial.println(angulo);              // el eco: te escuche
    }
  }
}
