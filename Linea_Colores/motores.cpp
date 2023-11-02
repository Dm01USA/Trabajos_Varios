#include "motores.h"
#include <Arduino.h>

extern int velocidad_motor;
extern int velocidad_motor_B;
extern int velocidad_motor_A;

  void declaracion_motores()
  {
    pinMode(entrada1, OUTPUT);
    pinMode(entrada2, OUTPUT);
    pinMode(enableA, OUTPUT);
    pinMode(entrada3, OUTPUT);
    pinMode(entrada4, OUTPUT);
    pinMode(enableB, OUTPUT);
  }

  void aumentoUno_motores(char motor)
  {
    switch (motor) {
      case 'A':
        if (velocidad_motor_A < 255) {
          velocidad_motor_A = velocidad_motor_A + 1;
          analogWrite(enableA, velocidad_motor_A);
          delay(1);
        }
        break;
      case 'B':
        if (velocidad_motor_B < 255) {
          velocidad_motor_B = velocidad_motor_B + 1;
          analogWrite(enableB, velocidad_motor_B);
          delay(1);
        }
        break;
      default:
        // Si el motor no es 'A' o 'B', no se realiza ninguna acción.
        break;
    }
  }

  void reduccionUno_motores(char motor)
  {
    switch (motor) {
      case 'A':
        if (velocidad_motor_A > 0) {
          velocidad_motor_A = velocidad_motor_A - 1;
          analogWrite(enableA, velocidad_motor_A);
          delay(1);
        }
        break;
      case 'B':
        if (velocidad_motor_B > 0) {
          velocidad_motor_B = velocidad_motor_B - 1;
          analogWrite(enableB, velocidad_motor_B);
          delay(1);
        }
        break;
      default:
        // Si el motor no es 'A' o 'B', no se realiza ninguna acción.
        break;
    }
  }

  void reduccion_motores()
  {
    if(velocidad_motor_B > 0 && velocidad_motor_A > 0)
    {
      velocidad_motor_A = velocidad_motor_A - 1;
      velocidad_motor_B = velocidad_motor_B - 1;
      analogWrite(enableA, velocidad_motor_A );
      analogWrite(enableB, velocidad_motor_B );
      delay(1);
    }  
  }

  void aumento_motores()
  {
    if(velocidad_motor_B < 255 && velocidad_motor_A < 255)
    {
      velocidad_motor_B = velocidad_motor_B + 1;
      velocidad_motor_A = velocidad_motor_A + 1;
      analogWrite(enableA, velocidad_motor_A );
      analogWrite(enableB, velocidad_motor_B );
      delay(1);
    }
  }

  void delante_motores()
  {
    digitalWrite(entrada1,HIGH);
    digitalWrite(entrada2,LOW);
    digitalWrite(entrada3,LOW);
    digitalWrite(entrada4,HIGH);
  }

  void atras_motores()
  {
    digitalWrite(entrada1,LOW);
    digitalWrite(entrada2,HIGH);
    digitalWrite(entrada3,HIGH);
    digitalWrite(entrada4,LOW);
  }

  void der_motores()
  {
    digitalWrite(entrada1,HIGH);
    digitalWrite(entrada2,LOW);
    digitalWrite(entrada3,HIGH );
    digitalWrite(entrada4,LOW);
  }

  void izq_motores()
  {
    digitalWrite(entrada1, LOW);
    digitalWrite(entrada2,HIGH);
    digitalWrite(entrada3,LOW);
    digitalWrite(entrada4,HIGH);
  }

  void apagado_motores()
  {
    digitalWrite(entrada1, LOW);
    digitalWrite(entrada2, LOW);
    digitalWrite(entrada3, LOW);
    digitalWrite(entrada4, LOW);
  }

  void igualar_motores()
  {
    if((velocidad_motor_A != velocidad_motor_B) && (velocidad_motor_A < velocidad_motor_B))
    {
      velocidad_motor_B = velocidad_motor_B - 1;
    }
    else if((velocidad_motor_A != velocidad_motor_B) && (velocidad_motor_A > velocidad_motor_B))
    {
      velocidad_motor_A = velocidad_motor_A - 1;
    }
  }

  void prueva_motores()
  {
    for (; velocidad_motor_A != velocidad_motor_B;){igualar_motores();}
    for (; velocidad_motor_A >= 0;){reduccion_motores();}
    delante_motores();
    for (;velocidad_motor_A <= 130;){aumento_motores();}
    delay(1000);

    for (; velocidad_motor_A >= 0;){reduccion_motores();}
    atras_motores();
    for (;velocidad_motor_A <= 130;){aumento_motores();}
    delay(1000);

    for (; velocidad_motor_A >= 0;){reduccion_motores();}
    der_motores();
    for (;velocidad_motor_A <= 130;){aumento_motores();}
    delay(1000);

    for (; velocidad_motor_A >= 0;){reduccion_motores();}
    izq_motores();
    for (;velocidad_motor_A <= 130;){aumento_motores();}
    delay(1000);

    for (; velocidad_motor_A >= 0;){reduccion_motores();}
    apagado_motores();
    delay(5000);
  }