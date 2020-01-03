#include<stdio.h>
int main()
{
	double a,b;//定义双精度浮点数 
	scanf("%lf%lf",&a,&b);//输入（双精度浮点数用%lf 
	if(a<=b)printf("%.6lf",a);//输出，保留6位 
	else printf("%.6lf",b);
	return 0;
}

