#include<stdio.h>
#include<math.h>
int main()
{
	double a[6],b,c,d,t;
	int i;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF)
	{
	b=sqrt((a[2]-a[0])*(a[2]-a[0])+(a[3]-a[1])*(a[3]-a[1]));
	c=sqrt((a[4]-a[0])*(a[4]-a[0])+(a[5]-a[1])*(a[5]-a[1]));
	d=sqrt((a[4]-a[2])*(a[4]-a[2])+(a[5]-a[3])*(a[5]-a[3]));
	t=(b+c+d)/2;
	printf("%.2lf\n",sqrt(t*(t-b)*(t-c)*(t-d)));	
	}
	return 0;
} 
