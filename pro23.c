// Write a programe to create a calc 
// --> addition
// --> subtraction
// --> multiplication
// --> division
// --> reminder
// --> min
// --> max
// --> equality 
#include<stdio.h>
void main()
{
    int num1,option;
    int num2,answer;
    
    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);

    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for multiplication ");
    printf("\nEnter 4 for division ");
    printf("\nEnter 5 for reminder ");
    printf("\nEnter 6 for min ");
    printf("\nEnter 7 for max ");
    printf("\nEnter 8 for equality ");
    printf("\nSelect any one from above ");
    scanf("%d",&option);

    if(option==1)
    {
        answer=num1+num2;
        printf("Your answer is %d ",answer);
    }
    else if(option==2)
    {
        answer=num1-num2;
        printf("Your answer is %d ",answer);
    }
    else if(option==3)
    {
        answer=num1*num2;
        printf("Your answer is %d ",answer);
    }
    else if(option==4)
    {
        answer=num1/num2;
        printf("Your answer is %d ",answer);
    }
    else if(option==5)
    {
        answer= num1 % num2;
        printf("Your answer is %d ",answer);
    }
    else if(option==6)
    {
        if(num1<num2)
        {
            printf("num1 is smallest");
        }
        else if(num2<num1)
        {
            printf("num2 is smallest ");
        }
    }
    else if(option==7)
    {
        if(num1>num2)
        {
            printf("num1 is greatest ");
        }
        else if(num2>num1)
        {
            printf("num2 is greatest ");
        }
    }
    else if(option==8)
    {
        if(num1 == num2)
        {
            printf("num1 and num2 both are equall");
        }
        else
        {
            printf("num1 and num2 are not equall");
        }
    }
    else
    {
        printf("invalid choice ");
    }
    printf("\nGoodbyee..");
}