#include<stdio.h>
int main()
{
	int n,i;
	double a[10000],max,min,sum;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		max=a[0];min=a[0];sum=0;
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			max=a[i];
			if(min>a[i])
			min=a[i];
			sum+=a[i];
		}
		printf("%.2lf\n",(sum-min-max)/(n-2));
	}
	return 0;
}
