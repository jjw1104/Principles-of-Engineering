char msg[30];

void setup() {
  Serial.begin(9600);
  Serial.println("WELCOME TO AUTOCATCHER DATABASE \nENTER COLOR FOR CRIMINAL CAR");
  Serial.println("");
}

void loop() {
  
  while (!Serial.available ());
  delay(20);

  for (int cnt = 0; Serial.available(); cnt++) {
    msg[30] = Serial.read();
    Serial.print("CRIMINAL CAR SET TO ");
    Serial.print(msg);
  }
  if (msg =="Red" ) {
   Serial.println("good");
    }
}
