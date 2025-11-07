//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   Displays First 5 Multiples of N
//  Input :         Int
//  Output :        String
//  Author :        Sumit Satishkumar Shastri
//  Date :          07/11/2025
//
//////////////////////////////////////////////////////////////////

void MultipleDisplay(
                    int iNo                         // Store User Value
                )
{
    int i = 0;                                      // counter for loop

    for(i = 1; i <= 5; i++)                       // Business Logic   
    {
        printf("%d ",iNo * i);
    }
}

// End of OddDisplay

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // To Store User Value

    printf("Enter Number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);                             // Function Call

    return 0;

    // End of Main
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 4    Output : 4 8 12 16 20
//
//  2. Input : 7    Output : 7 14 21 28 35
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In MultipleDisplay() there is a forLoop, which
//     Takes Input N and runs loops for N times.
//     
//     
//     Therefore, Time Complexity is : O(n)
//
//////////////////////////////////////////////////////////////////