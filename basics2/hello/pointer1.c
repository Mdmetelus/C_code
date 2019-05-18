#include <stdio.h>

int main(void)
{

  unsigned char x = 12; // an unsigned is a non-negative int between 0 and 255;

  unsigned char *p = &x; //When declaring a variable, if you have an asterisk(*) next to a p(the variable) for pointer, it becomes a pointer;

  printf("%u %p\n", x, &x);

  printf("at p: %u\n", *p); // if an asterisk(*) next tp the p in this case it is a dereference andallows us to kno whats stored at that reverence address point p.

  *p = 15;

  printf("x is: %u\n", x);

  return 0;
}