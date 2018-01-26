#include "ladder.h"

void setup(void)
{
  ladder_iface_init();
}

void loop(void)
{
  unsigned int t1 = millis();
  PlcCycle();
  unsigned int t2 = millis();
  if (t1 > t2) {
    t2 -= t1;
    t2 = ~t2;
    delay(10 - t2);
  } else {
    delay(10 - (t2 - t1));
  }
}
