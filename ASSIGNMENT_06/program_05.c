//////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   Calculate the percentage
//  Input :         Int, Int
//  Output :        FLoat
//  Author :        Sumit Satishkumar Shastri
//  Date :          04/11/2025
//
///////////////////////////////////////////////////////////////////////////

float Percentage(
                    int tMarks,                                     // For Total Marks
                    int oMarks                                      // For Obtained Marks
                )
{
    float per = 0.0;                                                // To Store Calculation

    if(tMarks == 0)                                                 // Handler for Division by 0.
    {
        return -1;
    }

    per = ( (float) oMarks / (float) tMarks )* 100;                 // Business Logic

    return per;
}

//////////////////////////////////////////////////////////////////////////
//
//  Main Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int totalMarks = 0;                                             // To Store Total Marks
    int obtainedMarks = 0;                                          // To Store Obtained Marks
    float percentage = 0.0;                                         // To Store calculater percentage

    printf("Please Enter Total Marks : \n");
    scanf("%d", &totalMarks);

    printf("Please Enter Obtained Marks : \n");
    scanf("%d", &obtainedMarks);

    percentage = Percentage(totalMarks, obtainedMarks);             // Function Call

    if(percentage == -1)                                            // 0 Division Handler
    {
        printf("Error : Total Marks Cannot be 0. Try Again.");
    }

    else
    {
        printf("Percentage of %d Out of %d is : %f", obtainedMarks, totalMarks, percentage);
    }

    return 0;

    // End of Main Function.
}


//////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//
//  1. Input : 0, 23               Output : Error: Total marks cannot be 0.
//  2. Input : 35, 17              Output : 48.571430
//  3. Input : 50, 26              Output : 52.000000
//  4. Input : 70, 61              Output : 87.142853
//
//////////////////////////////////////////////////////////////////////////