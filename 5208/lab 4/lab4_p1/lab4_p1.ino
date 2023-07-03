
//initializes pins used
int ledPin = 13;
int inPin = 7;
int val = 0;

// setup pinmode for ledpin and input
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

//loop to read the input 
void loop() {
  val = digitalRead(inPin);
  digitalWrite(ledPin, val);
}
