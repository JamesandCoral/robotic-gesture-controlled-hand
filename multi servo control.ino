#include <Servo.h>  // add servo library
 

// this defines the servos
Servo myservo1;
Servo myservo2;
Servo myservo3;
 

// this defines the potentiometer pins and its values
int potpin1 = 0; 
int val1;
int potpin2 = 1; 
int val2;    
int potpin3 = 2; 
int val3;        
 
void setup() {
  // this attaches the servos to the pins on the arduino board
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
}
 


void loop() {
  val1 = analogRead(potpin1);            //this code says that potentiometer 1 reads the inputs from potpin 1
  val1 = map(val1, 0, (1023/5), 0, 180);     // then mappping the potentiometer to match the finger movement
  myservo1.write(val1); //the servo then writes the potentiometer inputs

  val2 = analogRead(potpin2);            
  val2 = map(val2, 0, (1023/5), 0, 180);     
  myservo2.write(val2);

  val3 = analogRead(potpin3);            
  val3 = map(val3, 0, (1023/5), 0, 180);     
  myservo3.write(val3);                           
}