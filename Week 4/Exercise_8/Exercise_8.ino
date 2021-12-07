int a;
int b;
int c;
int d;
int preva;
int prevb;
int prevc;
int prevd;
int A;
int B;
int C;
int D;
unsigned long pmillis1 = 0;
unsigned long pmillis2 = 0;
unsigned long pmillis3 = 0;
unsigned long pmillis4 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  preva = digitalRead(2);
  prevb = digitalRead(3);
  prevc = digitalRead(4);
  prevd = digitalRead(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(2);
  b = digitalRead(3);
  c = digitalRead(4);
  d = digitalRead(5);
  Serial.print(A);
  Serial.print("\t");
  Serial.print(B);
  Serial.print("\t");
  Serial.print(C);
  Serial.print("\t");
  Serial.println(D);

  if ((preva == 1) && (a == 0)) {
    A++;
    preva = 0;
    pmillis1 = millis();
  }
  if (((millis() - pmillis1) > 20) && (preva == 0)) {
    preva = a;
  }

  if ((prevb == 1) && (b == 0)) {
    B++;
    prevb = 0;
    pmillis2 = millis();
  }
  if (((millis() - pmillis2) > 20) && (prevb == 0)) {
    prevb = b;
  }

  if ((prevc == 1) && (c == 0)) {
    C++;
    prevc = 0;
    pmillis3 = millis();
  }
  if (((millis() - pmillis3) > 20) && (prevc == 0)) {
    prevc = c;
  }

  if ((prevd == 1) && (d == 0)) {
    D++;
    prevd = 0;
    pmillis4 = millis();
  }
  if (((millis() - pmillis4) > 20) && (prevd == 0)) {
    prevd = d;
  }
}
