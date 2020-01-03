#include<stdio.h>
int t=1;
int ncnm(int n)
{
	t*=n;
	return t;
}
int main()
{
	int a,i,sum;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=ncnm(i);
	}
	printf("%d\n",sum);
	return 0;
}
