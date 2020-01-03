#include<stdio.h>
#include<math.h>
int main()
{
	double n,k,result=0,t;
	int i,m;
	scanf("%lf%d%lf",&n,&m,&k);
	n*=12;
	for(i=0;i<m;i++)
	result=(result+k)/(1+n);
	printf("%.2lf\n",result);
	return 0;
}
