#include <stdio.h>
int main()
{
    int n;
    printf("Program to print Number Pattern 4\n");
    printf("Please enter the number of lines you want the pattern to continue: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(n%2!=0)
            {
                if(i==n/2 &&  j==n/2)
                printf("0 ");
                else
                printf("1 ");
            }
            else
            {
                if((i==n/2 &&  j==n/2) || (j==(n/2)-1 && i==n/2) || (j==(n/2)-1 && i==(n/2)-1) || (j==n/2 && i==(n/2)-1))
                printf("0 ");
                else
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
