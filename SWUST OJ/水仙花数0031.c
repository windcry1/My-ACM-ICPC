#include <stdio.h>
int main()
{
	int m,n,t,a,b,c,i=0;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
	if(m==0 && n==0)
		{
			break;
		}
	for(t=m;t<=n;t++)
	{
		a=t%10;b=((t-a)/10)%10;c=(t-a-b*10)/100;
		if(t==a*a*a+b*b*b+c*c*c)
		{
			i=t;
			printf("%d ",i);
		}
		if(t==n&&i!=0)
		printf("\n");
	}
	if(i==0)
		{
			printf("no\n");
		}
		i=0;
	}
	return 0;
}

