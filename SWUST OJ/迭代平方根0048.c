#include <stdio.h>
#include <math.h> 
int main()
{
	while(1)
	{
		float a,x,y;
		scanf("%f",&a);
		y=a;
		while(fabs(y-x)>=1e-5)
		{
			x=y;
			y=(y+a/y)/2;
		}
		printf("%.3f\n",y);
	}
	return 0;
}
