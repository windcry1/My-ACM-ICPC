#include <stdio.h>
int main()
{
		double M,N,t,s,i;
		scanf("%lf %lf",&M,&N);
		t=M;s=M;
		for(i=1; i<=N; i++)
		{
			t=t/2;
			s+=2*t;
		}
		s=s-2*t;
		printf("%.2lf %.2lf\n",t,s);
	return 0;
}
