#include"stdio.h"
int main()
{
	int n,r;
	int c(int n,int r);
	scanf("%d %d",&n,&r);
	if(n==0&&r==0)
	{
		EOF;	
	} 
	else
	{
		if(n<r)
		{
			printf("error!\n");
		}
		if(n>=r&&r>=0) 
		{
			printf("%lld\n",c(n,r));
		}
		return 0;
	}
}
long long c(int n,int r)
{
	if(r==0) 
		return 1;
	if(r!=0)
	return c(n,r-1)*(n-r+1)/r;
}

