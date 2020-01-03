#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,a[53];
	long long num;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		num=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i+1]-a[i]<0)
			{
				num+=(a[i]-a[i+1])*4+5;
			}
			if(a[i+1]-a[i]>0)
			{
				num+=(a[i+1]-a[i])*6+5;
			}
			if(a[i+1]-a[i]==0)
			{
				num+=5;
			}
		}
		printf("%lld\n",num);
	}
	return 0;
} 
