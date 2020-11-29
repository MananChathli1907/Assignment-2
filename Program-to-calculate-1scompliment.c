#include <stdio.h>
int main ()
{
  int num1,rem,n,temp,i=0;
  int A[20],B[20];
  printf("Program to find 1's compliment of a number\n");
  printf("Please input the binary number  ");
  label:
  scanf("%d",&num1);
  while(num1!=0)
  {
    rem=num1%10;
    A[i]=rem;
    i++;
    num1=num1/10;
    n=i;
  }
  for(i=0;i<n/2;i++)
  {
    temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;
  }
  for(i=0;i<n;i++)
  {
    if(A[i]==0)
    {
        B[i]=1;
    }
    else if(A[i]==1)
    {
        B[i]=0;
    }
    else 
    {
        printf("The entered binary number is invalid please enter again \n");
        goto label;
    }
  }
  B[n]='\0';
  printf("The 1's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",B[i]);
  }
  return 0;
}
