#include <stdio.h>

int main() {
  int x = 2;
  float y = 3.14;

  printf("x is %d\n", x);
  printf("y is %f\n", y);

  int z;

  z = 3 + x; 

  float f;

  f = 3 + 2.6;

  printf("f is %f\n", f);
  z = 3 + 2.6;

  char *s; //char 8 bit integer that refer to the ascii code -s is a pointer to a car-

  s = "Hello, world!"; // both sides have to have the same kind of pointer type( they are both char pointers )
  //a pointer is an index into your memory array, its like the key in your key value pair

  return 0;
}