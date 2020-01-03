#include<stdio.h>
int main()
{
	double max=0;
	int i,j,k,a,b,N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	a=1;b=N;
	for(i=1;i<=N ;i++)
	{
		for(j=N;j>0;j--)
		{
			if(B*i<A*j&&i*b>a*j)
			{
				a=i;b=j;
			}
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}
