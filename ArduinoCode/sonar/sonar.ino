const int pingPin=7;
const int echoPin=6;
int duration ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
pinMode(pingPin,OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);
pinMode(echoPin, INPUT);
duration= pulseIn(echoPin, HIGH);
Serial.println(duration);
delay(100);
}