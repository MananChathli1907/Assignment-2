#include <stdio.h>
int main()
{
    int n;
    printf("Program to input week number and print week day\n");
    printf("Please enter day number : ");
    label:
    scanf("%d",&n);
    if(n==1)
    {
        printf("The day is Sunday");
    }
    else if(n==2)
    {
        printf("The day is Monday");
    }
    else if(n==3)
    {
        printf("The day is Tuesday");
    }
    else if(n==4)
    {
        printf("The day is Wednesday");
    }
    else if(n==5)
    {
        printf("The day is Thursday");
    }
    else if(n==6)
    {
        printf("The day is Friday");
    }
    else if(n==7)
    {
        printf("The day is Saturday");
    }
    else 
    {
        printf("Invalid input! Please enter a valid day number : ");
        goto label;
    }
    return 0;
}
