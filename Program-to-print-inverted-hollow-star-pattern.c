#include <stdio.h>
int main() 
{
   int i, j, n, k = 0;
   printf("Program to print a Inverted Hollow Pyramid Star Pattern\n");
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(i=n;i<=n;++i) 
   {
      for (j=1;j<=n-i+1;++j,k=0) 
      {
         printf("  ");
      }
      while (k!=2*i-1) 
      {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   for(i=n-1;i>=1;--i) 
   {
      for (j=1;j<=2*n;++j,k=0) 
      {
         if((j==n-i+2)||(j==n+i))
         printf("* ");
         else
         printf("  ");
      }
      printf("\n");
   }
   return 0;
}
