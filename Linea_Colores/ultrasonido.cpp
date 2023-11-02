#include "ultrasonido.h"
#include <Arduino.h>

extern long duration[];
extern int distance[];

void declaracion_ultrasonido()
  {
    pinMode(trigPin1, OUTPUT);
    pinMode(echoPin1, INPUT);

    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin2, INPUT);

    pinMode(trigPin3, OUTPUT);
    pinMode(echoPin3, INPUT);

    pinMode(trigPin4, OUTPUT);
    pinMode(echoPin4, INPUT);
  }

void seleccionYlectura_ultrasonido(int ultra)
{
  switch(ultra)
  {
//ultrasonido1
    case 0:
    // Genera un pulso ultrasónico
    digitalWrite(trigPin1, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);

    // Mide el tiempo de vuelo del pulso ultrasónico
    duration[0] = pulseIn(echoPin1, HIGH);

    // Calcula la distancia en centímetros
    distance[0] = duration[0] * 0.034 / 2;
    break;

//ultrasonido2
    case 1:
    // Genera un pulso ultrasónico
    digitalWrite(trigPin2, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);

    // Mide el tiempo de vuelo del pulso ultrasónico
    duration[1] = pulseIn(echoPin2, HIGH);

    // Calcula la distancia en centímetros
    distance[1] = duration[1] * 0.034 / 2;
    break;

//ultrasonido3
    case 2:
    // Genera un pulso ultrasónico
    digitalWrite(trigPin3, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin3, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin3, LOW);

    // Mide el tiempo de vuelo del pulso ultrasónico
    duration[2] = pulseIn(echoPin3, HIGH);

    // Calcula la distancia en centímetros
    distance[2] = duration[2] * 0.034 / 2;
    break;

//ultrasonido4
    case 3:
    // Genera un pulso ultrasónico
    digitalWrite(trigPin4, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin4, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin4, LOW);

    // Mide el tiempo de vuelo del pulso ultrasónico
    duration[3] = pulseIn(echoPin4, HIGH);

    // Calcula la distancia en centímetros
    distance[3] = duration[3] * 0.034 / 2;
    break;
  }
}

void lecturaTodo_ultrasonido()
{
  // Imprime la distancia en el Monitor Serie
  for (int i = 0; i < 4; i++) {
      seleccionYlectura_ultrasonido(i);
  }
}

void prueva_ultrasonido()
{
  // Imprime la distancia en el Monitor Serie
  for (int i = 0; i < 4; i++) {
      // Aquí puedes realizar operaciones con el valor de 'i'
      // Por ejemplo, imprimir 'i':
      Serial.print("Distancia ");
      Serial.print(i);
      Serial.print(":");
      Serial.print(distance[i]);
      Serial.println(" cm");
  }
  delay(500);
}