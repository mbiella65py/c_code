#include <stdio.h>
#include "tools.h"

int main(void)
{
    headPrint();

    printf("Basic Data Types\n");
    printf("Data Type\tSize\t\tDescription\n");
    printf("int\t\t2 or 4 bytes\tStores whole number without decimals\n");
    printf("float\t\t4 bytes\t\tStores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits\n");
    printf("double\t\t8 bytes\t\tStores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits\n");
    printf("char\t\t1 byte\t\tStores a single character/letter/number, or ASCII values\n");

    headPrint();

    printf("Basic format specifiers\n");
    printf("Format specifier\tData Type\n");
    printf("d or i\t\t\tint\n");
    printf("f or F\t\t\tfloat\n");
    printf("lf\t\t\tdouble\n");
    printf("c\t\t\tchar\n");
    printf("s\t\t\tUsed for strings\n");

    headPrint();

    double a = 35e3;
    double b = 12e4;
    printf("%lf\n", a);
    printf("%lf\n", b);

    headPrint();

    float myFloatNum = 3.5;
    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits

    headPrint();

    printf("Memory Size\n");
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));    
    
    headPrint();

    //REAL LIFE EXAMPLE
    // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    headPrint();
    
    printf("Conversion\n");
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;
    printf("%f\n", sum); // 2.500000

    int num3 = 5;
    int num4 = 2;
    float sum2 = (float) num3 / num4;

    printf("%.1f\n", sum2); // 2.5

    headPrint();

    //REAL LIFE EXAMPLE
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f\n", percentage);

    headPrint();
    pause();

    return 0;
}