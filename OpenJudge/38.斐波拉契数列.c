#include<stdio.h>
int main()
{
	int n,a,i,j,ans[25];
	scanf("%d",&n);
	ans[0]=1;ans[1]=1;
	for(i=2;i<=24;i++)
	{
		ans[i]=ans[i-1]+ans[i-2];
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",ans[a-1]);
	}
	return 0;
} 
