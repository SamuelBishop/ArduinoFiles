//Packages

//Define Pins
#define BUZZER 12
#define ON 1
#define OFF 7

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
  pinMode(ON, INPUT_PULLUP);
  pinMode(OFF, INPUT_PULLUP);
}

void loop() {
  #define delayTime 100
  // put your main code here, to run repeatedly:
  if(digitalRead(ON) == LOW){ //If on button pressed sound buzzer
    digitalWrite(BUZZER, HIGH);
  }
  if(digitalRead(OFF) == LOW){ //If off button pressed turn off buzzer
    digitalWrite(BUZZER, LOW);
  }
  delay(delayTime);
}
