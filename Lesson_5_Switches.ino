//Packages

//Define Pins
#define LED 5
#define buttonApin 9//VAR PORT
#define butonBpin 8

byte leds = 0; //Tutorial told me to do this, but IDK what exactly it does

void setup() {
  // put your setup code here, to run once:
  /*Common arduino commands:
  * - pinMode(PORTVAR, OUTPUT); //sets shit to output in setup
  * - digitalWrite(PORTVAR, HIGH/LOW); //sets the output/input to either read or write a low or high voltage
  * - ints, floats, chars, and other type specifiers are defined the same as in c (//int var = 1;)
  * - Global variables function the same as in c, same with while and for loops
  }*/

  //SETUP
  pinMode(LED, OUTPUT); //Setting the LED pin to output signal
  pinMode(buttonApin, INPUT_PULLUP); //INPUT_PULLUP (setting buttons A & B to respond to input signal)
  pinMode(buttonBpin, INPUT_PULLUP); //The input part of input pullup specifies that it should be set to input, 
                                     //but if nothing is connected to the input, the voltage output should be 'pulled up' to high
                                     //NOTE: default value of the inputs is always high, unless pulled to low when the button is pressed 
}

void loop() {
  #define delayTime 100
  // put your main code here, to run repeatedly:
  // Here you could define the delay with #define delayTime 10 (10 for delaytime in ms)
  /* Common arduino loop commands:
   * - analogWrite(PORTVAR, toVar), gives value to analog port output
   * - delay(delayTime), no explaination needed
   */

   //LOOP SETUP
   if(digitalRead(buttonApin) == LOW){ //If Apin is pressed then it turns the LED on
    digitalWrite(LED, HIGH);
   }
   if(digitalRead(button Bpin) == LOW){ //If Bpin is pressed then it turns the LED off
    digitalWrite(LED, LOW)
   }
   delay(delayTime); //Delays .1s before it runs the loop again
}
