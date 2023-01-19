// ex- module -%
// write a program to split one 2digit number into two 
// write a num=56
// frist=5 second=6

#include <stdio.h>

void main()
{
    int first,second,num;
    printf("the value of num");
    scanf("%d",&num);
    first=num/10;
    second=num%10;
    printf("the value of first is %d and second value is %d",first,second);
    
}