#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
int trigPin = 12;
int echoPin = 11;
int red= 9;
int yellow= 6;
int green=5;
long duration;
int distance;
int pos = 0; 
Servo myservo;
int brightness= 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
	lcd.begin();
	lcd.backlight();
  pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
 myservo.attach(3); 
}

void loop()
{	  
	  lcd.print("Welcome to YULA Boys");
    delay(1000);
   lcd.clear();
if(distance<3 ){
digitalWrite( 9, HIGH );
digitalWrite( 6,  LOW);
digitalWrite( 5,  LOW);
}
if(distance>3 && distance<5){
digitalWrite( 5, HIGH );
digitalWrite( 6,  LOW);
digitalWrite( 9,  LOW);
}
if(distance>5){
digitalWrite( 5, LOW );
digitalWrite( 6,  HIGH);
digitalWrite( 9,  LOW);
}
     for (pos = 0; pos <= 180; pos += 10) { 
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 10) { 
    myservo.write(pos);             
    delay(15);                       
  }
   digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;

Serial.print("Distance: ");
Serial.println(distance);

Serial.print("PhotoRead: ");
Serial.println(analogRead(0));
}
