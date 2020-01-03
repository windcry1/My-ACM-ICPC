#include<stdio.h>
int main()
{
	int n,time;
	while(scanf("%d",&n)!=EOF)
	{
		int t=1;
		n--;
		while(n--)
		{
			t=(t+1)*2; 
		}
		printf("%d\n",t);
	}
	return 0;
} 
