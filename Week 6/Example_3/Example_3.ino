void setup(){
  DDRD = 0b00100000;     //PD5 - Pin 5 Uno
  OCR0A = 5;             //top value is 5
  OCR0B = 2.5;           //50% duty cycle
  TCCR0A = 0b00100011;   //Normal output channel B, Fast PWM 255 top
  TCCR0B = 0b00000001;   //1 pre-scaler
}

void loop(){
}
