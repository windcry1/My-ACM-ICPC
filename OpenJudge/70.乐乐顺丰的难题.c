#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		int a[10];
		memset(a,0,sizeof(a));
	for(i=0;;i++)
	{
		a[n%10]++;
		n/=10;
		if(n==0)
		break; 
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		{
			printf("the number of %d is %d\n",i,a[i]);
		}
	}
	}
	return 0;
} 
