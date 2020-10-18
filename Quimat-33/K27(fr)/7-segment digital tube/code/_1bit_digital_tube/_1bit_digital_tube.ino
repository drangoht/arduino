//Set pin control all digital IO
int a=7;//Definition of digital interface 7 connected a segment digital tube
int b=6;// Definition of digital interface 6 connected B segment digital tube
int c=5;// Definition of digital interface 5 connected C segment digital tube
int d=10;// Definition of digital interface 10 connected D segment digital tube
int e=11;// Definition of digital interface 11 connected e segment digital tube
int f=8;// Definition of digital interface 8 connected f segment digital tube
int g=9;// Definition of digital interface 9 connected g segment digital tube
int dp=4;// Definition of digital interface 4 connected DP segment digital tube
void digital_0(void) //Display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_1(void) //Display number 1
{
unsigned char j;
digitalWrite(c,HIGH);//Digital interface to the 5 pin high, lit C segment
digitalWrite(b,HIGH);//Light B segment
for(j=7;j<=11;j++)//Extinguish the rest
digitalWrite(j,LOW);
digitalWrite(dp,LOW);//Put out the DP segment of the decimal point
}
void digital_2(void) //Display number 2
{
unsigned char j;
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
for(j=9;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
}
void digital_3(void) //Display number3
{
digitalWrite(g,HIGH);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(dp,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4(void) //Display number 4
{
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5(void) //Display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_6(void) //Display number 6
{
unsigned char j;
for(j=7;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
}
void digital_7(void) //Display number7
{
unsigned char j;
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
for(j=8;j<=11;j++)
digitalWrite(j,LOW);
}
void digital_8(void) //Display number 8
{
unsigned char j;
for(j=5;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
}
void digital_9(void) //Display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
int i;//defined variable
for(i=4;i<=11;i++)
pinMode(i,OUTPUT);//Set the 11 to 4 pin for the output mode
}
void loop()
{
while(1)
{
digital_0();//Display number 1
delay(1000);//delay 1s
digital_1();//Display number 1
delay(1000);//delay 1s
digital_2();//Display number2
delay(1000); //delay 1s
digital_3();//Display number3
delay(1000); //delay 1s
digital_4();//Display number  4
delay(1000); //delay 1s
digital_5();//Display number  5
delay(1000); //delay 1s
digital_6();//Display number 6
delay(1000); //delay 1s
digital_7();//Display number7
delay(1000); //delay 1s
digital_8();//Display number 8
delay(1000); //delay 1s
digital_9();//Display number 9
delay(1000); //delay 1s
}
}
