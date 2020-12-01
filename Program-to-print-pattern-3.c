#include <stdio.h>
int main()
{
    int n;
    printf("Program to print Number Pattern 3\n");
    printf("Please enter the number of lines you want the pattern to continue: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i==0)||(j==0)||(i==n-1)||(j==n-1))
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
