#include <stdio.h>
int main()
{
    int n;
    printf("Program to tell the number of days in a month\n");
    printf("Please enter the month number : ");
    jump:
    scanf("%d",&n);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("There are 31 days in month %d",n);
    }
    else if(n==4 || n==6 || n==9 || n==11)
    {
        printf("There are 30 days in month %d",n);
    }
    else if(n==2)
    {
        printf("There are 28 days in month %d \n But in case of leap year there are 29 days",n);
    }
    else 
    {
        printf("Invalid input! Please enter a valid input : ");
        goto jump;
    }

    return 0;
}
