#include<stdio.h>
#include<string.h>
long long F(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result*=i;
	}
	return result;
}
long long C(int a,int b)
{
	long long result;
	result=F(a)/(F(b)*F(a-b));
	return result;
} 
int main()
{
	long long n,result=0,i;
	scanf("%lld",&n);
	i=0;
	while(n>=3)
	{
		result+=C(n,i);
		i++;n--;
	}
	printf("%lld",result);
	return 0;
}
