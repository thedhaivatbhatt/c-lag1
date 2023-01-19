#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("enter the value of num1");
    scanf("%d", &num1);
    printf("enter the value of num2");
    scanf("%d", &num2);
    printf("enter the value of num3");
    scanf("%d", &num3);
    if (num1 == num2 && num2 == num3 )
    {
        printf("all are equal");
    }
    else
    { 
        if(num1>num2)
        {
            if(num1>num3)
            {
                printf("num1 is greater");
            }
            else
            {
                printf("num3 is greater");
            }
        }
        else
        {
            if (num2 > num3)
            {
                printf("num2 is greater");
            }
            else
            {
                printf("num3 is greater");
            }
            
        }
    }
}