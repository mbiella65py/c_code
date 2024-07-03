#include <stdio.h>
#include <stdbool.h>
#include "tools.h"

int main()
{
    headPrint();

    bool vero = 45;
    bool falso = 0;

    printf("Vero o falso? %d\n", vero);
    printf("Vero o falso? %d\n", falso);

    headPrint();

    printf("Comparison\n");
    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    headPrint();

    //REAL LIFE EXAMPLE
    int myAge = 25;
    int votingAge = 18;
    printf("%d\n", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

    headPrint();

    if (myAge >= votingAge) 
    {
        printf("Old enough to vote!\n");
    }
    else
    {
        printf("Not old enough to vote.\n");
    }

    headPrint();
    pause();
}