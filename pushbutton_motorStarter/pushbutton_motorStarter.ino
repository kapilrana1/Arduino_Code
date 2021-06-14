int switch1 = 2;
int switch2 = 3;
int led_pin = 8;
int motor = 10;

byte leds = 0;

void setup() {
  pinMode(switch1, INPUT_PULLUP);
  pinMode(switch2, INPUT_PULLUP);
  pinMode(led_pin, OUTPUT);
  pinMode(motor, OUTPUT);
}

void loop() {
  if(digitalRead(switch1) == LOW){
    digitalWrite(led_pin, HIGH);
    digitalWrite(motor, HIGH);
  }
  if(digitalRead(switch2) == LOW){
    digitalWrite(led_pin, LOW);
    digitalWrite(motor, LOW);
  }

}
