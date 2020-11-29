#include <stdio.h>

int main()
{
    int num,count=0;
    printf("Program to count number of digits in a number\n ");
    printf("Please enter the number ");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("The number of digits in the given number are %d",count);

    return 0;
}
