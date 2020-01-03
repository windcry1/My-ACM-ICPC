#include<stdio.h>
int main()
{
	int n,i,a[21],c;
	scanf("%d",&n);
	a[0]=1;a[1]=1;
	for(i=2;i<21;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		printf("%d\n",a[c-1]);
	}
	return 0;
}
