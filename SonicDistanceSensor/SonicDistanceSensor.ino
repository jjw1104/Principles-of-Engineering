int trigPin = 12;
int echoPin = 11;
int red= 9;
int yellow= 6;
int green=5; 

long duration;
int distance;


void setup() {
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
Serial.begin(9600); 

}


void loop() {



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
