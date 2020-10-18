 double temp,data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp=(long)analogRead(0);
  data=(temp/150)*4;
  Serial.print("the depth is:");
  Serial.print(data);
  Serial.println("cm");
  delay(1000);
}
