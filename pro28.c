// switch (name of variable)
// {
// case 10:
//     /* code */
//     break;
// case 11:
//     /* code */
//     break;
// default:
//     break;
// }
//write a program to findout whether the give alphabet is vowel or not
#include<stdio.h>
void main()
{
    char latter;
    printf("enter the latter");
    scanf("%c",&latter);
    switch (latter)
    {
    case 'a' :
        printf("it is vowel");
        break;
    case 'e':
        printf("it is vowel");
        break;
    case 'i':
        printf("it is vowel");
        break;
    case 'o':
        printf("it is vowel");
        break;
    case 'u':
        printf("it is vowel");
        break;
    case 'A' :
        printf("it is vowel");
        break;
    case 'E':
        printf("it is vowel");
        break;
    case 'I':
        printf("it is vowel");
        break;
    case 'O':
        printf("it is vowel");
        break;
    case 'U':
        printf("it is vowel");
        break;


    
    default:
        break;
    }
    printf("invalid");
}