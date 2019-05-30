int green=8;// int= integer (whole number)
int red=13;
int yellow=5;
int time=0;

void setup() {
  pinMode (green, OUTPUT); 
  pinMode (red, OUTPUT); 
  pinMode (yellow, OUTPUT);

  Serial.begin(9600);
  
 



    for (int ben=13;  ben<16;  ben++) 
  { 
     digitalWrite(yellow,HIGH);   
      delay(1000);
       digitalWrite(yellow,LOW);
       delay(500);                        
    }

  Serial.println("yellow 3");
    
for (int ben=13;  ben<15;  ben++) 
  { 
     digitalWrite(red,HIGH);    
      delay(2000);
       digitalWrite(red,LOW);
       delay(2000);                        
    }

 Serial.println("red 2");
    
for (int ben=13;  ben<14;  ben++) 
  { 
     digitalWrite(green,HIGH);    
      delay(2000);
       digitalWrite(green,LOW);
       delay(2000);                        
    }
    Serial.println("green 1");








    
}
void loop() {
 


    

 
}
