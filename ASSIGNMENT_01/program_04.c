#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Check(iValue);

    if(iRet == true)
    {
        printf("Number is Divisible by 5");
    }

    else
    {
        printf("Number is not Divisble by 5");
    }

    return 0;
}