// Realloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // allocates p memory to use 100 ints
  int *p = malloc(100 * sizeof(int));

  // inserts int values into 0-to-99 int memory addresses
  for (int i = 0; i < 100; i++)
  {
    p[i] = i;
  }

  // prints 50, because the value of p[0] started with an int of 0.
  printf("p[50] = %d\n", p[50]);

  // re-allocates p memory from 100 ints to 200 ints
  p = realloc(p, 200 * sizeof(int));

  // inserts int values into the range of 100-to-199 int memory addresses
  for (int i = 100; i < 200; i++)
  {
    p[i] = i;
  }

  // prints values of 50 and 150
  printf("p[50] = %d\n", p[50]);
  printf("p[150] = %d\n", p[150]);

  // shaves off the 76 to 200 memory addresses of p
  p = realloc(p, 75 * sizeof(int));

  // prints 50
  printf("p[50] = %d\n", p[50]);

  // prints nothing (in my case)
  printf("Undefined behavior:\n");
  printf("p[150] = %d\n", p[150]);

  // removes p from the heap
  free(p);

  // prints nothing (in my case), because the memory used by p has been freed for usage
  printf("Undefined behavior:\n");
  printf("p[50] = %d\n", p[50]);

  return 0;
}