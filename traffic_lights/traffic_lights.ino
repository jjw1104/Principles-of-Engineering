/*
  Jeremy wizenfeld created: August 31th
  D13- red light
  D8- green light
  D5- yellow light
*/

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);  
  digitalWrite(8, HIGH);
   digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
   digitalWrite(8, LOW);
   digitalWrite(13, LOW);
   delay(200);
   digitalWrite(13, HIGH);
      delay(200);
  digitalWrite(8, HIGH);
   delay(200);
   digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(13, LOW);
      delay(200);
  digitalWrite(8, LOW);
   delay(200);
   digitalWrite(5, LOW);
    delay(2000);
   
}
