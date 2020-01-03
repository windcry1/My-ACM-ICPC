#include<stdio.h>
int main()
{
	int n,i,a[20001],t,j;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[i][t]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<20001;j++)
		{
			if(a[i][j]==1)
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}
