#include <Arduino.h>
#include <HardwareSerial.h>

#define LED PC13

HardwareSerial Serial1(USART1);

void setup() {
  Serial1.begin(9600);
  Serial1.println("Hello");
  pinMode(LED, OUTPUT);

}

void loop() {
  Serial1.print('5');
  digitalWrite(LED, HIGH);
  delay(300);
  digitalWrite(LED, LOW);
  delay(300);
}
