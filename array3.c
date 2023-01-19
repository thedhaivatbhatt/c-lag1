// write a program to sort an array
#include <stdio.h>
void main()
{
    int number[6], count = 0, tamp, flash;
    while (count < 6)
    {
        printf("enter the number %d", count + 1);
        scanf("%d", &number[count]);
        count++;
    }

    // printf("enter the number 2");
    // scanf("%d",&number[1]);
    // printf("enter the number 3");
    // scanf("%d",&number[2]);
    // printf("enter the number 4");
    // scanf("%d",&number[3]);
    // printf("enter the number 5");
    // scanf("%d",&number[4]);
    // printf("enter the number 6");
    // scanf("%d",&number[5]);
    count = 0;
    do
    {
        printf("\n number %d is %d", count + 1, number[count]);
        count++;
    } while (count < 6);

    // printf("number 2 is %d",number[1]);
    // printf("number 3 is %d",number[2]);
    // printf("number 4 is %d",number[3]);
    // printf("number 5 is %d",number[4]);
    // printf("number 6 is %d",number[5]);

    for (flash=0;flash<7;flash++)
    {
        for (count = flash+1; count < 7; count++)
        {
            if (number[count] > number[flash])
            {
                tamp = number[flash];
                number[flash] = number[count];
                number[count] = tamp;
            }
        }
    }

    count = 0;
    do
    {
        printf("\n number %d is %d", count + 1, number[count]);
        count++;
    } while (count < 6);

    // else if (number[2]>number[0])
    // {
    //     tamp=number[0];
    //     number[0]=number[2];
    //     number[2]=tamp;
    // }
}