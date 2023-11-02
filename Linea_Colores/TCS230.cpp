  #include "TCS230.h"
  #include <Arduino.h>

  void declaracion_TCS230()
  {
    // Setting the outputs
    pinMode(S0, OUTPUT);
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(S3, OUTPUT);
    // Setting the sensorOut as an input
    pinMode(sensorOut, INPUT);

    // Setting frequency scaling to 20%
    digitalWrite(S0,HIGH);
    digitalWrite(S1,LOW);
  }