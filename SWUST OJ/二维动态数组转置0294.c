#include<stdio.h>
int main()
{
	int i,j,m,n,a[100][100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("%d\n",a[m-1][i]);
	}
	return 0;
}
