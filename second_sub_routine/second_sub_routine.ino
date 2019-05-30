


void setup() {


pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
red();
yellow();
green();



}



void red() {
Serial.println("redblink");
digitalWrite(9,HIGH);
delay(500);
digitalWrite(9,LOW);
delay(500);



   
}



void yellow() {
Serial.println("yellowblink");
digitalWrite(6,HIGH);
delay(500);
digitalWrite(6,LOW);
delay(500);



   
}



void green() {
Serial.println("greenblink");
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);
delay(500);



   
}
