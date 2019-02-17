/*DISCRIPTION:
 * The passive buzzer is a programmable buzzer vibrates and generates sounds between the frequencies of 523Hz
 * and 659Hz, with the buzzer you can play songs.
 */

//Packages
#include "pitches.h" //Necessary for playing the song

//Define Pins
#define PASSIVEBUZZER 3
#define buttonA 7

//Global Variables
int melody[] = { //Twinkle Twinkle little star theme
  NOTE_C5, NOTE_C5, NOTE_G5, NOTE_G5, NOTE_A6, NOTE_A6, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_E5,NOTE_E5, NOTE_D5, NOTE_D5, NOTE_C5};
}
int duration = 500; //500 miliseconds per note

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonA, INPUT_PULLUP);
}

void loop() {
  // atttaching a switch to the song
  if(digitalRead(buttonApin) == LOW){
    for (int thisNote = 0, thisNote < 14; thisNote++){
      // Pin 3 outputs the note, every note is .5 seconds
      tone(PASSIVEBUZZER, melody[thisNote], duration);

      //Wait 1 second to do anything
      delay(1000);
    }
  }

  // restart loop after two secocnds
  delay(2000);
}
