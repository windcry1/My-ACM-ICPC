#include<stdio.h>
int main()
{
	int i,n,a[10000],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
} 
