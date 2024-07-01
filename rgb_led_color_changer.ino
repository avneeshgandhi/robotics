Description: In this Arduino program, we programmed a RGB LED. We can change it's colors by changing the numbers from the code section.
const int resistorOne = 12;
const int resistorTwo = 13;
const int resistorThree = 11;

 void setup()
 {
   pinMode(resistorOne, OUTPUT);
   pinMode(resistorTwo, OUTPUT);
   pinMode(resistorThree, OUTPUT);
 }
 
 void loop()
 {
   analogWrite(resistorOne, 200);
   analogWrite(resistorTwo, 100);
   analogWrite(resistorThree, 150);
   delay(500);
 }
