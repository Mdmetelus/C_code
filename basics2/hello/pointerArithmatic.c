#include <stdio.h>

int main()
{
  int x;

  x = 12;

  int *p;

  &x; // address of is & and will tell you the 
  
  p = &x; // a pointer is a variable // thats how you can have a pointer to a pointer. 
  // a pointer is just an address in memory

  printf("x is %d\n", x); // %dm eans decimal in printf // will print12

  printf("&x is %p\n", &x); //%p is tasking for the pointer // it should give s the location like  0x1234

  printf("p is %p\n", p);

  printf("*p is %p\n", *p); // 12
  
  *p =99;

  printf("*p is %p\n", *p); // 99
  printf("x is %d\n", x); // 99

  return 0;
}