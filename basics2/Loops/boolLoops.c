#include <stdio.h>

int main(void)
{
  int A = 0;
  int B = 0;
  int C = 0;
  // int result;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        A = i;
        B = j;
        C = k;
        printf("A: %d, B: %d, C: %d, Result: %d\n", A, B, C, !(A && B) && !(!A || !B));
      }
    }
  }

  return 0;
}