int buzzer=11;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int i=100;
do{
  i=i*2;
  tone(buzzer,i);
  delay(1000);
}
while(i<3000);
noTone(buzzer);
delay(5000);

}
