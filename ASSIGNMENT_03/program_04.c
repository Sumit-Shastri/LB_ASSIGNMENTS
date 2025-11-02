#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("Lower Case is : %c",cValue);
    }

    else if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("Upper Case is %c",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}