#include <stdio.h>
int main()
{
    int n;
    printf("Program to print Number Pattern 2 \n");
    printf("Please enter the number of lines you want the pattern to continue: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
