#include <stdio.h>
int main()
{
    int sp,cp;
    printf("Program to calculate profit or loss\n");
    printf("Please enter the Cost Price : ");
    scanf("%d",&cp);
    printf("Please enter the Sell Price : ");
    scanf("%d",&sp);
    if(sp==cp)
    {
        printf("No profit or loss happened in the transaction ");
    }
    else if(sp>cp)
    {
        printf("There has been a profit of %d Percent",100*(sp-cp)/cp);
    }
    else if(sp<cp)
    {
        printf("There has been a loss of %d Percent",100*(sp-cp)/cp);
    }
    return 0;
}

