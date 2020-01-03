#include<stdio.h>
int main()
{	
	int x,y,i;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
	if(x==0 && y==0)
	{
		break;
	}
	for (i=x;i>0;i--)
	{
		if (x%i==0 &&y%i==0)
			break;
	}
	printf("%d  %d\n", i, x*y / i);
	}
	return 0;
}

