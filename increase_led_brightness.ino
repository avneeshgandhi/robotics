// Description: In this Arduino project, we made a LED blink increasing it's brightness.
void setup() {
  pinMode(5,OUTPUT);

}

void loop() {
  analogWrite(5,0);
  delay(2000);
  analogWrite(5,64);
  delay(2000);
  analogWrite(5,128);
  delay(2000);
  analogWrite(5,192);
  delay(2000);
  analogWrite(5,255);
  delay(2000)
}
