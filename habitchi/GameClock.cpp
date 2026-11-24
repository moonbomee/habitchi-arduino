#include "GameClock.h"

namespace GameClock {
void setup() {}
void update() {}
bool demoMode() { return false; }
void setDemoMode(bool) {}
uint32_t now() { return millis() / 1000UL; }
uint8_t hour() { return (now() / 3600UL) % 24; }
uint8_t minute() { return (now() / 60UL) % 60; }
void addMinutes(int16_t) {}
void syncFromPc(uint32_t) {}
}
