unsigned long pmillis1 = 0;
unsigned long pmillis2 = 0;
unsigned long cmillis1 = 0;
unsigned long cmillis2 = 0;
bool flag1 = 0;
bool flag2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  cmillis1 = millis();
  cmillis2 = millis();
  if (flag1 == 0) {
    digitalWrite(2, HIGH);
    if ((cmillis1 - pmillis1) > 750) {
      flag1 = 1;
      pmillis1 = cmillis1;
    }
  }
  if (flag1 == 1) {
    digitalWrite(2, LOW);
    if ((cmillis1 - pmillis1) > 350) {
      flag1 = 0;
      pmillis1 = cmillis1;
    }
  }
  
  if (flag2 == 0) {
    digitalWrite(3, HIGH);
    if ((cmillis2 - pmillis2) > 400) {
      flag2 = 1;
      pmillis2 = cmillis2;
    }
  }
  if (flag2 == 1) {
    digitalWrite(3, LOW);
    if ((cmillis2 - pmillis2) > 600) {
      flag2 = 0;
      pmillis2 = cmillis2;
    }
  }
}
