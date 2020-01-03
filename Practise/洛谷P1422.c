#include<stdio.h>
int main()
{
    int n;
    double P;
    scanf("%d",&n);
    if(n<=150)
    printf("%.2f",0.4463*n);
    if(n>150&&n<=400)
    printf("%.2f",66.945+0.4663*(n-150));
    if(n>400)
    printf("%.2f",183.52+0.5663*(n-400));
    return 0;
}
