
#include <Stepper.h>


#define STEPS 100


Stepper stepper(STEPS, 8, 9, 10, 11);

void setup()
{
 
  stepper.setSpeed(90);
  
  Serial.begin(9600);
}

void loop()
{
    
    Serial.println("shun");
    stepper.step(2048); 
    delay(500);

  
    Serial.println("ni");
    stepper.step(-2048); 
    delay(500);
}
