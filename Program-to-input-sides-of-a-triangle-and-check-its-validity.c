#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Program to input sides of a triangle and check its validity \n");
    printf("Please input the sides the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        printf("The Triangle is invalid");
    }
    else
    {
        printf("The Triangle is valid");
    }
    return 0;
}

