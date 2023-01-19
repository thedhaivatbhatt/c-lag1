// write a program to accept month number from user
// ==,<,>,<=,>=,!=
#include <stdio.h>

void main()
{
    int month;
    printf("enter the month");
    scanf("%d",&month);
    if(month==1)
    {
        printf("jan month 31 days");
    }
    else if (month==2)
    {
        printf("fab month 28/29 days");
    }
    else if (month==3)
    {
        printf("mar month 31 days");
    }

}