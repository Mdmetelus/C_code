#include <stdio.h>
#include <conio.h>

int main(void) {
  int LED = 0xFF;

  printf("\n Original value before masking = %x",LED);
  LED = LED & 0xF0;
  printf("\n Value after masking = %x",LED);


  LED = 0x55;
  printf("\n Original value before toggle = %x",LED);
  LED = LED ^ 0xFF;
  printf("\n Toggle values after toggle = %x",LED);
  return 0;
}