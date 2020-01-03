#include<stdio.h>
int main()
{
	int n,o[10000],b[10000],i,j,t;
	while(scanf("%d",&n)!=EOF)
	{
		t=n;
		for(i=0;;i++)
		{
			b[i]=n%2;
			n/=2;
			if(n==0)
				break;
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",b[j]);
		}
		printf("\n");
		for(i=0;;i++)
		{
			o[i]=t%8;
			t/=8;
			if(t==0)
				break;
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",o[j]);
		}
		printf("\n");
	}
	return 0; 
} 
