#include <stdio.h>
main ()
{
	const double PI=3014159265358979;
	double r;
	printf("Input r:");
	scanf("%lf",&r);
	printf("circumference = %f\n",2*PI*r);
	printf("area= %f\n",PI*r*r);
 } 
