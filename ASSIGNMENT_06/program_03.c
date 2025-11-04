//////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   Checks Both Parameter are Equal or Not.
//  Input :         Int, Int
//  Output :        bool
//  Author :        Sumit Satishkumar Shastri
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////

bool ChkEqual(
                int iNo1,                                   // First Argument
                int iNo2                                    // Second Argument
             )
{
    if(iNo1 == iNo2)                                        // Business Logic
    {
        return true;
    }

    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                                        // To Store First number
    int iValue2 = 0;                                        // To Store Second number
    bool bRet = false;                                      // To Store fucntion output

    printf("Please enter 2 numbers : \n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);                      // Function Calling

    if(bRet == true)
    {
        printf("Equal.");
    }

    else
    {
        printf("Not Equal");
    }

    return 0;

    // End of Main Function
}

//////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//
//  1. Input : 12 13            Output : Not Equal.
//  2. Input : 9 9              Output : Equal.
//
//////////////////////////////////////////////////////////////////////////
