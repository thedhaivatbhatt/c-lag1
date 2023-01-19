// write a program to findout bmi using foot and inch
#include <stdio.h>

void main()
{
    int foot,inch;
    float weight,totalinch,meter,bmi;
    printf("enter the value of weight into kg");
    scanf("%f",&weight);
    printf("enter value foot");
    scanf("%d",&foot);
    printf("enter the value of inch");
    scanf("%d",&inch);
    totalinch=foot*12;
    totalinch=totalinch+inch;
    meter=totalinch/39.37;
    bmi=weight/(meter*meter);
    printf("the value of bmi %f",bmi);

    
}