int lf=A2;
int lb=A3;
int rf=A4;
int rb=A5;

int joystickx=A1; //horizontal
int joysticky=A0; //vertical

// Motor Speed Values - Start at zero

int MotorSpeed1 = 0;
int MotorSpeed2 = 0;

// Joystick Values - Start at 512 (middle position)

int joyposVert = 512;
int joyposHorz = 512; 


  
void setup() {

 pinMode(lf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(rb, OUTPUT);
  
}

void loop() {

  MotorSpeed1 = map(joysticky, 550, 1023, 0, 255);
  MotorSpeed2 = map(joysticky, 550, 1023, 0, 255); 

  if(joysticky>=550){
    analogWrite(lf,MotorSpeed1);
    analogWrite(rf,MotorSpeed2);
  }
  else{
     analogWrite(lf,0);
    analogWrite(rf,0);
  }

}
