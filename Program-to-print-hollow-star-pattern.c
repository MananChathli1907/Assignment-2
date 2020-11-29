#include <stdio.h>
int main() 
{
   int i, j, n, k = 0;
   printf("Program to print Hollow Pyramid Star Pattern\n");
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(i=1;i<n;++i) 
   {
      for (j=1;j<=2n;++j,k=0) 
      {
         if((j==n-i+2)||(j==n+i))
         printf(" ");
         else
         printf("  ");
      }
      printf("\n");
   }
   for(i=n;i<=n;++i) 
   {
      for (j=1;j<=n-i+1;++j,k=0) 
      {
         printf("  ");
      }
      while (k!=2i-1) 
      {
         printf(" ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
