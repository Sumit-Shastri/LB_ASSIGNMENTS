//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description :   Displays all Odd Numbers upto N
//  Input :         Int
//  Output :        String
//  Author :        Sumit Satishkumar Shastri
//  Date :          07/11/2025
//
//////////////////////////////////////////////////////////////////

void OddDisplay(
                    int iNo                         // Store User Value
                )
{
    int i = 0;                                      // counter for loop

    for(i = 1; i <= iNo; i++)                       // Business Logic   
    {
        if(i % 2 != 0)
        {
            printf("%d ",i);
        }
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

    OddDisplay(iValue);                             // Function Call

    return 0;

    // End of Main
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 15    Output : 1 3 5 7 9 11 13 15 
//
//  2. Input : 20    Output : 1 3 5 7 9 11 13 15 17 19
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In Odd Display there is a forLoop, which
//     Takes Input N and runs loops for N times.
//     
//     
//     Therefore, Time Complexity is : O(n)
//
//////////////////////////////////////////////////////////////////