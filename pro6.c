// write a program to findout area of rectagle using scanf take langth and breath as input

#include <stdio.h>

void main()
{
    int length,breath,tamp;
    printf("enter the value  of length");
    scanf("%d",&length);
    printf("enter the value of breath");
    scanf("%d",&breath);

    tamp=length*breath;
    printf(" ans is area of rectagle %d",tamp);

    
}