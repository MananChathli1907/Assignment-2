#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Program to input sides of a triangle and check whether it is Equilateral, Isosceles or Scalene \n");
    printf("Please input the sides the triangle : ");
    label:
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b+c || b>=a+c || c>=a+b)
    {
        printf("The Triangle is invalid");
        goto label;
    }
    else if(a==b && a==c)
    {
        printf("The Triangle is Equilateral");
    }
    else if(a==b || a==c || b==c)
    {
        printf("The Triangle is Isosceles");
    }
    else
    {
        printf("The Triangle is Scalene");
    }
    return 0;
}
