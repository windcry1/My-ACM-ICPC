#include<stdio.h>
#include<math.h>
int main()
{
	long long n,i,m;
	while(scanf("%lld",&n)!=EOF)
	{
		for(i=0;;i++)
		{
			m=pow(2,i);
			if((m-1)>=n)
			{
				break;
			}
		}
		printf("%lld\n",i);
	}
	return 0;
} 
