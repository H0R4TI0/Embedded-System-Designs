void setup(){
  DDRD = 0b00100000;     //PD5 - Pin 5 Uno
  OCR0B = 127;           //50% duty cycle
  TCCR0A = 0b00100011;   //Normal output channel B, Fast PWM 255 top
  TCCR0B = 0b00000011;   //64 pre-scaler
}

void loop(){
}
