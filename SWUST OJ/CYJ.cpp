//³Âåû¾ı 2019/2/9 17:00:10
#include <stdio.h>
int main()
{
	double eps,sum=0;
	int n,i;
	scanf("%lf",&eps);
	for(n=1;1.0/(3*n-2)>eps;n++)
	{
		if(n%2==1)
			i=3*n-2;
		else
			i=-3*n+2;
		sum+=1.0/i;
	}
	if(n%2==1)
		i=3*n-2;
	else
		i=-3*n+2;
	sum+=1.0/i;
	printf("sum = %.6lf\n",sum);
	return 0;
}
