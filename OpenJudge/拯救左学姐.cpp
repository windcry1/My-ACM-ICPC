#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	long long n,k,other;
	int i;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++)
	{
		
	}
	if(n<0||n>pow(10,16))
	{
		printf("Impossible\n");
	}
	else
	{
		other=n/(k+1);
		printf("%lld\n",2*(n-other)+other+1);
	}	
	return 0;
} 
