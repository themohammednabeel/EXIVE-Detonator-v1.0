const int LoopPinLED = 13;/* ---------------- Orange */
const int ClickButtonPinLED = 12;/* --------- Red */
const int FinalPathwayPinLED = 11;/* -------- Green */

const int clickOnSwitchPin = 4; /* ---------- ClickOn - ClickOFF */
const int SignalSwitchPin = 3; /* ----------- Tactile Switch */

const int FinalPathwayPin = 8; /* OUTPUT Pin */


int buttonStateclickOnSwitchPin = 0;
int buttonStatesignalSwitchPin = 0;


void setup() {
  pinMode(LoopPinLED, OUTPUT);
  pinMode(ClickButtonPinLED, OUTPUT);
  pinMode(FinalPathwayPinLED, OUTPUT);
  pinMode(clickOnSwitchPin, INPUT);
  pinMode(SignalSwitchPin, INPUT);
  pinMode(FinalPathwayPin, OUTPUT);
}

void loop() {
  buttonStateclickOnSwitchPin = digitalRead(clickOnSwitchPin);
  buttonStatesignalSwitchPin = digitalRead(SignalSwitchPin);

  digitalWrite(LoopPinLED, HIGH);
  digitalWrite(ClickButtonPinLED, LOW);
  digitalWrite(FinalPathwayPinLED, LOW);
  digitalWrite(FinalPathwayPin, LOW);

  if(buttonStateclickOnSwitchPin == HIGH){
    digitalWrite(ClickButtonPinLED, HIGH);
  if(buttonStatesignalSwitchPin == HIGH){
      digitalWrite(FinalPathwayPinLED, HIGH);
      digitalWrite(FinalPathwayPin, HIGH);
      }
  }
}
