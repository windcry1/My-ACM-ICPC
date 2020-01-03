#include<stdio.h>
main()
{
	int n=256;
	float f=3.6;
	double d=2.5;
	n=f;/*将float变量给予int，自动转换为int*/ 
	f=n;/*此时的n为3，故f自动变为3*/ 
	d=f;/*同理*/ 
	printf("n = %d\n",n);
	printf("f = %f\n",f);
	printf("d = %lf\n",d);
	return 0;
}
