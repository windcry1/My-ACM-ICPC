#include<stdio.h>
int main()
{
    long long x,i,n,t;
    scanf("%lld %lld",&x,&n);
    t=1;
    for(i=1;i<=n;i++)
    {
        t=t*x+t;
    }
    printf("%lld",t);
    return 0;
}
