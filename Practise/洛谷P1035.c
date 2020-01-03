#include<stdio.h>
int main()
{
    double i,Sn=0,K;
    scanf("%lf",&K);
    for(i=1;Sn<=K;i++)
    {
        Sn+=1/i;
    }
    printf("%lf",i-1);
    return 0;
}
