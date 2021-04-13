#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
  Serial.println("I am alive!");
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(990);
  Serial.println("Hey! You there?");
}
