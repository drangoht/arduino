void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   Clockwise();
   delay(3000);
   anticlockwise();
   delay(3000);
}

void Clockwise(){
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
     analogWrite(5,240);//240 is the speed value, which can be written to 0-255
     
}

void anticlockwise(){
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     analogWrite(5,240);
     
}
