#include<stdio.h>
int a[1300001]={0};
int main()
{
	int n,temp,i,count=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
	}
	for(i=0;i<1300000;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			count=i;
		}
	}
	
	printf("%d\n%d\n",count,max);
	return 0;
} 
