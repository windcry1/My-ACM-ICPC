#include<stdio.h>
int main()
{
	int i,n,t,max,min;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
		scanf("%d",&t);
		if(t%2==1)
		printf("0 0\n");
		else
		{
			max=t/2;
			if(t%4==0)
			{
				min=t/4;
			}
			else
			{
				min=t/4+1;
			}
			printf("%d %d\n",min,max);
		}
		
		}
	}
	return 0;
 } 
