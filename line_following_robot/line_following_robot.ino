// Program for a line following robot by Zahid Ahmed
// Hope this is helping you
// All the very best!!!

//Motor 1
const int ena = 11;                                                                 
const int in1 = 13;
const int in2 = 12;

//Motor 2
const int enb = 10;
const int in3 = 8;
const int in4 = 7;

//Defining variable for the speed of the motor
int motorSpeed = 0;

//Defining two of the ir sensors as ir1 and ir2
const int ir1 = A0;
const int ir2 = A1;

//Defining values from the two ir sensors
int ir1Val = analogRead(ir1);
int ir2Val = analogRead(ir2); 


void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);
}

   
  

  void demo()
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    analogWrite(ena, 150);
    analogWrite(enb, 150);
  }

  void loop () {
    if (analogRead(ir1)<200){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(ena, 150);
     
    }
    
    else  {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      analogWrite(ena, 150);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enb, 150);
    }
      

    if(analogRead(ir2)<200){
       digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enb, 150);
    }

    else  {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(ena, 150);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enb, 150);
      
    }
   Serial.print(analogRead(ir1));
   Serial.print(" ");
   Serial.println(analogRead(ir2));
   
  }
