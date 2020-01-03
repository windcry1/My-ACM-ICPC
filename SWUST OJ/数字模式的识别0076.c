#include<stdio.h>
#include<string.h>
int a[2000001];
int main()
{
	int i,n,t,max=0;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	for(i=0;i<2000001;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			t=i;
		}
	}
	printf("%d\n",t);
	return 0;
}
