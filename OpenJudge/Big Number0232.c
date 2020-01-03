#include<stdio.h>
int main()
{
	int i,n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1)
		break;
		if(n==0)
		printf("1\n");
		else if(n==1)
		printf("55\n");
		else
		{
			printf("5");
		for(i=1;i<n;i++)
		{
			printf("0");
		}
		printf("5");
		for(i=1;i<n;i++)
		{
			printf("0");
		}
		printf("\n");
		}
	}
	return 0;
}
