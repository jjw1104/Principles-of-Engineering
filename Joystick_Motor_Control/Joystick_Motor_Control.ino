int x_key = A1;                                               
int y_key = A0;                                               
int x_pos;
int y_pos;
//Motor Pins
int LF = 9;       //control pin for first motor
int LB = 8;       //control pin for first motor
int RF = 7;        //control pin for second motor
int RB = 6;        //control pin for second motor
//Initializing variables to store data

void setup ( ) {
  Serial.begin (9600); //Starting the serial communication at 9600 baud rate
  //Initializing the motor pins as output
  pinMode(LF, OUTPUT);  
  pinMode(LB, OUTPUT);
  pinMode(RF, OUTPUT);  
  pinMode(RB, OUTPUT);
  //Initializng the joystick pins as input
  pinMode (x_key, INPUT) ;                     
  pinMode (y_key, INPUT) ;                      
}
void loop () {

   x_pos = analogRead (x_key) ;  //Reading the horizontal movement value
   y_pos = analogRead (y_key) ;  //Reading the vertical movement value

    if(x_pos < 700){
      digitalWrite(LB,HIGH);
      digitalWrite(RB,HIGH);
      digitalWrite(LF,LOW);
      digitalWrite(RF,LOW);
    }

    if(x_pos > 750){
      digitalWrite(LF,HIGH);
      digitalWrite(RF,HIGH);
      digitalWrite(LB,LOW);
      digitalWrite(RB,LOW);
    }

    if(x_pos >= 700 && x_pos <=750){
      digitalWrite(LF,LOW);
      digitalWrite(LB,LOW);
      digitalWrite(RF,LOW);
      digitalWrite(RB,LOW);
    }

    if(y_pos < 700){
     digitalWrite(RF,HIGH);  
     digitalWrite(LF,LOW);
     digitalWrite(LB,LOW);
     digitalWrite(RB,LOW);
    }

    if(y_pos > 750){
     digitalWrite(LF,HIGH); 
     digitalWrite(LB,LOW);
     digitalWrite(RF,LOW);
     digitalWrite(RB,LOW); 
    }

    
    
  
  





  
  
  }
