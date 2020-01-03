#include<stdio.h>
int main()
{
	int num,n,m,sum;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		num=m/n;sum=m/n;
		while(num>=3)
		{
			num-=3;
			sum++;
			num++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
