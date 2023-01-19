// write a program to accept name as an input from user
#include <stdio.h>
void main()
{
    char name[25];
    int count = 0,copy;

    printf("enter the name");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if(name[count]=='\n')
        {
            break;
        }
    }

    //  scanf("%c",&name[1]);
    //  scanf("%c",&name[2]);
    //  scanf("%c",&name[3]);
    //  scanf("%c",&name[4]);
    //  scanf("%c",&name[5]);
    //  scanf("%c",&name[6]);
    //  scanf("%c",&name[7]);
    printf("\n your name is \n");
    copy=count;
    for (count = copy; count >=0; count--)
    {

        printf("%c", name[count]);
    }

    // scanf("%c",&name[1]);
    // scanf("%c",&name[2]);
    // scanf("%c",&name[3]);
    // scanf("%c",&name[4]);
    // scanf("%c",&name[5]);
    // scanf("%c",&name[6]);
    // scanf("%c",&name[7]);
}