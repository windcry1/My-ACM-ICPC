#include<stdio.h>
int main()
{
	int n,u,d,time;
	while(scanf("%d%d%d",&n,&u,&d)!=EOF)
	{
		if(n==0&&u==0&&d==0)
			break;
		time=0;
		while(1)
		{
			n-=u;
			time++;
			if(n<=0)
				break;
			n+=d;
			time++;
		}
		printf("%d\n",time);
	}
	
	return 0;
}
