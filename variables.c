#include <stdio.h>
#include "tools.h"

int main(void)
{
    int var1 = 15;
    float var2 = 123.45;
    char var3 = 'A';

    headPrint();
    
    printf("Numero Intero: %d\n",var1);
    printf("Numero Float: %f\n",var2);
    printf("Carattere: %c\n",var3);

    //REAL LIFE EXAMPLE OF VARIABLES
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);

    headPrint();

    return 0;
}