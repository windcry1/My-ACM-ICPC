#include <stdio.h>
int main()
{
	int n=0,x,i,Sn=0,a=0;
    scanf("%d %d",&a,&n);
    x=a;
    for(i=0; i<n; i++) 
    {
        Sn+=x;
        x=x*10+a;
    }
    printf("%d\n",Sn);
    return 0;
}
