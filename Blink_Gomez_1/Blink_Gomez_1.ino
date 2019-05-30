void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}#include <SoftwareSerial.h>


#define BLYNK_PRINT SwSerial
#include <Blynk.h>



char auth[] = "60d42229b542475fb1f2689640642448";


void setup() {


  Blynk.begin(auth);

  
      
}

void loop() {

  Blynk.run();

 
}
