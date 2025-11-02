#include<stdio.h>

int FactDiff(int iNo)
{
    int FactorSum = 0;
    int NonFactorSum = 0;
    int Total = 0;

    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            FactorSum = FactorSum + i;
        }
        
        else
        {
            NonFactorSum = NonFactorSum + i;
        }
    }

    Total = FactorSum - NonFactorSum;

    return Total;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}