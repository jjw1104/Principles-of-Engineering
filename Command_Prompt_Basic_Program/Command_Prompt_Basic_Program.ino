
char msg[30];

char message[3] = "red";
void setup() {
Serial.begin(9600);

}

void loop() {
while (!Serial.available());
delay(20);

for(int cnt =0; Serial.available(); cnt++)
{
  msg[cnt] = Serial.read();
}
Serial.println("TEST");
Serial.println(msg);

}
