#include<stdio.h>
int a[1000001];
int main()
{
	int n,max=0,i,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	if(a[0]<a[n-1])
	min=a[0];
	else min=a[n-1];
	printf("%d",max-min);
	return 0;
}

