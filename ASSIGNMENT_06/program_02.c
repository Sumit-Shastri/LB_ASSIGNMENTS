//////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   It is used to Check whether the number is greater than 100.
//  Input :         int
//  Output :        int
//  Author :        Sumit Satishkumar Shastri
//  Date :          04/11/2025
//
////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int no)
{
    if(no > 100)
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
    int iValue = 0;                             // To Store User input
    bool bRet = false;                          // To Store Function Output

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);                  // Function Calling

    if(bRet == true)                            
    {
        printf("Greater.");
    }

    else
    {
        printf("Smaller.");
    }

    return 0;

    //          End of Main
}


//////////////////////////////////////////////////////////////////////////
//
//                         TEST CASES
//
// 1. Input : 10          Output : Smaller
// 2. Input : 101         Output : Greater
//
//////////////////////////////////////////////////////////////////////////