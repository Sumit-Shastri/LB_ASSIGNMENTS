//////////////////////////////////////////////////////////////////
//
//  Required Libraries
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Displays number counts till n
//  Input :         Int
//  Output :        String
//  Author :        Sumit Satishkumar Shastri
//  Date :          05/11/2025
//
//////////////////////////////////////////////////////////////////

void Display(
                int iNo                                 // To Store User Data
            )
{
    int i = 0;                                          // Counter

    for(i = 1; i <= iNo; i ++)
    {
        printf("%d ",i);                                 // Business Logic
    }
}

//////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                     // To Store user input

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);                                    // Function Call

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//                          TEST CASES :
//
//  1. Input : 1    Output : 1
//  2. Input : 2    Output : 1 2 
//  3. Input : 3    Output : 1 2 3
//  4. Input : 4    Output ; 1 2 3 4
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//                          Time Complexity :
//
//  1. In Display() function there i a while loop , which is 
//     dependent on user input that is n
//     Therefore Time Complexity : O(n);
//
//////////////////////////////////////////////////////////////////