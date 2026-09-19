#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27, 16, 2);  // en blanco? prueba 0X3F

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  int calor = analogRead(A0);
  lcd.clear();
  // aqui va tu logica: la lectura imposible y las tres zonas
  delay(500);
}
