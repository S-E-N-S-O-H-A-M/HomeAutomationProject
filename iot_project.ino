#define BLYNK_PRINT Serial

#include <WiFi.h>

#include <WiFiClient.h>

#include <BlynkSimpleEsp32.h>

int pin = 2;

// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "qbQJwtJR0tpUpctk3lpnmcx_8QNVEyHE";

// Your WiFi credentials.

// Set password to "" for open networks.

char ssid[] = "EYE";

char pass[] = "INDIGENOUS";

void setup() { 

  pinMode(pin, OUTPUT);

  pinMode(pin, HIGH);

  Serial.begin(115200);

  delay(10);

  Serial.print("Connecting to ");

  Serial.println(ssid);

  WiFi.begin(ssid, pass);

  int wifi_ctr = 0;

  while (WiFi.status() != WL_CONNECTED) {

    delay(500);

    Serial.print(".");

  }

  Serial.println("WiFi connected"); 

  Blynk.begin("qbQJwtJR0tpUpctk3lpnmcx_8QNVEyHE", ssid, pass);

}

void loop(){

    Blynk.run();

}
