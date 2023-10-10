#include <IRremote.h>
int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
int value;
void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
}
void loop() {
if (irrecv.decode(&results)) { // 0 if no data, or 1
value = results.value; // Store results
if(value != 0xFFFFFFFF){
Serial.println(" ");
Serial.print("Code: ");
Serial.println(value,HEX); //prints the value
Serial.println(" ");
}
irrecv.resume(); // Ready to receive the next value
}
}