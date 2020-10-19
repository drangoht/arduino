// Test utilisation servomoteur SG90 //
#include <Servo.h>
 
Servo monservo;  // crée l’objet pour contrôler le servomoteur
int potPin = A0;
int value = 0;
void setup()
{
  //monservo.attach(9);  // utilise la broche 9 pour le contrôle du servomoteur
  //monservo.write(0); // positionne le servomoteur à 0°
  //pinMode(potPin,INPUT);
}
 
 
void loop()
{ 
  //monservo.write(50);
  //delay(1000);
  //monservo.write(100);
  //delay(1000);
  value = analogRead(potPin);
  Serial.print(value);
  Serial.println();
  delay(100);
}
