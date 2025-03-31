#include <Arduino.h>

int pb1 = 2;
int pb2 = 3;
int pb3 = 4;
int pb4 = 5;
int pb5 = 6;
int pb6 = 7;

int buzz = 13;

void setup()
{
  //declare the pushbutton pins as input
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(pb3,INPUT);
  pinMode(pb4,INPUT);
  pinMode(pb5,INPUT);
  pinMode(pb6,INPUT);
  //declare buzzer pin as output
  pinMode(buzz,OUTPUT);
  Serial.begin(115200);
  
}

void loop()
{
  // read the value from pushbuttons
  int C = digitalRead(pb1);
  int D = digitalRead(pb2);
  int E = digitalRead(pb3);
  int F = digitalRead(pb4);
  int G = digitalRead(pb5);
  int A = digitalRead(pb6);

  
  if( C == 1 ){
     tone(buzz,262,100);//C,Do,sa
      Serial.print("do");

  }
    if( D == 1 ){
     tone(buzz,294,100);//D,Re,re
     Serial.print("re");
  }
    if( E == 1 ){
     tone(buzz,330,100);//E,Me,ga
     Serial.print("mi");
  }
    if( F == 1 ){
     tone(buzz,349,100);//F,Fa,ma
     Serial.print("fa");
  }
    if( G == 1 ){
     tone(buzz,392,100);//G,So,pa
     Serial.print("sol");
  }
    if( A == 1 ){
     tone(buzz,440,100);//A,La,da
     Serial.print("la");
  }

  delay(100);
  
  
}