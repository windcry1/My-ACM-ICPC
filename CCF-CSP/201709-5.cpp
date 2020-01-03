//Author:LanceYu
#include<stdio.h>
int main()
{
	int n,m,l,r,v,i,j,a[100001],sum[100001];
	sum[0]=0;
	char opt;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	while(m--)
	{
		getchar();
		opt=getchar();
		if(opt=='1')
		{
			scanf("%d%d%d",&l,&r,&v);
			if(v==1)
				continue;
			for(i=l;i<=r;i++)
			{
				if(a[i]>=v&&!(a[i]%v))
				{
					a[i]/=v;
					for(j=i;j<=n;j++)
						sum[j]-=(v-1)*a[i];
				}
			}
		}
		else
		{
			scanf("%d%d",&l,&r);
			printf("%lld\n",sum[r]-sum[l-1]);
		}
	}
	return 0;
}

