//We always have to include the library
#include "LedControlMS.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD 
 We have only a single MAX72XX.
 */
#define NBR_MTX 2 
LedControl lc=LedControl(12,11,10, NBR_MTX);

String digits= "1234567890";
int digitCounter=0;
/* we always wait a bit between updates of the display */
unsigned long delaytime=300;


void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  Serial.begin (9600);
  Serial.println("Setup");
  digitCounter=0;
  for (int i=0; i< NBR_MTX; i++){
    lc.shutdown(i,false);
  /* Set the brightness to a medium values */
    lc.setIntensity(i,8);
  /* and clear the display */
    lc.clearDisplay(i);
  }

}


void loop() { 
  lc.writeString(0,"ZOUBIDA");
  // KEKETTE
  /*
  lc.setLed(0,7,2,true);
  lc.setLed(0,7,1,true);
  lc.setLed(0,7,0,true);
  //delay(10);
  lc.setLed(0,6,2,true);
  lc.setLed(0,5,3,true);
  lc.setLed(0,5,2,true);
  //delay(10);
  //delay(10);
  lc.setLed(0,5,1,true);
  //delay(10);
  lc.setLed(0,5,0,true);
  //delay(10);
  
  //delay(10);
  lc.setLed(0,5,4,true);
  //delay(10);
  lc.setLed(0,5,5,true);
  lc.setLed(0,5,6,true);
  lc.setLed(0,4,7,true);
  lc.setLed(0,3,7,true);
  lc.setLed(0,2,6,true);
  lc.setLed(0,2,5,true);
  lc.setLed(0,2,4,true);
  lc.setLed(0,2,3,true);
  lc.setLed(0,2,2,true);
  lc.setLed(0,2,1,true);
  lc.setLed(0,2,0,true);
  lc.setLed(0,1,2,true);
  lc.setLed(0,0,2,true);
  lc.setLed(0,0,1,true);
  lc.setLed(0,0,0,true);
  lc.setLed(0,3,5,true);
  lc.setLed(0,4,5,true);
  //delay(10);
/*
  delay(1000);

  // clear all

  lc.setLed(0,6,5,false);
  //delay(10);
  lc.setLed(0,6,2,false);
  //delay(10);
  lc.setLed(0,3,6,false);
  //delay(10);
  lc.setLed(0,3,1,false);
  //delay(10);
  lc.setLed(0,2,5,false);
  //delay(10);
  lc.setLed(0,2,2,false);
  //delay(10);
  lc.setLed(0,2,4,false);
  //delay(10);
  lc.setLed(0,2,3,false);
  //delay(10);

  // fin clear

  lc.setLed(0,6,5,true);
  //delay(10);
  lc.setLed(0,6,2,true);
  //delay(10);
  lc.setLed(0,2,6,true);
  //delay(10);
  lc.setLed(0,2,1,true);
  //delay(10);
  lc.setLed(0,2,5,true);
  //delay(10);
  lc.setLed(0,2,2,true);
  //delay(10);
  lc.setLed(0,2,4,true);
  //delay(10);
  lc.setLed(0,2,3,true);
  //delay(10);
  
  delay(1000);

  //clear all
  lc.setLed(0,6,5,false);
  //delay(10);
  lc.setLed(0,6,2,false);
  //delay(10);
  lc.setLed(0,2,6,false);
  //delay(10);
  lc.setLed(0,2,1,false);
  //delay(10);
  lc.setLed(0,2,5,false);
  //delay(10);
  lc.setLed(0,2,2,false);
  //delay(10);
  lc.setLed(0,2,4,false);
  //delay(10);
  lc.setLed(0,2,3,false);
  //delay(10);
  // fin clear
*/

  
}
