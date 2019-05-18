#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myCharacter = '\n';

    printf("%c", myCharacter);

    int sum = 89;

    printf("The sum is %d\n", sum);

    int integerVar = 22;
    float floatVar = 22.222;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatVar = %f\n", floatVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    return 0;
}
