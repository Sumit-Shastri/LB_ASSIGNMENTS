//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Displays '$ *' n times.
//  Input :         Int
//  Output :        String
//  Author :        Sumit Satishkumar Shastri
//  Date :          05/11/2025
//
//////////////////////////////////////////////////////////////////

void Pattern(
                int iNo                             // To Store User Input
            )
{
    int i = 0;                                      // For Iteration Counter

    for(i = 1; i <= iNo; i++)
    {
        printf("$   *   ");                         // Business Logic
    }
}

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // To Store User Input

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);                                // Function call

    return 0;

    // End of Main
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 1    Output : $   *  
//  2. Input : 2    Output : $   *   $   *   
//  3. Input : 3    Output : $   *   $   *   $   *  
//  4. Input : 4    Output ; $   *   $   *   $   *   $   *  
//////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In Patter() there is a loop Which Runs maximum iNo times:
//      Therefore : O(n)
//
//////////////////////////////////////////////////////////////////