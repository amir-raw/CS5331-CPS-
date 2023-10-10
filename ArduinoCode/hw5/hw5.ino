#include <LiquidCrystal.h>

const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
int duration;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16, 2);
  lcd.print("Initializing...");
  Serial.begin(9600);
  pinMode (9, OUTPUT);
  delay(3000);
}
void loop()
{
  lcd.clear();
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
  // Send raw data to Serial port

  //float distance = duration * 0.034 / 2;

  float m =  0.0072;
  float C = -0.49;

  // if (distance >= 29.8 && distance <= 30.2) {
  //   Serial.println("Object is 30 cm away");
  //   Serial.println(duration);
  // }
  float distance = duration * m + C;
  Serial.println(distance);
  lcd.print("Distance: ");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print(" cm");
  if (distance < 20) {
    digitalWrite(9, HIGH);    
  }
  else{
    digitalWrite(9, LOW);
  }

  delay(1000);
}
