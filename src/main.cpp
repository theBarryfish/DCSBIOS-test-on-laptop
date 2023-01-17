#include <Arduino.h>
//#define DCSBIOS_IRQ_SERIAL
#define DCSBIOS_DEFAULT_SERIAL
#include "DcsBios.h"  //rs485 is in there too


DcsBios::LED aoaIndexerHigh(0x1012, 0x1000, 32);//green
DcsBios::LED aoaIndexerLow(0x1012, 0x4000, 27);//red
DcsBios::LED aoaIndexerNormal(0x1012, 0x2000, 33);//yel
//DcsBios::LED foobar(0x1012, 0x800, 13);

void setup() {
DcsBios::setup();
}

void loop() {
DcsBios::loop();
}