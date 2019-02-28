/*DISCRIPTION
 * The serve is a geared motor that can only rotate 180 degress. It is controlled by sending electrical
 * pulses from the UNO. The servo has three wires: brown(ground), red(5v), orange(digital input).
 */

//Packages
#include <Servo.h> //This is a zip file from the folder

//Objects
Servo myservo; //LMAO object oriented arduino, creates a servo object (from library) to control

//Global Variables
int pos = 0;

void setup() {
  Serial.begin(9600); //Note the serial object is used for communication between the board and computer
                      //For reference serial functions go to https://www.arduino.cc/reference/en/language/functions/communication/serial/
                      //Begin function opens a serial port, and sets data rate in bits/sec
  myservo.attach(9); //Mounts the object created to the 9th pin   

}

void loop() {
  for(pos = 0; pos <= 180; pos += 1){ //telling to swerve from 0-180 degs
    myservo.write(pos); //The write command delivers the value to the data
    delay(15); //waits 15ms befor moving to the next degree
  }
  for(pos - 180; pos >= 0; pos -= 1){
    myservo.write(pos);
    delay(15);
  }
}
