const int inputPin = 0;
const int inputLedPin = 4; /* ---------------- red */
const int finalpathwayPin = 1;
const int finalLedPin = 3; /* ---------------- green */

int inpin = 0;

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(inputLedPin, OUTPUT);
  pinMode(finalpathwayPin, OUTPUT);
  pinMode(finalLedPin, OUTPUT);
}

void loop() {
  inpin = digitalRead(inputPin);

    digitalWrite(inputLedPin, LOW);
    digitalWrite(finalpathwayPin, LOW);
    digitalWrite(finalLedPin, LOW);
  
  if(inpin == HIGH) {
    digitalWrite(inputLedPin, HIGH);
    digitalWrite(finalpathwayPin, HIGH);
    digitalWrite(finalLedPin, HIGH);
    }

}
