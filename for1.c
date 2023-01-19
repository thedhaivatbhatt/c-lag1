// write a program to print follwing pattern
// 1,5,12,22,35,51,70,92,117,145,176,...3000
// 3  3  3  3  3
#include <stdio.h>
void main()
{
    int number = 1, tamp = 4;
    printf("%d ", number);

    for (number = 1; number < 2882; tamp = tamp + 3)
    {
        number = number + tamp; // 5
        printf("%d ", number);
    }

    // tamp=tamp+3;//4+3=7
    // number=number+tamp;//5+7=12
    // printf("%d ",number);
    // tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);
    //  tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);
    //  tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);
    // tamp=tamp+3;
    // number=number+tamp;
    // printf("%d ",number);
}