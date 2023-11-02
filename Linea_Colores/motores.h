#ifndef motores_h
#define motores_h
  #define enableA 7
  #define entrada1 6//DELANTE
  #define entrada2 5//ATRAS
  

  #define entrada3 4//ATRAS
  #define entrada4 3//DELANTE
  #define enableB 2

  extern int velocidad_motor;
  extern int velocidad_motor_B;
  extern int velocidad_motor_A;



void declaracion_motores();

void delante_motores();

void atras_motores();

void der_motores();

void izq_motores();

void apagado_motores();

void reduccion_motores();

void aumento_motores();

void aumentoUno_motores(char motor);

void reduccionUno_motores(char motor);

void igualar_motores();

void prueva_motores();

#endif