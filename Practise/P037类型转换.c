#include<stdio.h>
main()
{
	int n=256;
	float f=3.6;
	double d=2.5;
	n=f;/*��float��������int���Զ�ת��Ϊint*/ 
	f=n;/*��ʱ��nΪ3����f�Զ���Ϊ3*/ 
	d=f;/*ͬ��*/ 
	printf("n = %d\n",n);
	printf("f = %f\n",f);
	printf("d = %lf\n",d);
	return 0;
}
