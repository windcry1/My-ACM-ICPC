#include<stdio.h>
int main()
{
	int n,a[10001],t,i,j;
	float time=0; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		time+=a[i]*(n-i);
	}
	printf("%.2f\n",time/n);
	return 0;
}
