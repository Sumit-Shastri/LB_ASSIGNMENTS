//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Displays the Number Scale
//  Input :         Int
//  Output :        String
//  Author :        Sumit Satishkumar Shastri
//  Date :          05/11/2025
//
//////////////////////////////////////////////////////////////////

void Display(
                int iNo                                     // To Store User Input
            )
{
    int iCnt = 0;                                           // Loop Counter

    if(iNo < 0)                                             // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = - iNo; iCnt <= iNo; iCnt++)                  // Business Logic
    {
        printf("%d ",iCnt);                             
    }
}

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                          // To Store User Input

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);                                         // Function Call

    return 0;

    // End of Main
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 5    Output : -5 -4 -3 -2 -1 0 1 2 3 4 5
//
//  2. Input : 3    Output : -3 -2 -1 0 1 2 3
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In Display() function there is for loop.
//     It Iterates till counter is not equal iNo.
//     it Iterate for ((2 * iNo) + 1).
//     
//     Therefore, Time Complexity is : O(2n)
//
//////////////////////////////////////////////////////////////////