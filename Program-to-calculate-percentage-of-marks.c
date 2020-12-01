#include <stdio.h>
int main()
{
    int p,c,co,m,b,per;
    char Grade;
    printf("Program to calculate percentage of marks(out of 100) and corresponding grade\n");
    printf("Please enter marks for Physics : ");
    scanf("%d",&p);
    printf("Please enter marks for Chemistry : ");
    scanf("%d",&c);
    printf("Please enter marks for Biology : ");
    scanf("%d",&b);
    printf("Please enter marks for Maths : ");
    scanf("%d",&m);
    printf("Please enter marks for Computer : ");
    scanf("%d",&co);
    per=(p+c+co+b+m)/5;
    if(per>=90)
    {
        Grade='A';
    }
    else if(per>=80)
    {
        Grade='B';
    }
    else if(per>=70)
    {
        Grade='C';
    }
    else if(per>=60)
    {
        Grade='D';
    }
    else if(per>=40)
    {
        Grade='E';
    }
    else
    {
        Grade='F';
    }
    printf("The percentage recieved is : %d\n",per);
    printf("The Grade recieved is : %c",Grade);
    return 0;
}
