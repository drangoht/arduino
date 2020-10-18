int swpin=2;
int Xpin=0;
int Ypin=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(swpin,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Key value :");
  Serial.println(digitalRead(2));
  Serial.print("X value :");
  Serial.println(analogRead(Xpin));
  Serial.print("Y value :");
  Serial.println(analogRead(Ypin));
  delay(500);
  
}
