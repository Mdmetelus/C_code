#include <stdio.h>

int main()
{
  /*

  char *s; //char 8 bit integer that refer to the ascii code -s is a pointer to a car-

  s = "Hello, world!"; // both sides have to have the same kind of pointer type( they are both char pointers )
  //a pointer is an index into your memory array, its like the key in your key value pair

  */
  //printf("a is %d\n", a);

  char *s = "hello!\n";


  printf("s is %d\n", s);

  printf("s is %p\n", s); /// 200
  
  printf("Thing at s is pointing to %d\n", *s); // 104 // asterisk meeans derefference
  printf("Thing at s is pointing to %c\n", *s); // h

  printf("s is \"%s\"\n", s);
  return 0;
}