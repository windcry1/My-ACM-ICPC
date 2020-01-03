#include<stdio.h>
int main()
{
	long long n,a[16];
	int i,j;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==-1)
			break;
		for(i=0;i<16;i++)
		{
			a[i]=1;
		}
		
		for(i=1;i<16;i++)
		{
			for(j=1;j<=i;j++)
			{
				a[i]*=j;
			}
		}
		for(i=0;i<16;i++)
		printf("%lld\n",a[i]);
		for(i=0;i<16;i++)
		{
			for(j=i+1;j<16;j++)
			{
				if(a[i]+a[j]==n)
				{
					printf("YES\n");
					break;
				}
			}
			if(a[i]+a[j]==n)
			{
					
				break;
			}
		} 
		if(i==16&&j==16)
		{
			printf("NO\n");
		}
	}
	return 0;
} 
