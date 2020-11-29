##include <stdio.h>

int main()
{
    int num,rem;
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    printf("Program to calculate frequency of each digit in a number \n");
    printf("Please enter the number ");
    scanf("%d",&num);
    while (num!=0) 
    { 
        rem=num%10; 
        num=num/10;
        switch(rem)
        {
            case 0:
            count0++;
            break;
            
            case 1:
            count1++;
            break;
            
            case 2:
            count2++;
            break;
            
            case 3:
            count3++;
            break;
            
            case 4:
            count4++;
            break;
            
            case 5:
            count5++;
            break;
            
            case 6:
            count6++;
            break;
            
            case 7:
            count7++;
            break;
            
            case 8:
            count8++;
            break;
            
            case 9:
            count9++;
            break;
        }
    }
    printf("0 occurs %d times\n",count0);
    printf("1 occurs %d times\n",count1);
    printf("2 occurs %d times\n",count2);
    printf("3 occurs %d times\n",count3);
    printf("4 occurs %d times\n",count4);
    printf("5 occurs %d times\n",count5);
    printf("6 occurs %d times\n",count6);
    printf("7 occurs %d times\n",count7);
    printf("8 occurs %d times\n",count8);
    printf("9 occurs %d times\n",count9);
    return 0;
}
