#include<stdio.h>
int a[100001];
int main()
{
	long long n,k,i,j,max,sum,sumx;
	while(scanf("%lld%lld",&n,&k)!=EOF)
	{
		max=0;sumx=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(max<a[i])
				max=a[i];
			sumx+=a[i];
		}
		if(max/k==0||k>sumx)
			printf("0\n");
		else
		{
		for(i=sumx/k+1;i>=max/k;i--) 
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				sum+=a[j]/i;
			}
			if(sum>=k)
			{
				break;
			}
		}
			printf("%lld\n",i);
		}
	}
	return 0;
}
