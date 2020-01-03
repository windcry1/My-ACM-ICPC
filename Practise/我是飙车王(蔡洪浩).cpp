#include<bits/stdc++.h>
long long dis[1000000];
int n;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		long long a,b=0,time=1,i,temp=1;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			dis[i]=a-b;
			b=a;
		}
		for(i=n-2;i>=0;i--)
		{
			long long t=(temp*dis[i])/dis[i+1];
			if((temp*dis[i])%dis[i+1]!=0)
			t++;
			time+=t;
			temp=t;
		}
		printf("%lld\n",time);
	}
	return 0;
}
