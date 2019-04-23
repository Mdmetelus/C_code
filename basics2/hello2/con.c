#include <stdio.h>

void string_copy(char *x, char *y)
{
  printf("sizeof x %lu\n", sizeof x);
  int z;
  for (z = 0; y[z]; z++){
    x[z] = y[z];
  }
  x[z] = '\0';
}

int main(void)
{
  //? show memory(start=65520)
  char *hello = "Hello";
  char buffer[10];

  string_copy(buffer, hello);

  return 0;
}