#include <dht11.h>
#define DHT11PIN 8
dht11 DHT11;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println();
int chk = DHT11.read(DHT11PIN);
Serial.print("Humidity (%): ");
Serial.println((float)DHT11.humidity, 2);
Serial.print("Temperature (C): ");
Serial.println((float)DHT11.temperature, 2);
delay(1000);

}
