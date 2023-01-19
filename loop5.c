// Write a programe to print 2 numbered triagnle
#include <stdio.h>

void main()
{
    int count = 0, flash = 5, tamp = 1;
    while (flash > 0)
    {

        while (count < flash)
        {
            printf("%d ", tamp);
            count++;
        }
        printf("\n");
        count = 0;
        flash--; // flash=flash-1;
        tamp++;
    }
    //  while (count < 5)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 5)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;
    // while(count<5)
    // {
    //     printf("*");
    //     count++;
    // }
}