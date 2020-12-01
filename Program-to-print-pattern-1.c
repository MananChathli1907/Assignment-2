#include <stdio.h>
int main()
{
    int n;
    printf("Program to print Number Pattern 1 \n");
    printf("Please enter the number of lines you want the pattern to continue: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
