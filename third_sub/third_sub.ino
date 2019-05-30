float x=100;

void setup() {

Serial.begin(9600);

}


void loop() {

Serial.println(mysecondsub());

}


 float mysecondsub() {

x=x/2;
delay(700);
  return x;
}
