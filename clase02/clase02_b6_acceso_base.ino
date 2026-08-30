int boton = 2;
int cuenta = 0;                // pulsaciones que llevo contadas
int antes = 0;                 // que leia el boton la vuelta pasada
unsigned long inicio = 0;      // cuando arranco la ventana de 5 s

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT);
}

void loop() {
  int ahora = digitalRead(boton);
  if (ahora == 1 && antes == 0) {            // FLANCO: recien se presiono
    if (cuenta == 0) { inicio = millis(); }  // la primera arranca el reloj
    cuenta = cuenta + 1;
    Serial.println(cuenta);
  }
  antes = ahora;

  if (cuenta == 3) {                         // llego a 3: veamos el reloj
    if (millis() - inicio <= 5000) {
      Serial.println("ACCESO");              // <-- aqui tu feedback de EXITO
    } else {
      Serial.println("ALARMA");              // <-- aqui tu feedback de FRACASO
    }
    cuenta = 0;                              // y arrancamos de nuevo
  }
}
