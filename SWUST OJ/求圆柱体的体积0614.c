#include<stdio.h>
int main()
{
	const double PI=3.14159;
	double r,h,v;
	scanf("%lf%lf",&r,&h);
	v=PI*r*r*h;
	printf("radius:%.3lf\nhigh:%.3lf\nThe volume is:%.3lf\n",r,h,v);
	return 0;
}
