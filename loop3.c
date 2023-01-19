// write a program to print following pattern
//  1 8 27 64 ....10000

#include <stdio.h>
void main()
{
    int number = 1, ans = 0;
    printf("%d", number);
    while (ans < 9261)
    {
        number = number + 1;
        ans = number * number * number;
        printf(" %d", ans);
    }
    printf("\n goodbye");
    //  number=number+1;
    // ans=number*number*number;
    // printf(" %d",ans);
    //  number=number+1;
    // ans=number*number*number;
    // printf(" %d",ans);
}