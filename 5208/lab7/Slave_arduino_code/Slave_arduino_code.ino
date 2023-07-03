// C++ code
//
#include <Servo.h>
#include <Wire.h>


#define ANSWERSIZE 5
#define servo_pin 7

int speed = 100;
int angle = 90;
byte SlaveReceived;
Servo Servo1;
String answer = "Hello";


void setup()
{
  Serial.begin(9600);
  Wire.begin(9);
  Servo1.attach(servo_pin);
  Wire.onRequest(requestEvent);
  
  Wire.onReceive(receiveEvent);
  Servo1.write(angle);
}

void receiveEvent(int x){
  
    SlaveReceived = Wire.read();
    //Serial.println(angle);
    
  //Servo1.write(x);
  //delay(speed);
}
  
void requestEvent(){
  byte response[ANSWERSIZE];
  for(byte i=0; i<ANSWERSIZE;i++){
    response[i] = (byte)answer.charAt(i);
  }
  
  Wire.write(response,sizeof(response));
  
  Serial.println("Request event");
}

void loop()
{
  delay(50);
  //angle = SlaveReceived;
  Servo1.write(SlaveReceived);
  delay(speed);
  Serial.println(angle);
}