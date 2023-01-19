// write a program to print "you are short" if user's height is below 5.5 
#include <stdio.h>

void main()
{
  float height;

  printf("enter your height");
  scanf("%f",&height);
  if (height<=5.5)
  {
    printf("you are short");
  }
printf("\n good bye");
    
}