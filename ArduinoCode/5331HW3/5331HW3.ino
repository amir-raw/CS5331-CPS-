int red=8;
int yellow=6;
int green =4;
int blue = 2; 
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(blue, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);   
  digitalWrite(blue, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(100);          
  digitalWrite(green, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);  
  digitalWrite(green, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(100);  
  digitalWrite(yellow, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);            
  digitalWrite(yellow, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(100);       // wait for a second
  digitalWrite(red, HIGH);   // turn the LED off by making the voltage LOW
  delay(100);  
  digitalWrite(red, LOW);   // turn the LED off by making the voltage LOW
  delay(100);      
                 // wait for a second
}