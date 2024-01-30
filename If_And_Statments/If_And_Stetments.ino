#include <Arduino.h>
int buttonL = 6;
int buttonR = 7;
int redL = 1;
int redR = 2;
int blue = 3;
void setup() {
  pinMode(buttonL,INPUT);
  pinMode(buttonR,INPUT);
  pinMode(redL,OUTPUT);
  pinMode(redR,OUTPUT);
  pinMode(blue,OUTPUT);
  
}
void loop() {
  if (digitalRead(buttonL)==HIGH && digitalRead(buttonR)==HIGH)
  {digitalWrite(blue,HIGH);
  }
  else
    {
      digitalWrite(blue,LOW);
    }
    if(digitalRead(buttonL)==HIGH && digitalRead(buttonR)==LOW);
    {
      digitalWrite(redL,HIGH);
      digitalWrite(redR,LOW);
    }
    if(digitalRead(buttonL)==LOW && digitalRead(buttonR)==HIGH);
    {
      digitalWrite(redR,HIGH);
      digitalWrite(redL,LOW);
    }
  }
