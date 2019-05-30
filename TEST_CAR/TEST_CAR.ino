 int left1=9;
 int left2=5;
 int right2=13;
 int right1=3;
void setup() {
pinMode(left1, OUTPUT);
pinMode(left2, OUTPUT);
pinMode(right1, OUTPUT);
pinMode(right2, OUTPUT);
Serial.begin(9600);


}
void loop() {
analogWrite(left1,200);
delay(200);
analogWrite(left1,0);
delay(2000);
}
