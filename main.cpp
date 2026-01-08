#include <Arduino.h>
#define LED_PIN 2

void LDRInit();
long ReadLDR();
void LDRAlarmCheck();

void BUZInit();
void BUZ_ON(int d);
void BUZ_OFF(int d);

void LcdInit();
void LcdDisplayLDR();


void setup() {
  pinMode(LED_PIN, OUTPUT);
  LDRInit();
  BUZInit();
  LcdInit();

}
void loop() {
  
  LcdDisplayLDR();
  delay(200);
}

