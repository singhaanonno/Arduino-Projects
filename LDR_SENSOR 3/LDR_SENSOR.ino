const int ledpin = 13;
const int buzzerpin = 12;
const int ldrpin = A0;

 void setup()
 {
  Serial.begin(9600);

  pinMode(ledpin,OUTPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(ldrpin, INPUT);
 }
void loop()
{
  int ldrstatus= analogRead(ldrpin);

  if(ldrstatus>=400)
  {
    tone(buzzerpin,100);
    digitalWrite(ledpin,HIGH);
    delay(100);
    
    noTone(buzzerpin);
    digitalWrite(ledpin,LOW);
    delay(100);
    Serial.println("---------------- ALARM ACTIVATED --------------------");
  }
  else  {
    noTone(buzzerpin);
    
digitalWrite(ledpin,LOW);
    Serial.println("ALARM DEACTIVATED");
  }
}
 
