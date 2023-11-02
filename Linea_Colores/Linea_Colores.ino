//librerias propias del codigo
#include "TCS230.h"
#include "motores.h"
#include "noseQueHace.h"
#include "servo.h"
#include "ultrasonido.h"
#include "infrarojoDistancia.h"

/*          _COSAS POR HACER_

*(opcional) descripcion de las funciones y que hacen

*dalta servomotor cuadrar eso para saber que hacer

*pinza diseño

*provar velocidad de motores

*terminar TCS230:
  -> lo que se coloco se puso en la libreria.h de noseQueHace
  -> comprobar funcionamiento

*probar ultrasonidos:
  ->librerira funcionamiento
  ->pines donde se van a poner
  ->guardado de datos y buen funcionamiento

*sensor de distancia ir:
  ->averiguar si sepuede leer analogico, al parecer solo lee digital

-----------------------------------------------------------------------------------------
en todas las librerias .h se encuentran pines de coneccion y funciones basicas que tienen
en librerias .cpp se encuentran todo lo que es las funciones con lo que hacen y todos los
nombres de funciones tienen al final a que libreria pertenecen.
*/

/*variables*/
int velocidad_motor;
int velocidad_motor_B;
int velocidad_motor_A;

long duration[4] = {0, 0, 0, 0};
int distance[4] = {0, 0, 0, 0};

int irValue;

void setup() {

  declaracion_TCS230();
  declaracion_motores();
  declaracion_ultrasonido();
  declaracion_infrarojoDistancia();
  // Begins serial communication
  Serial.begin(9600);
}

void loop() {
//que_hace();      

//prueva_motores();
//prueva_infrarojoDistancia();
//prueva_ultrasonido();
  
}