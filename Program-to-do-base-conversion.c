#include <math.h>
#include <stdio.h>
#include <string.h>
int binarytodecimal(int num);
int decimaltooctal(int num);
void decimaltohexadecimal(int num);
int octaltodecimal(int num); 
void decimaltobinary(int num);
int hexadecimaltodecimal(char hex[]);
int main()
{
    int ans,num,ch,tempval;
    char A[20];
    printf("Program to do Base Conversion\n");
    printf("Please choose from the following menu:\n");
    printf(" 1: Binary To Decimal \n");
    printf(" 2: Binary To Octal \n");
    printf(" 3: Binary To Hexadecimal \n");
    printf(" 4: Octal To Binary \n");
    printf(" 5: Octal To Decimal \n");
    printf(" 6: Octal To Hexadecimal \n");
    printf(" 7: Decimal To Binary \n");
    printf(" 8: Decimal To Octal \n");
    printf(" 9: Decimal To Hexadecimal \n");
    printf(" 10: Hexadecimal To Binary \n");
    printf(" 11: Hexadecimal To Deciaml \n");
    printf(" 12: Hexadecimal To Octal \n");
    label:
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Please enter the Binary input\n");
        scanf("%d",&num);
        ans = binarytodecimal(num);
        printf("The Decimal converted number is : %d",ans);
        break;
        
        
        case 2:
        printf("Please enter the Binary input\n");
        scanf("%d",&num);
        tempval = binarytodecimal(num);
        ans = decimaltooctal(tempval);
        printf("The Octal converted number is : %d",ans);
        break;
        
        
        case 3:
        printf("Please enter the Binary input\n");
        scanf("%d",&num);
        tempval = binarytodecimal(num);
        decimaltohexadecimal(tempval);
        break;
        
        
        case 4:
        printf("Please enter the Octal input\n");
        scanf("%d",&num);
        tempval = octaltodecimal(num);
        decimaltobinary(tempval);
        break;
        
        
        case 5:
        printf("Please enter the Octal input\n");
        scanf("%d",&num);
        ans = octaltodecimal(num);
        printf("The Decimal converted number is : %d",ans);
        break;
        
        
        case 6:
        printf("Please enter the Octal input\n");
        scanf("%d",&num);
        tempval = octaltodecimal(num);
        decimaltohexadecimal(tempval);  
        break;
        
        
        case 7:
        printf("Please enter the Decimal input\n");
        scanf("%d",&num);
        decimaltobinary(num);
        break;
        
        
        case 8:
        printf("Please enter the Decimal input\n");
        scanf("%d",&num);
        ans = decimaltooctal(num);
        printf("The Octal converted number is : %d",ans);
        break;
        
        
        case 9:
        printf("Please enter the Decimal input\n");
        scanf("%d",&num);
        decimaltohexadecimal(num);
        break;
        
        
        case 10:
        printf("Please enter the Hexadecimal input\n");
        scanf("%s",A);
        tempval=hexadecimaltodecimal(A);
        decimaltobinary(tempval);
        break;
        
        
        case 11:
        printf("Please enter the Hexadecimal input\n");
        scanf("%s",A);
        ans=hexadecimaltodecimal(A);
        printf("The Decimal converted number is : %d",ans);
        break;
        
        
        case 12:
        printf("Please enter the Hexadecimal input\n");
        scanf("%s",A);
        tempval=hexadecimaltodecimal(A);
        ans=decimaltooctal(tempval);
        printf("The Octal converted number is : %d",ans);
        break;
        
        
        default:
        printf("Invalid input! Please enter a valid choice : ");
        goto label;
    }
    return 0;
}


int binarytodecimal(int num)
{
    int n,temp,rem,dec=0;
    int A[20];
    int i=0;
    while(num!=0)
    {
        rem=num%10;
        A[i]=rem;
        i++;
        num=num/10;
    }
    n=i;
    for(i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        dec=dec+A[i]*pow(2,i);
    }
    return dec;
}


int decimaltooctal(int num)
{
   int oct=0;
   int i=1;
   while (num!= 0)
   {
        oct=oct+(num%8)*i;
        num=num/8;
        i=i*10;
   } 
   return oct;
}

    
void decimaltohexadecimal(int num)
{
    int rem,i,j=0;
    char hexadecimal[20];
    while (num!=0)
    {
        rem=num%16;
        if(rem<10)
        {
            hexadecimal[j++]=48+rem;
        }
        else
        {
            hexadecimal[j++]=55+rem;
        }
        num=num/16;
    }
    printf("Hexadecimal converted number is : ");
    for(i=j;i>=0;i--)
    {
        printf("%c", hexadecimal[i]);
    }
}
   
   
int octaltodecimal(int num)
{
    int dec=0;
    int i=0;
    while(num!=0)
    {
        dec=dec+(num%10)*pow(8,i);
        ++i;
        num/=10;
    }
    return dec;
}
    

void decimaltobinary(int num)
{
    int i, A[20];
    for(i=0;num>0;i++)    
    {    
        A[i]=num%2;    
        num=num/2;    
    }    
    printf("\n The Binary converted number is : ");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",A[i]);    
    }    
}

int hexadecimaltodecimal(char hex[]) 
{    
    int len = strlen(hex); 
    int base = 1; 
    int dec = 0; 
    for (int i=len-1; i>=0; i--) 
    {    
        if (hex[i]>='0' && hex[i]<='9') 
        { 
            dec+=(hex[i]-48)*base; 
            base=base*16; 
        } 
        else if (hex[i]>='A' && hex[i]<='F') 
        { 
            dec+=(hex[i]-55)*base; 
            base = base*16; 
        } 
    } 
      
    return dec; 
} 
