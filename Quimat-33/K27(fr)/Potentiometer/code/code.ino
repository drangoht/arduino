int a=0;
void setup() {
 
pinMode(10,OUTPUT);
}

void loop() {

for(a;a<=255;a++) 
{
  analogWrite(10,a);
  delay(analogRead(0)/10);
  
  }
  for(a;a>=0;a--)
{
  analogWrite(10,a);
  delay(analogRead(0)/10);
  
  }
}
