#include<stdio.h>
#include<math.h> 
int main()
{
	long long n,b,o,num,t;
	while(scanf("%lld",&n)!=EOF)
	{
		b=0;num=0;t=n;
		while(n!=0)
		{
			b+=(n%2)*pow(10,num);
			n/=2;
			num++;
		}
		num=0;o=0;
		while(t!=0)
		{
			o+=(t%8)*pow(10,num);
			t/=8;
			num++;
		}
		printf("%lld\n%lld\n",b,o);
	}	
	return 0;
} 
