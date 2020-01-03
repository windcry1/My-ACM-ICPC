#include<stdio.h>
int main()
{
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 || i%5==0 || i%10==3 || i%10==5 || (i/10)%10==3||(i/10)%10==5)
		continue;
		sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}
