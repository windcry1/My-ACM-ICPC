#include<stdio.h>
int main()
{
	long long n,a[1000],i,flag;
	a[0]=1;a[1]=1;a[2]=2;
	for(i=3;i<73;i++)
	{
		a[i]=a[i-2]+a[i-1]+a[i-3];
	}
	scanf("%lld",&n);
	printf("%lld",a[n]);
	while(scanf("%lld",&n)!=EOF)
	{
		if(flag)
		printf("\n");
		flag=1;
		printf("%lld",a[n]);
	}
	return 0;
} 
