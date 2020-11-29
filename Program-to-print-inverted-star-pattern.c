#include <stdio.h>
int main() 
{
   int i, j, n, k = 0;
   printf("Program to print a Inverted Pyramid Star Pattern\n");
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(i=n;i>=1;--i) 
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
   return 0;
}
