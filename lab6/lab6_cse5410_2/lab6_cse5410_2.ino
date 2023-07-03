/****************************************************
name:IR Obstacle Avoidance Sensor
function:place a piece of paper in front of the Obstacle Avoidance Sensor,
and the LED attached to pin 13 on the Arduino Uno board will light up. 
******************************************************/
const int ledPin = 13;  //pin13 built-in led
const int avoidPin = 7;  //the ir obstacle sensor attach to pin 7
const int interrupt_pin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);  //set the ledPin as OUTPUT
  pinMode(interrupt_pin,INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(interrupt_pin), halt, CHANGE); //figure out mode low change rising falling 
  //Serial setup
  Serial.begin(9600);
  
}

void loop() {
  Serial.println("In loop, Vehicle Running");
  Serial.println(digitalRead(interrupt_pin))

  boolean avoidVal = digitalRead(avoidPin);  //read the value of pin7
 
  if(avoidVal == LOW) //if the value is LOW level
  {
    digitalWrite(ledPin, HIGH);  //turn on the led
  }
  else  //else
  {
    digitalWrite(ledPin, LOW);  //turn off the led
  }
}
void halt()
{
  while(digitalRead(interrupt_pin) == LOW)
  {
    
Serial.println("Vehicle STOPPED");
  }
}
