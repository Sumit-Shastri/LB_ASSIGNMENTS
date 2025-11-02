#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iAns = 1;

    for(i = 1; i <= (iNo/2); i++)
    {
        if(iNo % i == 0)
        {
            printf("%d  ",i);
            printf("\n");
            iAns = iAns * i;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("The multiplication of multiples is : %d",iRet);

    return 0;
}