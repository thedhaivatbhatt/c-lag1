// we have to start else part
// millennium year ex 1000,2000,3000,4000
#include <stdio.h>
void main()
{
    int year;
    printf("enter the any year ");
    scanf("%d", &year);
    if (year % 1000 == 0)
    {
        printf("\n it is millennium");
    }
    else
    {
        printf("\n it is not millennium");
    }
    printf("\n good bye");
}