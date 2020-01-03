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
		scanf("%d",&a);//p?1??0??0,??????
			dis[i]=a-b;//??dis 
			b=a;
	}
	//for(i=0;i<n;i++)
	//printf("%d ",dis[i]);
	for(i=0;i<=n-2;i++)
		{
			int t=(v*dis[i+1])/dis[i];
			if((v*dis[i+1])%dis[i]!=0)
			t++;
			time+=t;
			v=t;
			//printf("%d \n",t); 
		}
	printf("%d\n",time);
	}
	return 0;
}
