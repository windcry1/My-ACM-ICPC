#include <stdio.h>
int main()
{
		int n;
		while(scanf("%d",&n)!=EOF)
		{
		int i,a=1,b=0,c=0;
		if(n==-1)
		{
			break;
		}
		for(i=1;i<=n;i++)
		{
			c=3*a+2*b;
			b=a+b; 
			a=c;
		}
		printf("%d, %d\n",a,b);
	}
	return 0; 
 } 
 
