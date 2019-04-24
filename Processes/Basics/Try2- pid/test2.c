#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        execlp("ls", "ls", NULL);
        perror("exec"); // special tyep of error message
        exit(1);
    } else {
      wait(NULL);
      printf("I'm the parent!\n");
    }

    return 0;
}