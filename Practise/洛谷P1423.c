#include<stdio.h>
int main()
{
    double total,step=2,temp,distance,i;
    scanf("%lf",&distance);
    for(i=1;total<=distance;i++)
    {
        total+=step;
        step*=0.98;
    }
    printf("%.0lf",i-1);
    return 0;
}
