#include<stdio.h>
int main()
{
	int n,a[10][10]={0},i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[0][i]=i+1;
		a[i][0]=i+1;
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i][j-1]==n)
				a[i][j]=1;
			else
			a[i][j]=a[i][j-1]+1;
		} 
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("%d",a[i][j]); 
		printf("\n"); 
	}
	return 0;
}
