/*
  NodeMCU Wi-Fi ir LED Mirksėjimo projektas
  Šis kodas yra viešas. Slaptažodžiai saugomi privačiame "secrets.h" faile.
*/

#include <ESP8266WiFi.h>  // Jei naudoji ESP8266 (NodeMCU V2/V3)
// #include <WiFi.h>      // Jei naudotum ESP32 modelį

// Įtraukiame paslapčių failą. Kompiuteryje jis turi gulti į tą patį aplanką.
#include "secrets.h" 

// NodeMCU vidinis LED dažniausiai yra ant D4 pin'o (arba LED_BUILTIN)
const int ledPin = LED_BUILTIN; 

void setup() {
  Serial.begin(115200);
  delay(10);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH); // NodeMCU LED išsijungia gavęs HIGH

  Serial.println();
  Serial.print("Jungiamasi prie: ");
  // SECRET_SSID paimamas iš tavo privataus failo
  Serial.println(SECRET_SSID); 

  // Naudojame kintamuosius iš secrets.h
  WiFi.begin(SECRET_SSID, SECRET_PASS); 

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    // Mirksime LED'u, kol bando prisijungti
    digitalWrite(ledPin, !digitalRead(ledPin)); 
  }

  Serial.println("");
  Serial.println("Wi-Fi prisijungė sėkmingai!");
  Serial.print("IP adresas: ");
  Serial.println(WiFi.localIP());
  
  // Prisijungus LED švies pastoviai (LOW NodeMCU reikšmė įjungia šviesą)
  digitalWrite(ledPin, LOW); 
}

void loop() {
  // Kai Wi-Fi prijungtas, tiesiog lėtai mirksime LED lempute
  digitalWrite(ledPin, LOW);  // Įjungta
  delay(1000);
  digitalWrite(ledPin, HIGH); // Išjungta
  delay(1000);
}
