// example of with argument without argument return function

#include<stdio.h>
#include<stdlib.h>
void printline(char symbol,int size)
{
    // char sign ='*';
    int count=0;
    for(count=0;count<size;count++)
         printf("%c",symbol);
   
}
void main()
{
    char symbol;
    int size;

    printf("enter the size of line");
    scanf("%d",&size);

    fflush(stdin);
    printf("enter symbol for line");
    scanf("%c",&symbol);
    printf("har har mahadev \n");
    printline(symbol,size);
}