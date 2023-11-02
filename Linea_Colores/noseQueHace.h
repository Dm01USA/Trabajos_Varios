#ifndef  noseQueHace_h
#define noseQueHace_h

  #include "TCS230.h"
  #include "motores.h"
  
  // Stores frequency read by the photodiodes
  int redFrequency = 0;
  int greenFrequency = 0;
  int blueFrequency = 0;

  // Stores the red. green and blue colors
  int redColor = 0;
  int greenColor = 0;
  int blueColor = 0;

  void que_hace()
  {
    // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  
  // Reading the output frequency
  redFrequency = pulseIn(sensorOut, LOW);
  // Remaping the value of the RED (R) frequency from 0 to 255
  // You must replace with your own values. Here's an example: 
  // redColor = map(redFrequency, 70, 120, 255,0);
  redColor = map(redFrequency, 74, 445, 255,0);
  
  // Printing the RED (R) value
  Serial.print("R = ");
  Serial.print(redColor);
  delay(100);
  
  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  greenFrequency = pulseIn(sensorOut, LOW);
  // Remaping the value of the GREEN (G) frequency from 0 to 255
  // You must replace with your own values. Here's an example: 
  // greenColor = map(greenFrequency, 100, 199, 255, 0);
  greenColor = map(greenFrequency, 75 , 445, 255, 0);
  
  // Printing the GREEN (G) value  
  Serial.print(" G = ");
  Serial.print(greenColor);
  delay(100);
 
  // Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  blueFrequency = pulseIn(sensorOut, LOW);
  // Remaping the value of the BLUE (B) frequency from 0 to 255
  // You must replace with your own values. Here's an example: 
  // blueColor = map(blueFrequency, 38, 84, 255, 0);
  blueColor = map(blueFrequency, 107, 200, 255, 0);
  
  // Printing the BLUE (B) value 
  Serial.print(" B = ");
  Serial.print(blueColor);
  delay(100);

  // Checks the current detected color and prints
  // a message in the serial monitor
  if(redColor >184 &&greenColor >184&&blueColor >400&&redColor <284 &&greenColor <284&&blueColor<520){
    der_motores();
  }
  else
  {
    delante_motores();
  }
  /*
  if (redColor > greenColor && redColor > blueColor) {
  Serial.println(" - RED detected!");
} else if (greenColor > redColor && greenColor > blueColor) {
  Serial.println(" - GREEN detected!");
} else if (blueColor > redColor && blueColor > greenColor) {
  Serial.println(" - BLUE detected!");
  digitalWrite(entrada1, HIGH);
  digitalWrite(entrada2, LOW);
  digitalWrite(entrada3, HIGH);
  digitalWrite(entrada4, LOW);
  analogWrite(enableA, 130);
  analogWrite(enableB, 130);
} else {
  digitalWrite(entrada1, HIGH);
  digitalWrite(entrada2, LOW);
  digitalWrite(entrada3, HIGH);
  digitalWrite(entrada4, LOW);
  analogWrite(enableA, 50);
  analogWrite(enableB, 0);
}
*/
  }

#endif 