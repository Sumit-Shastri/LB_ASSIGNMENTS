#include<stdio.h>

int main()
{
    char Name[30];
    int i = 0;

    printf("Please Enter FullName : ");
    fgets(Name, sizeof(Name), stdin);

    printf("Your Name is : %s",Name);

    return 0;
}