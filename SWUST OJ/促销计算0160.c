#include<stdio.h>
int main()
{
	double n;
	scanf("%lf",&n); 
	if(n>=1000&&n<2000)
	printf("discount=0.95,pay=%g\n",n*0.95);
	if(n<1000&&n>=0)
	printf("discount=1,pay=%g\n",n);
	if(n<3000&&n>=2000)
	printf("discount=0.9,pay=%g\n",n*0.9);
	if(n>=3000&&n<5000)
	printf("discount=0.85,pay=%g\n",n*0.85);
	if(n>=5000)
	printf("discount=0.8,pay=%g\n",n*0.8);
	return 0;
}
