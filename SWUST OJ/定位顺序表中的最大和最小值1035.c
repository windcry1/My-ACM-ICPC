#include<stdio.h>
int a[1000000];
int main()
{
	int n,i,countmax,countmin,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		max=a[0];
		min=a[0];
		countmax=0;
		countmin=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			countmax=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			countmin=i;
		}
	}
	printf("Lmax=%d\n",countmax);
	printf("Lmin=%d\n",countmin);
	return 0;
}
