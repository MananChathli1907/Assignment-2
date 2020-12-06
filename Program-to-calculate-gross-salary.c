#include <stdio.h>

int main()
{
    float basicsal, grosssal, da, hra;
    printf("Program to calculate gross salary \n");
    printf("Please enter basic salary of an employee: ");
    scanf("%f", &basicsal);
    if(basicsal <= 10000)
    {
        da  = basicsal * 0.8;
        hra = basicsal * 0.2;
    }
    else if(basicsal <= 20000)
    {
        da  = basicsal * 0.9;
        hra = basicsal * 0.25;
    }
    else
    {
        da  = basicsal * 0.95;
        hra = basicsal * 0.3;
    }
    grosssal = basicsal + hra + da;
    printf("Gross salary of the employee is: = %.6f", grosssal);
    return 0;
}