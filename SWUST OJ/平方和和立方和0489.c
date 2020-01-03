#include<stdio.h>
int main()
{
	long long i,m,n,result1,result2,t;
	while(scanf("%lld%lld",&m,&n)!=EOF)
	{
		result1=0;result2=0;
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		for(i=m;i<=n;i++)
		{
			if(i%2==0)
			{
				result1+=i*i;
			}
			if(i%2==1)
			{
				result2+=i*i*i;
			}
		}
		printf("%lld %lld\n",result1,result2);
	}
	return 0;
}
