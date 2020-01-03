#include<stdio.h>
int C(int n ,int r)
{
	if(r==0)
		return 1;
	else
		return C(n,r-1)*(n-r+1)/r;
}
int main()
{
	int n,r;
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		if(n==0&&r==0)
			break;
		if(n<r)
			printf("error!\n");
		else
			printf("%d\n",C(n,r));
	}
	return 0;
}
