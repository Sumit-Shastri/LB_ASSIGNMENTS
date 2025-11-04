//////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Return the Multilication of numbers.
//  Input :         Int, Int, Int
//  Output :        Int
//  Author :        Sumit Satishkumar Shastri
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////

int Multiply(
                int iNo1,                           // Argument 1
                int iNo2,                           // Argument 2
                int iNo3                            // Argument 3
            )
{
    int iAns = 0;                                   // To Store the Multiplication
    
    iAns = iNo1 * iNo2 * iNo3;                      // Business Logic

    return iAns;
}

//////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue1 = 0;                                // To Store 1st Integer
    int iValue2 = 0;                                // To Store 2nd Integer
    int iValue3 = 0;                                // To Store 3rd Integer
    int iRet = 0;                                   // To Store function Output

    printf("Please Enter 3 numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("The Multiplication of 3 Numbers is : %d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//
//  1. Input : 12 13 14            Output : 2184
//  2. Input : 9 9 10              Output : 810
//
//////////////////////////////////////////////////////////////////////////