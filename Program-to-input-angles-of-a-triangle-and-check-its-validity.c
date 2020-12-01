#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Program to input angles of a triangle and check its validity \n");
    printf("Please input the angles of triangle in degrees : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("The Triangle is valid");
    }
    else if(a+b+c!=180)
    {
        printf("The Triangle is invalid");
    }
    return 0;
}
