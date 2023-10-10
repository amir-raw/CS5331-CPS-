const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
// Connect Ultrasonic sensor VCC to 5 V, and Gnd to 0 V
int duration;
void setup() {
 Serial.begin(9600); // Starting Serial Terminal
}
void loop() {
// Ultrasound sensor ping
 pinMode(pingPin, OUTPUT);
 digitalWrite(pingPin, LOW);
 delayMicroseconds(2);
 digitalWrite(pingPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(pingPin, LOW);
// Ultrasound sensor echo catch
 pinMode(echoPin, INPUT);
 duration = pulseIn(echoPin, HIGH);
  float m =0.0072;
  float C = -0.49;

  // if (distance >= 29.8 && distance <= 30.2) {
  //   Serial.println("Object is 30 cm away");
  //   Serial.println(duration);
  // }
  float distance = duration * m + C;
  Serial.println(distance);

// Send raw data to Serial port
 //Serial.println(duration);
// Wait before next ping
 delay(100);
}