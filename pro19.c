// write a program to findout whether given number is odd or even
#include <stdio.h>

void main()
{
    int number;
    printf("enter the value of number");
    scanf("%d",&number);
    if(number % 2 ==0)
    {
        printf("\n it is even");
    }
    else
    {
        printf("\n it is odd");
    }
printf("\n good bye");
    
}