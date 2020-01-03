#include <stdio.h>
int main() 
{
	int i,N;
	double r,x,y,t;
		scanf("%d",&N);
		x=2; y=1; r=0; 
		for (i=0; i<N; i++)
		{
		r+=x/y;
		t=x;
		x=x+y;
		y=t;
		}
		printf("%.2lf\n",r);
	return 0;
}
