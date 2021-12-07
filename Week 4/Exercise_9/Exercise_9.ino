unsigned long pmillis1 = 0;
unsigned long pmillis2 = 0;
unsigned long pmillis3 = 0;
unsigned long pmillis4 = 0;
unsigned long pmillis5 = 0;
unsigned long pmillis6 = 0;
unsigned long pmillis7 = 0;
unsigned long pmillis8 = 0;
unsigned long cmillis1 = 0;
unsigned long cmillis2 = 0;
unsigned long cmillis3 = 0;
unsigned long cmillis4 = 0;
unsigned long cmillis5 = 0;
unsigned long cmillis6 = 0;
unsigned long cmillis7 = 0;
unsigned long cmillis8 = 0;
bool flag1 = 0;
bool flag2 = 0;
bool flag3 = 0;
bool flag4 = 0;
bool flag5 = 0;
bool flag6 = 0;
bool flag7 = 0;
bool flag8 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  DDRA = 0b11111111;
}

void loop() {
  // put your main code here, to run repeatedly:
  cmillis1 = cmillis2 = cmillis3 = cmillis4 = cmillis5 = cmillis6 = cmillis7 = cmillis8 =  millis();
  
  if (flag1 == 0) {
    PORTA |= 0b00000001;
    if ((cmillis1 - pmillis1) > 781) {
      flag1 = 1;
      pmillis1 = cmillis1;
    }
  }
  if (flag1 == 1) {
    PORTA &= 0b11111110;
    if ((cmillis1 - pmillis1) > 515) {
      flag1 = 0;
      pmillis1 = cmillis1;
    }
  }
  
  if (flag2 == 0) {
    PORTA |= 0b00000010;
    if ((cmillis2 - pmillis2) > 2014) {
      flag2 = 1;
      pmillis2 = cmillis2;
    }
  }
  if (flag2 == 1) {
    PORTA &= 0b11111101;
    if ((cmillis2 - pmillis2) > 1348) {
      flag2 = 0;
      pmillis2 = cmillis2;
    }
  }

  if (flag3 == 0) {
    PORTA |= 0b00000100;
    if ((cmillis3 - pmillis3) > 343) {
      flag3 = 1;
      pmillis3 = cmillis3;
    }
  }
  if (flag3 == 1) {
    PORTA &= 0b11111011;
    if ((cmillis3 - pmillis3) > 573) {
      flag3 = 0;
      pmillis3 = cmillis3;
    }
  }
  
  if (flag4 == 0) {
    PORTA |= 0b00001000;
    if ((cmillis4 - pmillis4) > 678) {
      flag4 = 1;
      pmillis4 = cmillis4;
    }
  }
  if (flag4 == 1) {
    PORTA &= 0b11110111;
    if ((cmillis4 - pmillis4) > 1839) {
      flag4 = 0;
      pmillis4 = cmillis4;
    }
  }

  if (flag5 == 0) {
    PORTA |= 0b00010000;
    if ((cmillis5 - pmillis5) > 342) {
      flag5 = 1;
      pmillis5 = cmillis5;
    }
  }
  if (flag5 == 1) {
    PORTA &= 0b11101111;
    if ((cmillis5 - pmillis5) > 534) {
      flag5 = 0;
      pmillis5 = cmillis5;
    }
  }
  
  if (flag6 == 0) {
    PORTA |= 0b00100000;
    if ((cmillis6 - pmillis6) > 1478) {
      flag6 = 1;
      pmillis6 = cmillis6;
    }
  }
  if (flag6 == 1) {
    PORTA &= 0b11011111;
    if ((cmillis6 - pmillis6) > 326) {
      flag6 = 0;
      pmillis6 = cmillis6;
    }
  }

  if (flag7 == 0) {
    PORTA |= 0b01000000;
    if ((cmillis7 - pmillis7) > 1859) {
      flag7 = 1;
      pmillis7 = cmillis7;
    }
  }
  if (flag7 == 1) {
    PORTA &= 0b10111111;
    if ((cmillis7 - pmillis7) > 351) {
      flag7 = 0;
      pmillis7 = cmillis7;
    }
  }
  
  if (flag8 == 0) {
    PORTA |= 0b10000000;
    if ((cmillis8 - pmillis8) > 777) {
      flag8 = 1;
      pmillis8 = cmillis8;
    }
  }
  if (flag8 == 1) {
    PORTA &= 0b01111111;
    if ((cmillis8 - pmillis8) > 888) {
      flag8 = 0;
      pmillis8 = cmillis8;
    }
  }
}
