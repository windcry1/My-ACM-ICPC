#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	int t;
	scanf("%lf%lf",&a,&b);
	t=log10(b)/log10(a);
	printf("%d\n",t);
	return 0;
}
