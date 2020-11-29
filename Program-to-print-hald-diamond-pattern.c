#include <stdio.h>
int main() 
{
   int i, j, n, m, k = 0;
   printf("Program to print a Half Diamond Star pattern\n");
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   m=n/2;
   if(n%2==0)
   {
       for(i=1;i<=m;++i) 
        {
            for (j=1;j<=m-i+1;++j,k=0) 
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
        for(i=m;i>=1;--i) 
        {
            for (j=1;j<=m-i+1;++j,k=0) 
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
   }
   else
   {
       for(i=1;i<=m+1;++i) 
        {
            for (j=1;j<=m-i+2;++j,k=0) 
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
        for(i=m;i>=1;--i) 
        {
            for (j=1;j<=m-i+2;++j,k=0) 
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
   }
   return 0;
}
