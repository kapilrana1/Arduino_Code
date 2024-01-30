int switch1 = 2;
int led_pin = 9;

void setup() {
  pinMode(switch1, INPUT_PULLUP);
   pinMode(led_pin, OUTPUT);
  }
void loop() {
  if(digitalRead(switch1) == HIGH)
  {
    digitalWrite(led_pin, HIGH);
  }
  if(digitalRead(switch1) == LOW)
  {
    digitalWrite(led_pin, LOW);
     }

}
