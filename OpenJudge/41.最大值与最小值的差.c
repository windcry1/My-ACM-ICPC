#include<stdio.h>
int main()
{
	int M,i,min=10000,max=-10000,x;
	scanf("%d",&M);
	for(i=1;i<=M;i++)
	{
		scanf("%d",&x);
		if(min>x)
		min=x;
		if(max<x)
		max=x;
	}
	printf("%d",max-min); 
	return 0;
}  
