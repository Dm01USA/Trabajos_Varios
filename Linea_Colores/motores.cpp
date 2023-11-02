#include "motores.h"
#include <Arduino.h>

extern int velocidad_motor;

  void declaracion_motores()
  {
    pinMode(entrada1, OUTPUT);
    pinMode(entrada2, OUTPUT);
    pinMode(enableA, OUTPUT);
    pinMode(entrada3, OUTPUT);
    pinMode(entrada4, OUTPUT);
    pinMode(enableB, OUTPUT);
  }

  void delante_motores()
  {
    for (velocidad_motor; velocidad_motor >= 0; velocidad_motor --)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    }  
    digitalWrite(entrada1,HIGH);
    digitalWrite(entrada2,LOW);
    digitalWrite(entrada3,LOW);
    digitalWrite(entrada4,HIGH);
    for (velocidad_motor; velocidad_motor <= 130; velocidad_motor ++)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    }
  }

  void atras_motores()
  {
    for (velocidad_motor; velocidad_motor >= 0; velocidad_motor --)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    } 
    digitalWrite(entrada1,LOW);
    digitalWrite(entrada2,HIGH);
    digitalWrite(entrada3,HIGH);
    digitalWrite(entrada4,LOW);
    for (velocidad_motor; velocidad_motor <= 130; velocidad_motor ++)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    }  
  }

  void der_motores()
  {
    for (velocidad_motor; velocidad_motor >= 0; velocidad_motor --)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    } 
    digitalWrite(entrada1,HIGH);
    digitalWrite(entrada2,LOW);
    digitalWrite(entrada3,HIGH );
    digitalWrite(entrada4,LOW);
    analogWrite(enableA, velocidad_motor );
    analogWrite(enableB, velocidad_motor );
    for (velocidad_motor; velocidad_motor <= 130; velocidad_motor ++)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    }
  }

  void izq_motores()
  {
    for (velocidad_motor; velocidad_motor >= 0; velocidad_motor --)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    } 
    digitalWrite(entrada1, LOW);
    digitalWrite(entrada2,HIGH);
    digitalWrite(entrada3,LOW);
    digitalWrite(entrada4,HIGH);
    analogWrite(enableA, velocidad_motor );
    analogWrite(enableB, velocidad_motor );
    for (velocidad_motor; velocidad_motor <= 130; velocidad_motor ++)
    {
      analogWrite(enableA, velocidad_motor );
      analogWrite(enableB, velocidad_motor );
      delay(10);
    }
  }

  void prueva_motores()
  {
    delante_motores();
    delay(1000);
    atras_motores();
    delay(1000);
    der_motores();
    delay(1000);
    izq_motores();
    delay(1000);
  }