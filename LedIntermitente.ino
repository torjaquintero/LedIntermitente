/*=====================================================
=====================Sys On Chip=======================
=======================================================

Programa que enciende y apaga de manera intermitente
el LED de la placa que está conectado al PIN 13.
=======================================================
=====================================================*/


void setup() {
  // Configura el pin 13 (LED_BUILTIN), como salida
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Enciende el LED por 1 segundo
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  // Apaga el LED por 2 segundos
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}
