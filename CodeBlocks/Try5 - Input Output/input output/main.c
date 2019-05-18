#include <stdio.h>

int main() {

    char str[100]; //string array of 100
    int i; // integer

    printf("Enter a value: "); //displays data

    scanf("%d %s", &i, str); //reads imput from the keyboard

    printf("\nYou Entered: %d:::::%s\n", i, str);

    return 0;
}
