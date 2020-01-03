#include<stdio.h>
int main()
{
	int i,j,N,m,a[101],num=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<N;i++)
	{
		if(a[i]==m)
		num++;
	}
	printf("%d",num);
	return 0;
}
