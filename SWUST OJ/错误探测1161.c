#include<stdio.h>
int main()
{
	int n,a[101][101],i,j,zong,heng,num=0;
start:	while(scanf("%d",&n)!=EOF)
	{
		num=0; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		zong=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
				zong++;
		}
		if(zong%2!=0)
		{
			printf("Corrupt\r\n");
			goto start;
		}
		if(zong%2==0)
			num++;
	}
	for(i=0;i<n;i++)
	{
		heng=0;
		for(j=0;j<n;j++)
		{
			if(a[j][i]==1)
				heng++;
		}
		if(heng%2!=0)
		{
			printf("Corrupt\r\n");
			goto start;
		}
		if(heng%2==0)
			num++;
	}
	if(num==2*n)
		printf("OK\r\n");
	} 
	return 0;
}
