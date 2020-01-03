#include<stdio.h>
int main()
{
	double A,M,a[50],b[50],max;
	int i;
	while(scanf("%lf%lf",&A,&M)!=EOF)
	{
		max=0;
		for(i=0;i<A;i++)
		{
			scanf("%lf%lf",&a[i],&b[i]);
		}
		for(i=0;i<A;i++)
		{
			if(max<(a[i]/b[i]))
			max=a[i]/b[i];
		}
		for(i=0;i<A;i++)
		{
			if(max==(a[i]/b[i]))
			break;
		}/*ÌáÈ¡i*/ 
		if((M/(9/5*max)*b[i])<1)
		printf("he is die!\n");
		if(M/(9/5*max)*b[i]>=1 && M/max*b[i]<1)
		printf("%lf\n",M/(9/5*max)*b[i]); 
	}
	return 0;
} 
