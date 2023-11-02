#include "infrarojoDistancia.h"
#include <Arduino.h>

extern int irValue;

void declaracion_infrarojoDistancia()
{
  pinMode(irPin, INPUT);
}

void lectura_infrarojoDistancia()
{
  irValue = digitalRead(irPin);
}

void prueva_infrarojoDistancia()
{
    if (irValue == LOW) {
    // El sensor ha detectado un objeto cercano
    Serial.println("Objeto detectado");
  } else {
    // No se ha detectado un objeto cercano
    Serial.println("Ningún objeto detectado");
  }

  delay(500); // Pequeña pausa antes de la siguiente lectura
}