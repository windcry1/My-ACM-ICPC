#include <stdio.h>
int main()
{
	double i,p;
	scanf("%lf",&i);
	if(100000>=i)
		{
			p=i*0.1;
		}
	if(100000<i && i<=200000)
		{
			p=10000+(i-100000)*0.075;	
		}
	if(200000<i && i<=400000)
		{
			p=17500+(i-200000)*0.05;
		}
	if(400000<i && i<=600000)
		{
			p=27500+(i-400000)*0.03;
		}
	if(600000<i && i<=1000000)
		{
			p=33500+(i-600000)*0.015;
		}
	if(i>1000000)
		{
			p=39500+(i-1000000)*0.01;
		}
		printf("%.0lf\n",p);
	return 0;
} 
