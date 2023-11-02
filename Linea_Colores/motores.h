#ifndef motores_h
#define motores_h

  #define entrada1 9//DELANTE
  #define entrada2 10//ATRAS
  #define enableA 3

  #define entrada3 12//ATRAS
  #define entrada4 13//DELANTE
  #define enableB 11

  extern int velocidad_motor;

void declaracion_motores();

void delante_motores();

void atras_motores();

void der_motores();

void izq_motores();

void prueva_motores();

#endif