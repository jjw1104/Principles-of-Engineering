/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int red=9;
int yellow=6;
int green=5;


void setup() {
  myservo.attach(3);  
  Serial.begin(9600);
  pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}


void loop() {
  

 

  
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
     Serial.print("Position:");
  Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       
     if(pos<180 && pos>175) {
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
}


if(pos<95 && pos>85){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
}

if(pos>0 && pos<10){
  digitalWrite(green,HIGH);
 digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);

}
  }

  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    Serial.print("Position:");
  Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);    

    if(pos<180 && pos>175) {
   digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
}


if(pos<95 && pos>85){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
}

if(pos>0 && pos<10){
 digitalWrite(green,HIGH);
 digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
}


   
  }



}
