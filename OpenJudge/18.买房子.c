#include<stdio.h>
int main()
{
	double K,P=200,N,i,R=0; 
	scanf("%lf %lf",&N,&K);
	for(i=1;i<=21;i++)
	{
		R+=N;
		if(P<=R)
		break;
		P*=(1+K/100.0);
		
	}
	if(i<=20)
	{
		printf("%.0lf",i);
	}
	else printf("Impossible");
	return 0;
}
