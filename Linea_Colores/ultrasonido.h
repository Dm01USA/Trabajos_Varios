#ifndef ultrasonido_h
#define ultrasonido_h

  #define trigPin1 9 // Pin del sensor de ultrasonido TRIG
  #define echoPin1 10 // Pin del sensor de ultrasonido ECHO

  #define trigPin2 9 // Pin del sensor de ultrasonido TRIG
  #define echoPin2 10 // Pin del sensor de ultrasonido ECHO

  #define trigPin3 9 // Pin del sensor de ultrasonido TRIG
  #define echoPin3 10 // Pin del sensor de ultrasonido ECHO

  #define trigPin4 9 // Pin del sensor de ultrasonido TRIG
  #define echoPin4 10 // Pin del sensor de ultrasonido ECHO

  extern long duration[];
  extern int distance[];

  void declaracion_ultrasonido();

  void lecturaTodo_ultrasonido();

  void seleccionYlectura_ultrasonido(int ultra);
  
  void prueva_ultrasonido();

#endif