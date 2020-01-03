#include<stdio.h>
int main()
{
	int i,j,N,m,num=0;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
