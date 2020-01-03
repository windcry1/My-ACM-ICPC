#include<stdio.h>
int main()
{
	int i,n;
	long long a[72];
	scanf("%d",&n);
	a[0]=0;a[1]=1;a[2]=1;
	for(i=3;i<72;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	printf("%lld\n",a[n]);
	return 0;
}
