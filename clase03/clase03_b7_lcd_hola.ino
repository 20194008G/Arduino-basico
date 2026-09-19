#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27, 16, 2);   // direccion, columnas, filas

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);                // columna 0, fila 0
  lcd.print("Hola");
  lcd.setCursor(0, 1);                // la fila de abajo
  lcd.print("Arduino");
}

void loop() {
}
