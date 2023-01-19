// num1=100 num2=50
// num1=50 num2=100
#include <stdio.h>
void main()
{
    int num1 = 100, num2 = 50, tamp;
    printf("num1 value %d", num1);
    printf("\n num2 value %d", num2);

    tamp = num1;
    num1 = num2;
    num2 = tamp;

    printf("\n num1 is %d", num1);
    printf("\n num2 is %d", num2);
}