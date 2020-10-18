int keypin= 12; //the number of the key pin
int ledpin = 13;//the number of the led pin
void setup()
{
pinMode(keypin,INPUT);//initialize the key pin as input 
pinMode(ledpin,OUTPUT);//initialize the led pin as output
}
void loop()
{
//read the state of the key value
//and check if the kye is pressed
//if it is,the state is HIGH 
if(digitalRead(keypin) ==HIGH )
{
digitalWrite(ledpin,HIGH);//turn on the led
}
else
{
digitalWrite(ledpin,LOW);//turn off the led
}
}

