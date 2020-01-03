#include<stdio.h>
int main()
{
	int a[101],i,j,n;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		sum+=j;
	}
	printf("%.2lf",sum/n);
	return 0;
} 
