/*************************************************************
Motor Shield 1-Channel DC Motor Demo for Sparkfun Ardumoto Shield
*************************************************************/
#define PWM_A_Pin 3
#define Dir_A_Pin 2

int speedA = 255;
const bool forwardA = HIGH;
const bool backwardA = LOW;
void setup() {
  
  //Setup Channel A
  pinMode(Dir_A_Pin, OUTPUT); //Initiates Motor Channel A pin
    
}
void loop(){
  
  //forward @ full speed
  digitalWrite(Dir_A_Pin, forwardA); //Establishes forward direction of Channel A
  analogWrite(PWM_A_Pin, speedA);   //Spins the motor on Channel A at full speed
  
  delay(3000);
  
  //break Channel A
  speedA=0;
  analogWrite(PWM_A_Pin, speedA); 
 
  delay(1000);
  
  //backward @ half speed
  digitalWrite(Dir_A_Pin, backwardA); //Establishes backward direction of Channel A
  speedA=123;
  analogWrite(PWM_A_Pin, speedA);   //Spins the motor on Channel A at half speed
  
  delay(3000);
  
 speedA=0;
 analogWrite(PWM_A_Pin, speedA);     //break motor A 
  
  delay(1000);
 
}

motionA(directionA, speedA){
  if (directionA = HIGH)
    {
      digitalwrite(Dir_A_Pin, forwardA)
    }
  else
    {
      digitalwrite(Dir_A_pin, backwardA)
    }
    analogwrite(PWM_A_Pin, speedA)

//motion be same as A just change to b
  

}
}
