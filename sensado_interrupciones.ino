// Este método detecta si presionas el pushbutton
// en el pin 5, pero debido a que sensamos constantemente la entrada
// el programa no funciona eficazmente
//Declaración de constantes
const uint8_t btn_pin = 2;
const uint8_t led_pin = 5;

//Variables globales
uint8_t estado_led = LOW;

void setup(){
  pinMode(btn_pin,INPUT_PULLUP);  //creamos las variables que
  pinMode(led_pin, OUTPUT);       //serviran al crear la interrupcion

  attachInterrupt(digitalPinToInterrupt(btn_pin),toggle,FALLING);
  }

void loop(){
  delay(500);     //procesador haciendo otras cosas
}

void toggle(){
  estado_led = !estado_led;
  digitalWrite(led_pin, estado_led);
  }
