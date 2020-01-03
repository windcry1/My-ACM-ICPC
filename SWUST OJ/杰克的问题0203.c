#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double a[6],b[3],t;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6])!=EOF)
	{
		b[0]=sqrt((a[2]-a[0])*(a[2]-a[0])+(a[3]-a[1])*(a[3]-a[1]));
		b[1]=sqrt((a[4]-a[0])*(a[4]-a[0])+(a[5]-a[1])*(a[5]-a[1]));
		b[2]=sqrt((a[4]-a[2])*(a[4]-a[2])+(a[5]-a[3])*(a[5]-a[3]));
		t=(b[0]+b[1]+b[2])/2;
		//printf("%lf\n",b[0]); 
		printf("%.1lf\n",sqrt((t-b[0])*t*(t-b[1])*(t-b[2])));
	}
	return 0;
} 
