#include <cstdio>
 
int n,now,i,a[4]={6,8,4,2};
 
int main()
{
    scanf("%d",&n);
    now=1;
    while (n>0)
    {
	    for(i=1;i<=n%10;i++)
          if(i!=5) now=now*i%10;
        n=n/5;
        now=now*a[n%4]%10;
    }
    printf("%d",now);
    return 0;
}

