// example of array of str.
#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char name;
};
void main()
{
    struct time country[3];
    int count;
    for (count = 0; count < 3; count++)
    {
        printf("enter hours for country %d", count + 1);
        scanf("%d", &country[count].hours);
        printf("enter minutes_second for country %d", count + 1);
        scanf("%f", &country[count].minutes_second);
        fflush(stdin);
        printf("enter frist_latter of country %d", count + 1);
        scanf("%c", &country[count].name);
    }
    for(count = 0; count < 3; count++)
    {
        printf("the time of country %d is hours : %d minutes_second : %.2f frist_latter : %c ",count+1,country[count].hours,country[count].minutes_second,country[count].name);
    }
}
