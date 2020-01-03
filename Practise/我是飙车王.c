#include<stdio.h>
#include<string.h>
int dis[1000000] ;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,time=1,t=1,a=0,b=0;
		double v1,v2;
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a);//p从1开始0处为0，为了计算方便
			dis[i]=a-b;//倒排dis 
			b=a;
	}
	//for(i=0;i<n;i++)
	//printf("%d ",dis[i]);
	v0=dis[0];time=1;
	for(i=1;i<n;i++)
	{
		v2=v1;
		for(t=1;;t++)
		{
			v1=(double)dis[i]/t;
			if(v1<=v2)
			{
				time+=t;
				//printf("%lf %lf\n",v1,v2);
				break;
			}
		} 
		//printf("%d \n",t); 
	}
	printf("%d\n",time);
	//for(i=0;i<n;i++) 
	//printf("%d\n",v[i]);
	}
	return 0;
}
