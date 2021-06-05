#include <Arduino.h>
const int ledpin = 2;  
const int buttonpin = 4; 
int buttonState = 0;  
void setup()  
{  
  Serial.begin(9600);  
  pinMode(buttonpin, INPUT);  
  pinMode(ledpin, OUTPUT);  
}  
void loop()  
{  
  // read the state of the pushbutton value  
  buttonState = digitalRead(buttonpin);  
  // check if pushbutton is pressed.  if it is, the  
  // buttonState is HIGH  
  if (buttonState == HIGH) {  
    // turn LED on  
    digitalWrite(ledpin, HIGH);  
    Serial.println("LED is ON");  
    //When we press the button, it will print LED is ON.  
delay ( 500);  
  }   
  else   
  {  
    // turn LED off  
    digitalWrite(ledpin, LOW);  
    Serial.println("LED is OFF"); // When we press the button, it will print LED is OFF.  
  }  
delay ( 500);  
}  
