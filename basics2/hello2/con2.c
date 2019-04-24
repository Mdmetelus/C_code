#include <stdio.h>

void string_copy(char *x, char *y)
{
  
}

int main(void)
{
  //? show memory(start=65520)
  char *hello = "Hello";
  char buffer[10];

  string_copy(buffer, hello);

  return 0;
}