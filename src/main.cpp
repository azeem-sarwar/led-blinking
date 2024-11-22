#include <Arduino.h>



// put function declarations here:
void toggleLed();

int counter = 0;

int LED_PIN = 7;

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  toggleLed();
}

// put function definitions here:
void toggleLed( ) {
  for(counter=0; counter<10; counter++) {
    digitalWrite(LED_PIN, HIGH);
    delay(2000);
    digitalWrite(LED_PIN, LOW);
    delay(2000);
  }
}





