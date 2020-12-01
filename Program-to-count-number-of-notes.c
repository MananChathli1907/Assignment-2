#include <stdio.h>
int main()
{
    int n;
    printf("Program to count total number of notes in given amount \n");
    printf("Please enter the amount of money in Rs : ");
    scanf("%d",&n);
    if( n<10 )
    {
        printf("The amount of money %dRs is in the form of coins",n);
    }
    else if(n<20)
    {
        printf("Notes of Rs 10 : %d\n",n/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }
    else if(n<50)
    {
        printf("Notes of Rs 20 : %d\n",n/20);
        printf("Notes of Rs 10 : %d\n",(n%20)/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }
    else if(n<100)
    {
        printf("Notes of Rs 50 : %d\n",n/50);
        printf("Notes of Rs 20 : %d\n",(n%50)/20);
        printf("Notes of Rs 100 : %d\n",((n%50)%20)/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }
    else if(n<500)
    {
        printf("Notes of Rs 100 : %d\n",n/100);
        printf("Notes of Rs 50 : %d\n",(n%100)/50);
        printf("Notes of Rs 20 : %d\n",((n%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",(((n%100)%50)%20)/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }
    else if(n<2000)
    {
        printf("Notes of Rs 500 : %d\n",n/500);
        printf("Notes of Rs 100 : %d\n",(n%500)/100);
        printf("Notes of Rs 50 : %d\n",((n%500)%100)/50);
        printf("Notes of Rs 20 : %d\n",(((n%500)%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",((((n%500)%100)%50)%20)/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }
    else if(n>=2000)
    {
        printf("Notes of Rs 2000 : %d\n",n/2000);
        printf("Notes of Rs 500 : %d\n",(n%2000)/500);
        printf("Notes of Rs 100 : %d\n",((n%2000)%500)/100);
        printf("Notes of Rs 50 : %d\n",(((n%2000)%500)%100)/50);
        printf("Notes of Rs 20 : %d\n",((((n%2000)%500)%100)%50)/20);
        printf("Notes of Rs 100 : %d\n",(((((n%2000)%500)%100)%50)%20)/10);
        printf("The rest of the amount %dRs is in the form of coins",n%10);
    }


    return 0;
}
