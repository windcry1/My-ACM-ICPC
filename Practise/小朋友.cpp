#include<stdio.h>
#include<math.h>
int Fact(int n ,int u ,int d);
int main()
{
	int n,u,d,b;
	while(~scanf("%d %d %d",&n,&u,&d))
	{
		int sum;
		if(n==0&&u==0&&d==0)
		{
			break;
		}
		if(d < n &&n < 1000)
		{
		sum=Fact(n,u,d);
		printf("%d\n",sum);
	}
	else 
	{
		return 0;
	}
	}
	return 0;
 } 
 int Fact(int n ,int u,int d)
 {
 	return (n-2)/(u-d)*2+1;
 }
