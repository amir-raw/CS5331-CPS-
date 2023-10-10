#include <Servo.h>
Servo myservo; // create servo object
int pos = 0; // servo position
void setup() {
myservo.attach(9); // attaches the servo on pin 9
}
void loop() {
for(pos = 0; pos < 180; pos += 1) { // forward
myservo.write(pos);
delay(10);
}
for(pos = 180; pos>=1; pos-=1) { // backward
myservo.write(pos);
delay(10);
}
}