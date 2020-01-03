#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	long long n,m,k,result1,result2,M,N,K;
	int i;
	while(scanf("%lld%lld%lld",&n,&m,&k)!=EOF)
	{
		M=0;N=0;K=0;
		result1=n*m*k-1; 
		for(i=0;;i++)
		{
			if(pow(2,i)>=n)
			{
				N=i;
				break;
			}
		}
		for(i=0;;i++)
		{
			if(pow(2,i)>=m)
			{
				M=i;
				break;
			}
		}
		for(i=0;;i++)
		{
			if(pow(2,i)>=k)
			{
				K=i;
				break;
			}
		}
		result2=N+M+K;
		printf("%lld %lld\n",result1,result2);
	}
	return 0;
}
