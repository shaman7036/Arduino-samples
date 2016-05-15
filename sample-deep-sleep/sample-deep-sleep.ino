//------------------------------------------------------------------------------
// ※復帰シグナルがPIN16から出るため PIN16 と RST をつないでおく必要がある
//------------------------------------------------------------------------------

#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  delay(3000);
  ESP.deepSleep(3 *1000 *1000, WAKE_RF_DEFAULT);
  delay(1000);
}

void loop() {
}


