int  sensorPin  =  A0;   
int sound=3; 
int  sensorValue =  0;  
int  val=0;
void setup()
{
Serial.begin(9600);
pinMode(sound,INPUT);
}
void loop(){
sensorValue =  analogRead(sensorPin);
val=digitalRead(sound);
Serial.print("A0=");
Serial.println(sensorValue,  DEC);
Serial.print("D0=");
Serial.println(val);
delay(200);
}
