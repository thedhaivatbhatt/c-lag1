//write a number to find factorial of user give number
#include<stdio.h>
void main()
{
    int number,answer,tamp;
    printf("enter the value of number:");
    scanf("%d",&number);
    answer=number*(number-1);
    tamp=number-2;
    // printf("%d",answer);
    if(number<0)
    {
        printf("invalid");
    }
    else
    {
        if(number<=2)
        {
            printf("%d",number);
        }
        else
        {
            do
            {
                answer=answer*tamp;
                tamp--;//tamp=tamp-1
            }while(tamp>0);
            printf("the value of answer is %d",answer);
        }
    }
}