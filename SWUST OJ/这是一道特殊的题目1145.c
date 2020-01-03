#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		printf("%g\r\n",fabs(a+b));
	}
	return 0;
} 
