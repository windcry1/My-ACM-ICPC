#include<stdio.h>
int main()
{
	int i,n,t,j,sum;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		sum=0;
		scanf("%d",&t);
		for(j=t-1;j>=1;j--)
		{
			if(t%j==0)
			sum+=j;
		}
		printf("%d\n",sum);
	}
	sum=0;scanf("%d",&t);
	for(j=t-1;j>=1;j--)
	{
		if(t%j==0)
		sum+=j;
	}
	printf("%d\n",sum);
	return 0;
 } 
