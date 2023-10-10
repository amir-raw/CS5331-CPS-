#include <IRremote.h>
#include <Servo.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
int value;

Servo myservo; // create servo object
int pos = 0; // servo position

void setup() {
  irrecv.enableIRIn();
  myservo.attach(9); // attaches the servo on pin 9
}

void loop() {
  if (irrecv.decode(&results)) { // False if no data
    value = results.value;// Store results
    switch(value) {
      case 0xFFFF906F:
        for(pos = 0; pos < 90; pos += 3) { // forward
          myservo.write(pos);
          delay(50);
        }
        break; // break out of switch statement
      case 0xFFFFE01F:
        for(pos = 90; pos>=1; pos-=3) { // backward
          myservo.write(pos);
          delay(50);
        }
        break; // break out of switch statement
    }
    irrecv.resume(); // Ready to receive the next value
  }
}
