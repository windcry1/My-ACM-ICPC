#include<stdio.h>
int main()
{
	int n,num=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%2==1)
		num++;
		n/=2;
	}
	printf("%d\n",num);
	return 0;
}
