#include <Servo.h>                 // 1: traemos la caja que el Arduino no sabe
int perilla = A0;
Servo miServo;                     // 2: un cajon que guarda un SERVO

void setup() {
  miServo.attach(9);               // es el pinMode del servo
}

void loop() {
  int lectura = analogRead(perilla);           // igual que en la clase 2
  int angulo = map(lectura, 0, 1023, 0, 180);  // 3: ahora traduce a GRADOS
  miServo.write(angulo);                       // el punto: el write DE ESTE
}
