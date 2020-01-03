#include<stdio.h>
int main()
{
	int n,t,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=i*i;
		sum+=t;
	}
	printf("%d\n",sum);
	return 0;
}
