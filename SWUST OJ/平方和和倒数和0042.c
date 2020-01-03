#include <stdio.h>
int main()
{
		int a,b,c,t1=0,t2=0,i1,i2;
		double t3=0,r=0,i3;
		scanf("%d %d %d",&a,&b,&c);
		for(i1=1 ;i1<=a; i1++)
		{
			t1+=i1;
		}
		for(i2=1; i2<=b; i2++)
		{
			t2+=i2*i2;
		}
		for(i3=1; i3<=c;i3++)
		{
			t3+=1/i3;
		}
		r=t1+t2+t3;
		printf("%.2lf\n",r);
	return 0;
} 
