#define LM35 A0
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
float lmvalue=analogRead(LM35);
float tem=(lmvalue*500)/1023;
Serial.println(tem);
delay(300);
}
