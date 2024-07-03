#include <stdio.h>
#include <stdbool.h>
#include "tools.h"

int main()
{
    headPrint();

    int doorCode = 1337;

    if (doorCode == 1337) 
    {
        printf("Correct code.\nThe door is now open.\n");
    } 
    else 
    {
        printf("Wrong code.\nThe door remains closed.\n");
    }
    
    headPrint();

    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) 
    {
        printf("1 The value is a positive number.\n");
    }
    else if (myNum < 0) 
    {
        printf("2 The value is a negative number.\n");
    } 
    else 
    {
        printf("The value is 0.\n");
    }

    headPrint();

    //SWITCH
    int day = 4;

    switch (day) 
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }

    headPrint();
    pause();
    return 0;
}