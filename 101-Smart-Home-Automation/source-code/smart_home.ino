#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  // For ESP8266, change to <WiFi.h> for ESP32
#include <BlynkSimpleEsp8266.h> // For ESP32: BlynkSimpleEsp32.h

// Replace with your network credentials
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// Blynk Auth Token
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";

// Relay pin
const int relayPin = D1;

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Ensure relay OFF at start
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

// Blynk Button Widget will call this function
BLYNK_WRITE(V1) {
  int buttonState = param.asInt();
  digitalWrite(relayPin, buttonState);
}
