// write a program to take input of five country time in hours, minutes.second,frist_latter of country
#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char name;
} country3;
void main()
{
    struct time country1, country2;
    printf("enter country1 hours");
    scanf("%d", &country1.hours);
    printf("enter country1 minutes and second");
    scanf("%f", &country1.minutes_second);
    fflush(stdin);
    printf("enter country1 frist_latter");
    scanf("%c", &country1.name);
    // country2
    printf("enter country2 hours");
    scanf("%d", &country2.hours);
    printf("enter country2 minutes and second");
    scanf("%f", &country2.minutes_second);
    fflush(stdin);
    printf("enter country2 frist_latter");
    scanf("%c", &country2.name);
    // country3
    printf("enter country3 hours");
    scanf("%d", &country3.hours);
    printf("enter country3 minutes and second");
    scanf("%f", &country3.minutes_second);
    fflush(stdin);
    printf("enter country3 frist_latter");
    scanf("%c", &country3.name);

    printf("\n the time of country1 is hours:%d , minutes.second : %f and frist_latter of country1: %c ",country1.hours,country1.minutes_second,country1.name);
    printf("\n the time of country2 is hours:%d , minutes.second : %f and frist_latter of country2: %c ",country2.hours,country2.minutes_second,country2.name);
    printf("\n the time of country3 is hours:%d , minutes.second : %f and frist_latter of country3: %c ",country3.hours,country3.minutes_second,country3.name);
}