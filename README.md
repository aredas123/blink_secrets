
# NodeMCU Wi-Fi Blink Project

This is a simple project for NodeMCU (ESP8266) that connects to Wi-Fi and blinks the built-in LED.

## Configuration 🔑

To protect sensitive data, this project does not include Wi-Fi credentials. To run this code, you need to create a file named `secrets.h` in the same directory as `blink.ino`.

Inside `secrets.h`, add the following code and replace it with your own Wi-Fi details:

```cpp
#ifndef SECRETS_H
#define SECRETS_H

#define SECRET_SSID "YOUR_WIFI_NAME"
#define SECRET_PASS "YOUR_WIFI_PASSWORD"

#endif

----------------------------------------------------------------
How to use
Clone or download this repository.
Create the secrets.h file as described above.
Open blink.ino in VS Code (PlatformIO/Arduino) or Arduino IDE.
Upload the code to your NodeMCU.
----------------------------------------------------------------
Authors ✍️
Aredas123 - Project Concept & Architecture - Your GitHub Profile
Gemini (AI Assistant) - Code & Technical Implementation
Feel free to star ⭐ this repository if it helped you!
