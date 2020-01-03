#include<stdio.h>
int main()
{
	int x,n,y,i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	scanf("%d %d", &x, &y);
	for (i=x; i<=x && i>0; i--)
	{
		if (x%i == 0 && y%i == 0)
			break;
	}
	printf("%d %d %d\n",j+1,x*y/i,i);
	}
	return 0;
}
