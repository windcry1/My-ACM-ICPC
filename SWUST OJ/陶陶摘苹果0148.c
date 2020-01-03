#include<stdio.h>
int main()
{
	int a[10],h,num=0,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&h);
	for(i=0;i<10;i++)
	{
		if(a[i]<=30+h)
		num++;
	}
	printf("%d\n",num);
	return 0;
}
