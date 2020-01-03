#include<stdio.h>
int main()
{
	int n,t,i;
	while(scanf("%d",&n)!=EOF)
	{
		t=0;
		if(n==0)
		break;	
		while(n!=0)
		{
			t+=n%10;
			n/=10;
		}
		int sum=0;
		for(i=0;;i++)
		{
			if(t/10==0)
			break;
			else
			{
				sum=0;
				while(t!=0)
				{
					sum+=t%10;
					t/=10;
				}
				t=sum;
			}
		}
		printf("%d\n",t); 
	}
	return 0;
}
