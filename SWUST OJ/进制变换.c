#include <stdio.h>
int main()
{
    int c[32],i=0,n,d[32],t;
    scanf("%d", &n); 
    {
    t=n;i=0;
    do 
	{
        c[i++]=t%2;
        t/=2;
    } while(t!=0);
    for(i--;i>=0;i--)
        printf("%d",c[i]);
    } 
    return 0;
	}
