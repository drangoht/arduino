
int redpin = 11; //select the pin for the red LED
int bluepin =10; // select the pin for the  blue LED
int greenpin =9;// select the pin for the green LED
 

 
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
 
}
 
void loop() 
{

   analogWrite(11, 255);
   analogWrite(10, 0);
   analogWrite(9, 0);
   delay(500); 
 

   analogWrite(11, 0);
   analogWrite(10, 255);
   analogWrite(9, 0);
   delay(500); 
    
     analogWrite(11, 0);
   analogWrite(10, 0);
   analogWrite(9, 255);
   delay(500); 
 
 
 
}
