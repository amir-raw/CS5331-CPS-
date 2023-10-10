#include <dht11.h>
#include <LiquidCrystal.h>
#define DHT11PIN 8
dht11 DHT11;
float tempF = 0.0;
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
lcd.begin(16, 2);
lcd.print("Initializing...");
Serial.begin(9600);
delay(3000); }
void loop() {
lcd.clear();
int chk = DHT11.read(DHT11PIN);
tempF = ((float)DHT11.temperature*9.0/5.0) + 32.0;
lcd.print("Humidity:");
lcd.print((float)DHT11.humidity);
lcd.print("%");
lcd.setCursor(0,1);
lcd.print("Temp.:");
lcd.print(tempF);
lcd.print("F");
delay(1000); }