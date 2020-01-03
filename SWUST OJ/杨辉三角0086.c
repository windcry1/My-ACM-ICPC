#include<stdio.h>
#include<string.h> 
int main()
{
	int a[21][21],i,j,k,n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		break;
	for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++)
		{
			a[i][j]=1;
		}
	}
	for(i=2;i<21;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j]; 
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i ;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("%d",a[i][i]);
		printf("\n");
	}
	}
	return 0;
}
