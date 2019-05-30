int green=8;// int= integer (whole number)
int red=13;
int yellow=5;
int time=0;

void setup() {
  pinMode (green, OUTPUT); 
  pinMode (red, OUTPUT); 
  pinMode (yellow, OUTPUT);

  Serial.begin(9600);
  
  for (int Jeremy=13;  Jeremy<21;  Jeremy++) 
  { 
    Serial.println("Jeremy is smart ");
    }



    for (int ben=13;  ben<18;  ben++) 
  { 
     digitalWrite(red,HIGH);    //Serial.println("Jeremy is smart ");
      delay(300);
       digitalWrite(red,LOW);
       delay(300);                        
    }

 for (int ben=13;  ben<14;  ben++) 
  { 
     digitalWrite(yellow,HIGH);    //Serial.println("Jeremy is smart ");
      delay(300);
       digitalWrite(yellow,LOW);
       delay(300);                        
    }


    for (int ben=13;  ben<16;  ben++) 
  { 
     digitalWrite(green,HIGH);    //Serial.println("Jeremy is smart ");
      delay(300);
       digitalWrite(green,LOW);
       delay(300);                        
    }








    
}
void loop() {
 



 
}
