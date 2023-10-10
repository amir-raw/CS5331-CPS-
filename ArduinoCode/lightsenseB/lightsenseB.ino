const int analogInPin =A0;
int sensorValue =0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(analogInPin);
Serial.print("Analog sensor value = ");
Serial.println(sensorValue);
if(sensorValue<250){
  digitalWrite(7,HIGH);

}
else{
    digitalWrite(7,LOW);

}
delay(100);
}
