#include<stdio.h>
int main()
{
	int n,x,y,ans;
	scanf("%d %d %d",&n,&x,&y);
	if(y%x==0)
	{
		ans=y/x;
		n-=ans;
	}
	else if(y/x<10)
	{
		ans=y/x+1;
		n-=ans;
	}
	else if(y/x>=n)
	{
		n=0;
	}
	printf("%d\n",n);
	return 0;
}
