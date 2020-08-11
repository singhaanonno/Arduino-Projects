

#define trigPin 8
#define echoPin 9
#define beepPin 10
#define scalingfactor 10

int inches=0;
unsigned long duration= 0;
unsigned long maxtime =1000;
unsigned long i=1;
unsigned long time2=0;
unsigned long time1=0;






void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(beepPin,OUTPUT);
Serial.begin(9600);
}

void logdistance()
{
  time1=millis;
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  inches=duration/148;
  time2=millis();
  maxtime=scalingfactor*inches;
}

void delayandcheckdistance()
{ 
  i=1;
  while(1)
  {
    if(i%60==0){
      logdistance();
    }
    delay(1);
    ++i;
    if(i>=maxtime)
    {break;
    
    }
  }
}

void beep()
{ digitalWrite(beepPin,HIGH);
delay (90);
logdistance();
if (time2-time1<30)
{delay(60-(time2-time1));
}
digitalWrite(beepPin,LOW);
}
  void loop(){
    beep();
    delayandcheckdistance();
  }
