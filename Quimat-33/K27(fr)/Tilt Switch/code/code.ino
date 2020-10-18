int led = 13;        


int sensorSwitch = 3; 
unsigned char state = 0;
void setup() 
{
pinMode(led,OUTPUT);
pinMode(sensorSwitch,INPUT);

attachInterrupt(1,blink,RISING);
}
void loop() 
{
if(state != 0)
{
   state = 0;
   digitalWrite(led,HIGH); 
   delay(500);
 }
else
{
      digitalWrite(led,LOW);  
}
}

void blink()
{
  state++;
}
