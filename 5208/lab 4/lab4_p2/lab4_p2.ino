//set constants
const int greenPin= 2; 
const int yellowPin= 3; 
const int redPin= 4; 
String comdata = "";
int lastLength = 0;

//set up pin outputs
void setup()
{
  pinMode(greenPin,OUTPUT); 
  pinMode(yellowPin, OUTPUT); 
  pinMode(redPin, OUTPUT); 
  Serial.begin(9600); 
  Serial.print("Please input any color of LED:"); 
}

//loop to read and write data
void loop()
  {
  //read string from serial monitor
  if(Serial.available()>0) // if we get a valid byte, read analog ins:
  {
  comdata = "";
  while (Serial.available() > 0)
  {
  comdata += char(Serial.read());
  delay(2);
  }
  Serial.println(comdata);
}
  if(comdata == "red")
  {
  //red led on
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  }
  else if(comdata == "yellow")
  {
  //yellow led on  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  }
  else if(comdata == "green")
  {
  //green led on  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  }
  else
  {
  //all led off  
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  }
}
