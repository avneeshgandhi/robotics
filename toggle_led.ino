// Description: In this Arduino project we are toggling a LED :

int data1 = 0;
int data2 = 0;
void setup() {
  pinMode(6,INPUT);   
  pinMode(12,OUTPUT);

}

void loop() {
   data1 = digitalRead(6);
  
   if(data1 == 1) 
   { 
    if(data2 == 0)  { 
      //turn led off
      digitalWrite(12,HIGH);
      data2 = 1;
    } else {
      //turn led on
      digitalWrite(12,LOW); 
      data2 = 0;

    }
    delay(1000);
   }
}
