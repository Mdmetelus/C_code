// Realloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p = malloc(100 * sizeof(int));

  for (int i = 0; i < 100; i++)
  {
    p[i] = i;
  }

  printf("p[50] = %d\n", p[50]);

  p = realloc(p, 200 * sizeof(int));

  for (int i = 100; i < 200; i++)
  {
    p[i] = i;
  }

  printf("p[50] = %d\n", p[50]);
  printf("p[150] = %d\n", p[150]);

  p = realloc(p, 75 * sizeof(int));

  printf("p[50] = %d\n", p[50]);

  printf("Undefined behavior:\n");
  printf("p[150] = %d\n", p[150]);

  free(p);

  printf("Undefined behavior:\n");
  printf("p[50] = %d\n", p[50]);

  return 0;
}