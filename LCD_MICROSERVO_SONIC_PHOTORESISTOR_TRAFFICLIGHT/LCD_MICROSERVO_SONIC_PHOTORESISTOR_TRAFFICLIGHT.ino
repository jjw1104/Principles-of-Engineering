//why does it print a negative number on my lcd
#include <Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

Servo myservo;  
LiquidCrystal_I2C lcd(0x27, 16, 2);

int trigPin = 5;
int echoPin = 4;
int pos = 0;
int green = 3; //change location for program to work
int yellow = 9;
int red = 11; 
int brightness = 0;  

long duration;
int distance;

void setup() {

  lcd.begin();
 
  myservo.attach(8); 
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop() {

 while (analogRead(0)>300 && analogRead(0)<400){
    analogWrite(yellow, brightness);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    myservo.write(0);
    lcd.setCursor(0,0);
    lcd.print("yellow");

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;

Serial.print("Distance: ");
Serial.println(distance);

brightness= 255-40*distance;

if (brightness<50)
{
  lcd.setCursor(0,8);
  lcd.print("L "); //L stands for LOW brightness
}
if (brightness>50 && brightness<125)
{
  lcd.setCursor(0,8);
  lcd.print("ML"); //ML stands for MEDIUM LOW brightness
}
if (brightness>125 && brightness<200)
{
  lcd.setCursor(0,8);
  lcd.print("MH"); //MH stands for MEDIUM HIGH brightness
}
if (brightness>200)
{
  lcd.setCursor(0,8);
  lcd.print("H "); //H stands for HIGH brightness
}
}
  
 while (analogRead(0)<225){
    digitalWrite(yellow, LOW);
    Serial.println(brightness);
    analogWrite(red, brightness);
    digitalWrite(green, LOW);
    myservo.write(80);
    lcd.setCursor(0,0);
    lcd.print("red   ");

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;

Serial.print("Distance: ");
Serial.println(distance);

brightness= 255-20*distance;

if (brightness<50)
{
  lcd.setCursor(0,8);
  lcd.print("L "); //L stands for LOW brightness
}
if (brightness>50 && brightness<125)
{
  lcd.setCursor(0,8);
  lcd.print("ML"); //ML stands for MEDIUM LOW brightness
}
if (brightness>125 && brightness<200)
{
  lcd.setCursor(0,8);
  lcd.print("MH"); //MH stands for MEDIUM HIGH brightness
}
if (brightness>200)
{
  lcd.setCursor(0,8);
  lcd.print("H "); //H stands for HIGH brightness
}
}
  while (analogRead(0)>401){
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    analogWrite(green, brightness);
    myservo.write(160);
    lcd.setCursor(0,0);
    lcd.print("green ");

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;
Serial.print("Distance: ");
Serial.println(distance);

brightness= 255-20*distance; //makes brightness higher if hand is closer to sonic sensor

if (brightness<50)
{
  lcd.setCursor(0,8);
  lcd.print("L "); //L stands for LOW brightness
}
if (brightness>50 && brightness<125)
{
  lcd.setCursor(0,8);
  lcd.print("ML"); //ML stands for MEDIUM LOW brightness
}
if (brightness>125 && brightness<200)
{
  lcd.setCursor(0,8);
  lcd.print("MH"); //MH stands for MEDIUM HIGH brightness
}
if (brightness>200)
{
  lcd.setCursor(0,8);
  lcd.print("H "); //H stands for HIGH brightness
}
}
}
