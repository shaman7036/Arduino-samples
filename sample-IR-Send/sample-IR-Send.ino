//------------------------------------------------------------------------------
// OSI5LA5113A: 標準 1.35V  (最大1.6V)
//------------------------------------------------------------------------------

#include <IRremoteESP8266.h>

#define PIN_SEND  13

IRsend irSend;

void setup() {
  Serial.begin(115200);
  irSend.begin(PIN_SEND);
}

void loop() {
  // send for specific decode type
  // irSend.sendNEC(0x2FD48B7, 32);

  // send raw signal
  int khz = 38;
  unsigned int irSignal[] = {3750, 1600, 600, 300, 600, 300, 600, 1200, 700, 1100, 700, 200, 700, 1100, 700, 200, 700, 250, 700, 250, 700, 1100, 700, 250, 650, 250, 650, 1150, 650, 250, 650, 1150, 650, 250, 650, 1150, 650, 250, 650, 250, 650, 1150, 650, 250, 650, 250, 650, 250, 650, 250, 650, 250, 650, 250, 650, 1150, 650, 300, 650, 1150, 650, 1150, 650, 300, 650, 300, 650, 1150, 650, 300, 650, 1150, 650, 1150, 650, 1150, 650, 1150, 650, 300, 600, 300, 600};
  irSend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz);

  delay(2000);

}