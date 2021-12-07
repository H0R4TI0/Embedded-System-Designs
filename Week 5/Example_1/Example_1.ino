#define Pot A3

void setup(){
  Serial.begin(9600);
}

void loop(){
  int value = analogRead(Pot);
  int led = map(value, 0, 1023, 0, 255);
  analogWrite (3, led);
  Serial.print("Potentiometer:");
  Serial.print(value);
  Serial.print(" , LED:");
  Serial.println(led);
}
