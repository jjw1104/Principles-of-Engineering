int green=8;// int= integer (whole number)
int red=13;
int yellow=5;
int time=0;

void setup() {
  pinMode (green, OUTPUT); 
  pinMode (red, OUTPUT); 
  pinMode (yellow, OUTPUT);

  Serial.begin(9600);
  
  
}
void loop() {
 Serial.print("Chargers are the best football team");
 digitalWrite(green,HIGH);
 delay(time);
 digitalWrite(green,LOW);
 delay(time);
 digitalWrite(yellow,HIGH);
 delay(time);
 digitalWrite(yellow,LOW);
 delay(time);
 digitalWrite(red,HIGH);
 delay(time);
 digitalWrite(red,LOW);
 delay(time);
 time=time+100;

}
