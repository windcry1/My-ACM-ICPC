#include <stdio.h>
int main()
{
	int i,n,r,t=1;
	while(scanf("%d %d",&n,&r)!=EOF)
	{
	if(n==0 && r==0)
	{
		break;
	}
	if(n<r)
	{
		printf("error!\n");
	}
	else
	{
	for(i=1;i<=r;i++)
	{
		t=t*(n-i+1) /i;
	}
	printf("%d\n",t);
	t=1;
	}	
	}
	return 0;
 } 
 
