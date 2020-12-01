#include <stdio.h>
int main()
{
    int unit;
    float bill=0;
    printf("Program to calculate total electricity bill\n");
    printf("Please enter the number of units consumed : ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        bill=unit*0.5;
    }
    else if(unit<=150)
    {
        unit=unit-50;
        bill=25;
        bill=bill+(0.75*unit);
    }
    else if(unit<=250)
    {
        unit=unit-150;
        bill=100;
        bill=bill+(1.2*unit);
    }
    else if(unit>=250)
    {
        unit=unit-250;
        bill=220;
        bill=bill+(1.5*unit);
    }
    bill=bill+(0.2*bill);
    printf("The final amount to be paid is %f Rs",bill);
    return 0;
}
