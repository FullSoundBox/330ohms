// Este método detecta si presionas el pushbutton
// en el pin 5, pero debido a que sensamos constantemente la entrada
// el programa no funciona eficazmente
//Declaración de constantes
const uint8_t btn_pin = 2;
const uint8_t led_pin = 5;

//Variables globales
uint8_t estado_led = LOW;
uint8_t previo_btn= HIGH;

void setup(){
  pinMode(btn_pin,INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);
  }

void loop(){
  //rutina de sensado para el push button
  uint8_t estado_btn = digitalRead(btn_pin);
  if( (estado_btn == LOW) && (previo_btn == HIGH)){
    estado_led = !estado_led;
    digitalWrite(led_pin, estado_led);
    }
   previo_btn = estado_btn;
  delay(500);
}
