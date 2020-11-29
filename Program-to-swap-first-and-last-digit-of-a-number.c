#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,ld,fd,rem,n,temp,i=0;
    int A[20];
    printf("Program to swap first and last digit of a number \n ");
    printf("Please enter the number ");
    scanf("%d",&num1);
    ld=num1%10;
    while(num1!=0)
    {
        num1=num1/10;
        rem=num1%10;
        A[i]=rem;
        i++;
        if(num1/10==0)
        {
            fd=num1;
            break;
        }
        n=i;
    }
    for(i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    num2=fd;
    for(i=0;i<n;i++)
    {
        num2+=A[i]*pow(10,n-i);
    }
    num2=num2+ld*pow(10,n+1);
    printf("\n Number with first and last digit swapped is %d",num2);
    

    return 0;
}
