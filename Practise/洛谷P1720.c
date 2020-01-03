#include<stdio.h>
int main()
{
    long long n,i,a[49];
    double result;
    a[1]=1;a[2]=1;
    scanf("%lld",&n);
    for(i=1;i<47;i++)
    {
        a[i+2]=a[i+1]+a[i];
    }
    result=a[n];
    printf("%.2lf",result);
    return 0;
}
