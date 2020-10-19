const int TrigPin = 2;
const int EchoPin = 3;
const int Led=4;
float cm;
void setup()
{
Serial.begin(9600);
pinMode(TrigPin, OUTPUT);
pinMode(EchoPin, INPUT);
pinMode(Led,OUTPUT);
}
void loop()
{
digitalWrite(TrigPin, LOW); //Low high and low level to send a short pulse to TrigPin
delayMicroseconds(2);
digitalWrite(TrigPin, HIGH);
delayMicroseconds(10);
digitalWrite(TrigPin, LOW);
cm = pulseIn(EchoPin, HIGH) / 58.0; //The echo time is converted into cm
cm = (int(cm * 100.0)) / 100.0; //Keep two decimal places
Serial.print(cm);
Serial.print("cm");
Serial.println();
if(cm>0) 
{
  digitalWrite(Led,HIGH);
}
else
{
  digitalWrite(Led,LOW);
}
delay(500);
}
