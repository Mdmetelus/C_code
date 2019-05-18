#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    enum gender {male, female};

    enum gender myGender;

    myGender = male; // this his a valiid statment;
    //myGender = mcmuffin; // this is an invalid statment;
    enum gender anotherGender = female;

    //bool isMale = (myGender == anotherGender);

    return 0;
}
