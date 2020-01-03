#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
	if(n==0)
	printf("1\r\n");
	if(n==1)
	printf("55\r\n") ;
	else if(n!=0)
	{
		printf("5");
		for(i=0;i<n-1;i++)
		{
			printf("0");
		}
		printf("5");
		for(i=0;i<n-1;i++)
		{
			printf("0");
		}
		printf("\r\n");
	}
	}
	return 0;
 }  
