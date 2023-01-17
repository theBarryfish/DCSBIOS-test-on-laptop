#include <Arduino.h>
//#define DCSBIOS_IRQ_SERIAL
#define DCSBIOS_DEFAULT_SERIAL
#include "DcsBios.h"  //rs485 is in there too

/* Declare a Master Caution Reset button on pin 10 */
//DcsBios::Switch2Pos masterCautionBtn("UFC_MASTER_CAUTION",32 );
//DcsBios::LED masterCaution(0x1012, 0x0800, 32); //ufc light
//DcsBios::LED aoaIndexerHigh(0x7408, 0x0008, 13);
//DcsBios::LED aoaIndexerNormal(0x7408, 0x0008, 13);
//DcsBios::LED aoaIndexerLow(0x7408, 0x0008, 13);
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