// write a program to create a calc
#include <stdio.h>
int getadd(int num1, int num2)
{
    return num1 + num2;
}
int getsub(int num1, int num2)
{
    return num1 - num2;
}
int getmul(int num1, int num2)
{
    return num1 * num2;
}
int getdiv(int num1, int num2)
{
    return num1 / num2;
}
int getmodlus(int num1, int num2) // value return so use int
{
    return num1 % num2;
}
void getmin(int num1, int num2) // value not return so use void
{
    if (num1 < num2)
    {
        printf("num1 is small");
    }
    else if (num2 < num1)
    {
        printf("num2 is small");
    }
}
void getmax(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("num1 is large");
    }
    else if (num2 > num1)
    {
        printf("num2 is large");
    }
}
void geteql(int num1, int num2)
{
    if (num1 == num2)
    {
        printf("both are eql");
    }
    else
    {
        printf("both are not eql");
    }
}
void main()
{
    int num1, num2, option;
    float ans;
    printf("enter the value num1");
    scanf("%d", &num1);
    printf("enter the value num2");
    scanf("%d", &num2);

    printf("\n enter 1 for add");
    printf("\n enter 2 for sub");
    printf("\n enter 3 for mul");
    printf("\n enter 4 for div");
    printf("\n enter 5 for modlus");
    printf("\n enter 6 for min");
    printf("\n enter 7 for max");
    printf("\n enter 8 for eql");
    printf("\n select any option for above");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ans = getadd(num1, num2);
        printf("the value of ans %f",ans);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    default:
        printf("invalid");
        break;
    }
}