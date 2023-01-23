// example of with argument without argument return function
//write a program to perform addition using function

#include<stdio.h>
void getadd(int a,int b)
{
        int answer;
        answer=a +b;
        printf("the value of answer is %d",answer);


}
void main()
{
    int num1,num2;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    getadd(num1,num2);
}