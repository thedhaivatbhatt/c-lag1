#include <stdio.h>

void main()
{
   char latter;
   printf("enter the latter:");
   scanf("%c",&latter);
   if (latter=='a' || latter=='A')
   {
    printf(" it is vowel");
   }
   else if (latter=='e' || latter=='E')
   {
    printf(" it is vowel");
   } 
   else if (latter=='i' || latter=='I')
   {
    printf(" it is vowel");
   } 
   else if (latter=='o' || latter=='O')
   {
    printf(" it is vowel");
   } 
   else if (latter=='u' || latter=='U')
   {
    printf(" it is vowel");
   }
   else
   {
    printf("\n it is not vowel");
   }

   printf("\n good bye"); 
}