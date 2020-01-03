#include<stdio.h>
#include<string.h>
int dis[1000000] ;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,time=1,t=1,a=0,b=0,v=1;
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a);//p从1开始0处为0，为了计算方便
			dis[i]=a-b;//倒排dis 
			b=a;
	}
	//for(i=0;i<n;i++)
	//printf("%d ",dis[i]);
	for(i=0;i<=n-2;i++)
		{
			if((t*dis[i+1])%dis[i]!=0)
			t=t*dis[i+1]/dis[i]+1;
			else 
			t=t*dis[i+1]/dis[i];
			time+=t;
			//printf("%d \n",t); 
		}
	printf("%d\n",time);
	}
	return 0;
}
