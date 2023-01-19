// write a program to menu driven calc. use char
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float answer;
    char choice = 'c';
    while (choice == 'c')
    {

        printf("enter the value of num1:");
        scanf("%d",&num1);
        printf("enter the value of num2:");
        scanf("%d",&num2);
        printf("\n enter 1 for add");
        printf("\n enter 2 for sub");
        printf("\n enter 3 for mul");
        printf("\n enter 4 for div");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == '1')
        {
            answer = num1 + num2;
            printf("answer add is %f", answer);
        }
        else if (choice == '2')
        {
            answer = num1 - num2;
            printf("answer sub is %f", answer);
        }
        else if (choice == '3')
        {
            answer = num1 * num2;
            printf("answer mul is %f", answer);
        }
        else if (choice == '4')
        {
            answer = num1 / num2;
            printf("answer div is %f", answer);
        }
        else
        {
            printf("invalid");
             fflush(stdin);
            printf("\n select your way \n press c for countinue \n");
            scanf("%c", choice);
        }
        printf("\n goodbye");
    }
}