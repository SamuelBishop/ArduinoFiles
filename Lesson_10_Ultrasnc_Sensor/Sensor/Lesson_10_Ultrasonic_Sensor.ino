/*Discription
 * Uses ultrasonic transmitters to gather data about the distance away from an object.
 * The device is accurate to within 3mm.
 */

//Packages
#include "SR04.h"

//Definitions
#define TRIG_PIN 12
#define ECHO_PIN 11

//Global Variables
SR04 sro4 = SR04(ECHO_PIN, TRIG_PIN); //New class object Ultrasonic sensor
long a;

void setup(){
  Serial.begin(9600);
  delay(1000);
}

void loop(){
  a = sr04.Distance(); //Distance is a function programmed into the SR04 class in cm
  Serial.print(a); //begins recording the measurements to the computer
  Serial.println("cm");
  Delay(1000); //Delays 1s before taking the next measurement
}
