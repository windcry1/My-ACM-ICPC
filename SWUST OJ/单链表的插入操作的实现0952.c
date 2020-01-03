#include<stdio.h>
int main()
{
	int n,cha,x;
	scanf("%d",&n);
	int a[10000],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&cha,&x);
	if(cha<=n&&cha>=1)
	{
		for(i=n+1;i>cha-1;i--)
		{
			a[i]=a[i-1];
		}
		a[cha-1]=x;
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		} 
		printf("%d",a[n]);
		printf("\r\n");
	}
	else printf("error!\n");
	return 0;
}
