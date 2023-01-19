// write a program to findout average and sum for 5 student marks
#include <stdio.h>
void main()
{
    int student[5], count,sum;
    float average;
    for (count = 0; count < 5; count++)
    {
        printf("enter the mark of student %d", count + 1);
        scanf("%d", &student[count]);
    }

    // printf("enter the mark of student 2");
    // scanf("%d",&student[1]);
    // printf("enter the mark of student 3");
    // scanf("%d",& student[2]);
    // printf("enter the mark of student 4");
    // scanf("%d",&student[3]);
    // printf("enter the mark of student 5");
    // scanf("%d",&student[4]);

    for (count = 0; count < 5; count++)
    {
        printf("\n mark of student %d are %d ",count+1, student[count]);
    }

    // printf("\n mark of student 2 are %d ",student[1]);
    // printf("\n mark of student 3 are %d ",student[2]);
    // printf("\n mark of student 4 are %d ",student[3]);
    // printf("\n mark of student 5 are %d ",student[4]);
    sum=0;
    for(count=0; count<5;count++)
    {
        sum=sum+student[count];
    }
    printf("\n total mark are %d",sum);
    average=sum/5;
    printf("\n average of std is %f",average);
    printf("\n goodbye");

}