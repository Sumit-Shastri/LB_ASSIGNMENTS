#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("*");
        iCnt ++;
    }
}

int main()
{
    int iValue;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);
}