/*DISCRIPTION
 * Using DHT11 Temperature and Humidity Sensor and library specifically designed for these sensors.
 * Has 4 pins: 1) VCC (voltage supply) 2) Data Output 3) NC (Empty pin) 4) Ground.
 */

//Packages
#include <dht_nonblocking.h>

//Definitions
#define DHT_SENSOR_TYPE DHT_TYPE_11 //Temp/humidity sesnors will always be DHT_TYPE_11???

//Global Variables
static const int DHT_SENSOR_PIN = 2; //Which pin will contant the Data
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE); //initializing out sensor object

void setup() {
  Serial.begin(9600);
}

//DOING MY FIRST ARDUINO FUNCTION
//Will poll for measurement. Returns true if a measurement is available (sensor alive), false if not
static bool measure_environemtn(float *temperature, float *humidity)
{
  static unsigned long measurement_timestamp = millis(); //millis() returns the number of milliseconds the current loop has been running

  /* Measure once envery four seconds. */
  if(millis() - measurement_timestap > 3000ul) //ul forces the # to be an unsigned long
  {
    if(dht_sensor.measure(temperature, humidity) == true) //if can pickup measurements, and already returns and writes the measurements
    {
      measurement_timestamp = millis();
      return(true);
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:

}
