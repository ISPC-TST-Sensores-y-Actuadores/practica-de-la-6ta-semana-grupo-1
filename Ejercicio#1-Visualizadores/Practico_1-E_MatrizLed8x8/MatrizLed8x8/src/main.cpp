//Agrego librerias
#include <Arduino.h>
#include <MatrizLed.h>

MatrizLed pantalla; //creamos el bojeto pantalla
void setup() {
  pantalla.begin(12,11,10,1);  // dataPin, clkPin, csPin, numero de matrices de 8x8
}

void loop() {
 pantalla.borrar(); //Borramos cualquier dato que pueda haber en la pantalla
 pantalla.escribirFraseScroll("Hola Mundo",50); //llamamos a la funcion y le pasamos el texto a mostrar, y milisegundos de desplazamiento 
}