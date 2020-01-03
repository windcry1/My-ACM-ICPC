#include"stdio.h"
int main()
{
	long long n,r;
	scanf("%lld %lld",&n,&r);
	if(n==0&&r==0)
	{
		EOF;	
	} 
	else
	{
		if(n<r||r<0)
		{
			printf("error!\n");
		}
		if(n>=r&&r>=0) 
		{
			long long m=1;
	        long long t=1;
	        long long k=1;
			long long result;
			for(int i=1;i<=n;i++)
			{
				m=m*i;
			}
			for(int i=1;i<=n-r;i++)
			{
				t=t*i;
			}
			for(int i=1;i<=r;i++)
			{
				k=k*i;
			}
			result=m/(t*k);
			printf("%lld\n",result);
		}
		return 0;
	}
}

