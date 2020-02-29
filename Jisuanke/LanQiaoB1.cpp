#include <stdio.h>
int main()
{
	int	N,i,t;
	t=1;
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{
		t=(t+1)*2;
	}
	printf("%d\n",t);
	return 0;
} 
