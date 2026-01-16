#include <Arduino.h>

#define LED_PIN 2   // Built-in LED on most ESP32 boards

void setup() {
    pinMode(LED_PIN, OUTPUT);

    Serial.begin(115200);   // Start Serial Monitor
    Serial.println("ESP32 LED Blink Started");
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
    delay(1000);

    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
    delay(1000);
}
