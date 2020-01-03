#include<stdio.h>
int main()
{
	int n,i,j,a[51]={0},b[51]={0},num=0,t;
	char c[51];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				num++;
				c[i]=a[i];
			}
		}
	}
	for(i=0;i<51;i++)
	{
		for(j=i;j<50;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	printf("%d\n",num);
	for(i=0;i<50;i++)
	{
		if(c[i]==0)
			continue;
		else
		printf("%d ",c[i]);
	}
	if(c[50]!=0)
	printf("%d\n",c[i]);
	return 0;
}
