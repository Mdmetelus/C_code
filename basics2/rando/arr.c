#include <stdio.h>
int main()
{
  //variable declaration
  float arr[5], *ptr, total = 0, avg;
  int arr_len;

  //Accepting input
  printf("Enter 5 float values  : ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%f", &arr[i]);
  }

  //Checking input
  printf("\n You entered...  : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%.2f   ", arr[i]);
  }

  ptr = arr; // the name of array variable without index is nothing but a pointer to itself
  printf("\n You entered...(using   pointer)  : ");
  for (int i = 0; i < 5; i++)
  {
    printf("%.2f   ", *(ptr + i)); // memory location + 4 === next
    total += *(ptr + i);
  }

  printf("\n Total =  %.2f ", total);

  arr_len = sizeof(arr) / sizeof(arr[0]);
  printf("\nLength  = %d", arr_len);

  avg = total / arr_len;
  printf("\n Average = %.2f ", avg);
  printf("\n Percentage = %.2f %% ", avg);

  return 0;
}