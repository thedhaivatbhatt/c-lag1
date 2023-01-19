// exp. array
#include <stdio.h>
void main()
{
    // array decalring
    int student[5], count;

    //  input
    for (count = 0; count < 5; count++) // count=count+1
    {
        printf("enter the mark of student %d", count + 1); // count+1 only print value +
        scanf("%d", &student[count]);
    }

    // printf("enter the mark of student 2");
    // scanf("%d",&student[1]);
    // printf("enter the mark of student 3");
    // scanf("%d",&student[2]);
    // printf("enter the mark of student 4");
    // scanf("%d",&student[3]);
    // printf("enter the mark of student 5");
    // scanf("%d",&student[4]);

    // output using array
    for (count = 0; count < 5; count++)
    {
        printf("\n mark of student %d are %d",count+1, student[count]);
    }

    // printf("\n mark of student 2 are %d",student[1]);
    // printf("\n mark of student 3 are %d",student[2]);
    // printf("\n mark of student 4 are %d",student[3]);
    // printf("\n mark of student 5 are %d",student[4]);
}