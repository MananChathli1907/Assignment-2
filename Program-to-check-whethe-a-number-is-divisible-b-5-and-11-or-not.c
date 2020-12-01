#include <stdio.h>
int main()
{
    int n;
    printf("Program to check whether a number is divisible by 5 and 11 or not\n");
    printf("Please enter a number : ");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    {
        printf("The number is divisible by 5 and 11 both"); 
    }
    else if(n%5==0 && n%11!=0)
    {
        printf("The number is divisible by 5 but not by 11");
    }
    else if(n%5!=0 && n%11==0)
    {
        printf("The number is divisible by 11 but not by 5");
    }
    else
    {
        printf("The number is not divisible by 5 and 11 both");
    }
    return 0;
}
