#include "servo.h"
#include <Arduino.h>

  Servo pinza;

void declaracion_servo()
{
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  pinza.attach(9);
}


void pinzaCerrada_servo()
{
  pinza.write(180);
  delay(1000);
  pinza.write(90);
}

void pinzaAbierta_servo()
{
  pinza.write(0);
  delay(500);
  pinza.write(90);
}

void prueva_servo()
{
  
  pinzaAbierta_servo();
  delay(1000);
  pinzaCerrada_servo();
  delay(1000);
}  
