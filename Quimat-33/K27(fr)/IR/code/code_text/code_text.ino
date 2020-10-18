#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;
int a=1;
int b=1;

void setup()
{pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    switch(results.value)
    {
    case 0xFFA25D:digitalWrite(2,a);a=!a;break;
    case 0xFF629D:digitalWrite(3,b);b=!b;break;
    }
    irrecv.resume(); // Receive the next value
  }
}
