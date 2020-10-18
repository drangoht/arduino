int DS=2;
int ST=3;
int SH=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(DS,OUTPUT);
  pinMode(ST,OUTPUT);
  pinMode(SH,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0 ;i<8;i++){
  display1(i);
  delay(300);
  }
  
  for(int i=7 ;i>=0;i--){
  display1(i);
  delay(300);
  }
     
  
}

void set(int i){
  digitalWrite(DS,i);
   digitalWrite(SH,LOW);
   digitalWrite(SH,HIGH);
  }

void send(){
  digitalWrite(ST,LOW);
  digitalWrite(ST,HIGH);
  }

void display(){
  byte i=1;
  for(byte q=0;q<8;q++){
    byte a=i<<q;
  for(int w=1;w<9;w++){
      set(a&1);
      a=a>>1;
      
      
  }
  send();
  delay(100);
  }
  
  }

 void display1(int i){
  for(int w=0;w<i;w++){
         set(0);
    
    }

    set(1);
  for(int q=1;q<8-i;q++){
          set(0);
    
    }

    send();
  }
