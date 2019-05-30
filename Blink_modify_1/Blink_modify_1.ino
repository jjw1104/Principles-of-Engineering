/*
  Jeremy wizenfeld created: August 31th
  D13- red light
  D8- green light
  D5- yellow light
*/

// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(6, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000); 
  
  
  
}
