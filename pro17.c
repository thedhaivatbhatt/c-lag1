// write a program to findout which is smaller out of given to finout is smaller out of given 2 offices
// height,breadth,office
#include <stdio.h>

void main()
{
    int height1, breadth1, office1, height2, breadth2, office2;
    printf("enter the value of height1:");
    scanf("%d", &height1);
    printf("enter the value of breadth1:");
    scanf("%d", &breadth1);
    printf("enter the value of height2:");
    scanf("%d", &height2);
    printf("enter the value of breadth2:");
    scanf("%d", &breadth2);
    office1=height1*breadth1;
    office2=height2*breadth2;
    if(office1<office2)
    {
        printf("the size of office1 is smaller");
    }
    else
    {
        printf("\n the size of office2 is smaller");
    }
    printf("\n good bye");
}