#include <stdio.h>
int main ()
{
	int N,i,a,c;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a);
		c=2*a*a-2*a+1 ;
		printf("%d\n",c);
	}
	return 0; 
}
