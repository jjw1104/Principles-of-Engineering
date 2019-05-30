int green=8;// int= integer (whole number)
int red=13;
int yellow=5;
int time=0;

void setup() {
  pinMode (green, OUTPUT); 
  pinMode (red, OUTPUT); 
  pinMode (yellow, OUTPUT);
}
void loop() {
 digitalWrite(green,HIGH);
 delay(time);
 digitalWrite(green,LOW);
 delay(time);
 time=time+100;

}
