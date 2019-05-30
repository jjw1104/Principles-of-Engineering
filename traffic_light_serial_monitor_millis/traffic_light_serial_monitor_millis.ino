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
 Serial.print( "time=" );
 Serial.println( time );
 
 Serial.println(millis());
 
 Serial.println("green on ");
 digitalWrite(green,HIGH);
 delay(time);
  Serial.println("green off ");
 digitalWrite(green,LOW);
 delay(time);
 Serial.println("yellow on");
 digitalWrite(yellow,HIGH);
 delay(time);
  Serial.println("yellow off ");
 digitalWrite(yellow,LOW);
 delay(time);
 Serial.println("red on ");
 digitalWrite(red,HIGH);
 delay(time);
  Serial.println("red off ");
 digitalWrite(red,LOW);
 delay(time);
 time=time+100;

}
