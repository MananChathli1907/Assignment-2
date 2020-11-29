#include <stdio.h>
int main ()
{
  int num1,rem,n,temp,i=0;
  int carry=1;
  int A[20],OC[20],TC[20];
  printf("Program to find 2's compliment of a number\n");
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
        OC[i]=1;
    }
    else if(A[i]==1)
    {
        OC[i]=0;
    }
    else 
    {
        printf("The entered binary number is invalid please enter again \n");
        goto label;
    }
  }
  OC[n]='\0';
  printf("The 1's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",OC[i]);
  }
  for(i=n-1; i>=0; i--)
  {
    if((OC[i]==1) && (carry==1))
    {
        TC[i]=0;
    }
    else if((OC[i]==0) && (carry==1))
    {
        TC[i]=1;
        carry=0;
    }
    else
    {
        TC[i] = OC[i];
    }
  }
    TC[n] = '\0';
  printf("\nThe 2's compliment of entered binary number is \n");
  for(i=0;i<n;i++)
  {
      printf("%d",TC[i]);
  }
  return 0;
}
