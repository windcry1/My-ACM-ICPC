#include<stdio.h>
#include<math.h>
int main()
{
	long long n,bin,oct,t,num;
	while(scanf("%lld",&n)!=EOF)
	{
		bin=0;t=n;num=0;
		while(t!=0)
		{
				bin=bin+(t%2)*pow(10,num);
				t/=2;
				num++;
		}
		t=n;oct=0; num=0;
		while(t!=0)
		{
			oct=oct+(t%8)*pow(10,num);
			t/=8;
			num++;
		}
		printf("%lld\n%lld\n",bin,oct);
	}
	return 0;
} 
