#include<stdio.h>
int main()
{
	int n,sum=0,i,j,temp=1;
	scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			temp*=j; 
		}
	printf("%d",temp);
	return 0;
}
