#include <stdio.h>
#include <math.h>
main()
{
	double capital,deposit,n;
	scanf("%lf %lf",&n,&capital);
	printf("%lf",pow(1.0225,n)*capital);
	return 0;
 } 
