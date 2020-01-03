#include<stdio.h>
int main()
{
	int M,N,t;
	scanf("%d%d",&M,&N);
	if(M==2*N)
	{
		printf("B\n");
	}
	else
	{
	if(M<2*N)
	{
		N=M-N;
	}	
	printf("%c\n",(M-N-1)%2==0?'B':'A');
	}
	return 0;
} 
