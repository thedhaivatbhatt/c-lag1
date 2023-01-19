// example of multiarray
#include <stdio.h>
void main()
{
    int student[5][5], count = 0, flash = 0, sum[5];
    float avg;
    for (flash = 0; flash < 5; flash++)
    {
        printf(" student %d", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\n enter the mark of subject %d", count + 1);
            scanf("%d", &student[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        printf(" \n student %d are", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\n for subject %d = %d ", count + 1, student[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        sum[flash] = 0;
        // printf(" \n student %d", flash + 1);
        for (count = 0; count < 5; count++)
        {
            sum[flash] = sum[flash] + student[flash][count];
        }
        printf("\n the value of sum for student %d is %d ", flash + 1, sum[flash]);
    }
    avg=0;
    avg=avg+sum[0];
    avg=avg+sum[1];
    avg=avg+sum[2];
    avg=avg+sum[3];
    avg=avg+sum[4];

    avg=avg/5;

    printf("\n avg :%f",avg);

    //    sum[1]=0;
    //    for(count=0;count<5;count++)
    //    {
    //     sum[1]=sum[1]+student[1][count];
    //    }
    //    printf("\n the value of sum for student 2 is %d ",sum[1]);
}