#include <stdio.h>
int main()
{
    int num,rem,temp,n,i=0;
    int A[20];
    printf("Program to print number in words \n");
    printf("Please enter the number ");
    scanf("%d",&num);
    while (num!=0) 
    { 
        rem=num%10; 
        num=num/10;
        A[i]=rem;
        i++;
    }
    n=i;
    for(i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    } 
    printf("The numbers printed in words are :\n");
    for(i=0;i<n;i++)
    {
        switch(A[i])
        {
            case 0:
            printf("Zero ");
            break;
            
            case 1:
            printf("One ");
            break;
            
            case 2:
            printf("Two ");
            break;
            
            case 3:
            printf("Three ");
            break;
            
            case 4:
            printf("Four ");
            break;
            
            case 5:
            printf("Five ");
            break;
            
            case 6:
            printf("Six ");
            break;
            
            case 7:
            printf("Seven ");
            break;
            
            case 8:
            printf("Eight ");
            break;
            
            case 9:
            printf("Nine ");
            break;
        }
    }
    return 0;
}
