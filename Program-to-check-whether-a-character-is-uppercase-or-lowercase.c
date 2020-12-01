
#include <stdio.h>
int main()
{
    char c;
    printf("Program to check whether a character is uppercase or lowercase alphabet\n");
    printf("Please enter an alphabet : ");
    scanf("%c",&c);
    if (c>='a' && c<='z')
    {
        printf("The alphabet is lowercase");
    }
    else if (c>='A' && c<='Z')
    {
        printf("The alphabet is uppercase");
    }
    else
    {
        printf("The input chracter is not an alphabet");
    }
    return 0;
}
