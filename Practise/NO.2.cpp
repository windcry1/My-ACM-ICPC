#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m,num=0,i=0,a[10];
	m=n;
	while(m>0)
	{
		a[i++]=m%10;
		i++;
	}
	num=i;
	int b[10];
	memset(b,0,sizeof(b));
	for(i=0;i<num;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<10;i++)
	{
		if(b[i]!=0)
		printf("%d:%d",i,b[i]);
	}
}
