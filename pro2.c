#include <stdio.h>
void main()
{
    int weight,ans,meter;
    float inch ,foot;
    printf("enter the weight ");
    scanf("%d",&weight);
    printf(" enter the value inch");
    scanf("%f",&inch);
    printf("enter the value foot");
    scanf("%f",&foot);
    foot=foot/12;
    printf("foot value is: %f",foot);
    meter=foot*0.3048
}