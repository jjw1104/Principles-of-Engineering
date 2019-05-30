char input;
 
void setup() {
    Serial.begin(9600); 
    delay(2000);  
 
    Serial.println("\t\t\t\t\t\tWelcome To AutoChatcher");
    Serial.println("Please Declare Criminal Color");
}
 
void loop() {
    if(Serial.available()){
        input = Serial.read();
        Serial.print("Criminal Color Set To: " );
        Serial.println(input);
        if(input==27){
          Serial.println("it works");
        }
        else 
          Serial.println("nooooopppppeeee!!!!");
    }
}
