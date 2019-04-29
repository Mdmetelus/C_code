// Malloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *a = malloc(100);
  char *b = malloc(200 * sizeof(char));
  int *c = malloc(300 * sizeof(int));

  char d[100];
  char e[200];
  int f[300];

  printf("%d\n", a[2] == *(a + 2));

  printf("%d\n", f[10] == *(f + 10));

  free(a);
  free(b);
  free(c);

  // (void)d; (void)e;

  return 0;
}