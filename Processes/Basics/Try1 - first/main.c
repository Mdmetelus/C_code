#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
  // Your code here
      if (pid == 0)
      {
        printf("I'm the child! my pid is %d\n", pid);
      }
      else
      {
        wait(NULL);
        printf("I'm the parent! my pid is %d\n", pid);
      }

  return 0;
}
