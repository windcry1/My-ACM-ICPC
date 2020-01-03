#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z,x0,y0,z0,num;
	int n,i;
	while(scanf("%lf%lf%lf",&x0,&y0,&z0)!=EOF)
	{
		num=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf%lf",&x,&y,&z);
		if((fabs(x0+x)==(fabs(x0)+fabs(x)))&&(fabs(y0+y)==(fabs(y0)+fabs(y)))&&(fabs(z0+z)==(fabs(z0)+fabs(z)))) 
		{
			if((x0*y==x*y0)&&(x0*z==x*z0)&&(y0*z==z0*y))
			{
				num++;
			}
		}
		} 
		printf("%.0lf\n",num);
	}
	return 0;
} 
