
#include <Wire.h>


void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(9, HIGH);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(9, LOW);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(10, HIGH);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(10, LOW);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(11, HIGH);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(11, LOW);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(12, HIGH);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(12, LOW);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(13, HIGH);
  delay(100);  // Reduce LED delay for faster blinking
  digitalWrite(13, LOW);
  delay(100);  // Reduce LED delay for faster blinking

}
