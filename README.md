
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
