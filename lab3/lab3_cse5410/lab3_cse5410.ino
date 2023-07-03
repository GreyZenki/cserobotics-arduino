const int photoPin = 8; //the number of the key pin
const int ledPin = 13;//the number of the led pin 
/***************************************************/
void setup()
{
pinMode(photoPin,INPUT); 
pinMode(ledPin,OUTPUT);//initialize the led pin as output
}
/***************************************************/
void loop()
{
boolean Value=digitalRead(photoPin);
 
  //if it is blocked, the state is LOW, turn on LED 
  if(Value ==LOW )
  {
    digitalWrite(ledPin,LOW);//turn off the led
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn on the led
  } 
}
/******************************************************/
