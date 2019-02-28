/*DISCRIPTION:
 * The Tilt Ball Switch allows one todetect the orientation or inclination of the buzzer.
 * They are usually ade up of a cavity with a conductive free mass inside, such as a blob of mercury
 * or a rolling ball. Not as precise or flexible as a full accelerometer. But doesn't output a digital
 * or analog voltage that needs extra circuitry to analyze.
 */

//Pins
const int ledPin = 13; //the led will be attached to this pin

void setup() {
  pinMode(ledPin, OUTPUT); //pin 13 will output a signal
  pinMode(2, INPUT); //pin 2 will read the tilt ball switch's info
  digitalWrite(2, HIGH); //Writes the data it outputs back into the input pin
}

void loop() {
  int digitalVal = digitalRead(2); //used as an accelerometer of sorts
  if(HIGH == digitalVal) //if HIGH led will turn on
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on
  }
}
