#include <stdio.h>
#include <math.h>
main ()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c); 
	if(b*b-4*a*c > 0.0)
	{
		printf("%g\n",(-b+sqrt(b*b-4*a*c))/2/a);
		printf("%g\n",(-b-sqrt(b*b-4*a*c))/2/a);
	}
	else
	{
		printf("error!");
	}
	return 0;
}
