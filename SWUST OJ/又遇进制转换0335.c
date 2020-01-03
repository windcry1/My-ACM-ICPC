#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,sum=0,num=0;
	scanf("%d%d",&a,&n);
	while(n!=0)
	{
		sum+=(n%10)*pow(a,num);
		num++;
		n/=10;
	}
	printf("%d\n",sum);
	return 0;
}
