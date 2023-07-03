/*******************************************
name:IR Tracking Sensor
function: draw one black bold line on white paper. keep the sensor in the line.
If the rays emitted by the sensor encounter the white lines,  
the LED attached to pin 13 on the Arduino Uno board will light up; otherwise, it is off.
*****************************************/

const int trackingPin = 7; //the tracking module attach to pin 7
const int ledPin = 13; //pin13 built-in led
void setup()
{
  pinMode(trackingPin, INPUT); // set trackingPin as INPUT
  pinMode(ledPin, OUTPUT);  //set ledPin as OUTPUT
}
void loop()
{
  boolean val = digitalRead(trackingPin); // read the value of tracking module
  if(val == HIGH) //if it is High
  { 
    digitalWrite(ledPin, HIGH); //turn off the led
  }
  else
  {
    digitalWrite(ledPin, LOW); //turn on the led
  }
}
