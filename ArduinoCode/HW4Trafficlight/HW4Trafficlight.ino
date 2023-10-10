int red1 = 2;
int green1 = 3;
int yellow1 = 4;
int red2 = 6;
int green2 = 7;
int yellow2 = 8;
const int button1 = 5;
const int button2 = 9;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  // Street 1 - Red, Street 2 - Green
  digitalWrite(red1, HIGH);
  digitalWrite(green2, HIGH);

  for(int i = 0; i < 5000/200; i++) {
    if(digitalRead(button2) == HIGH) {
      // Button pressed on Street 2
      digitalWrite(green2, LOW);
      digitalWrite(yellow2, HIGH);
      delay(1000);
      digitalWrite(red1, LOW);
      digitalWrite(yellow2, LOW);
      break;
    }
    delay(200);
  }

  if(digitalRead(button2) == LOW) {
    // No button press on Street 2
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);
    delay(1000);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
  }

  // Street 1 - Green, Street 2 - Red
  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);

  for(int i = 0; i < 4000/200; i++) {
    if(digitalRead(button1) == HIGH) {
      // Button pressed on Street 1
      digitalWrite(green1, LOW);
      digitalWrite(yellow1, HIGH);
      delay(1000);
      digitalWrite(yellow1, LOW);
      digitalWrite(red2, LOW);
      break;
    }
    delay(200);
  }

  if(digitalRead(button1) == LOW) {
    // No button press on Street 1
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    delay(1000);
    digitalWrite(yellow1, LOW);
    digitalWrite(red2, LOW);
  }
}
